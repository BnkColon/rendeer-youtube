#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print """Content-Type:text/html"""
print

form=cgi.FieldStorage()
 
if form.has_key("link"):
	link = form["link"].value
	lista = link.split("v=")
	#print lista[-1]
	#print form["link"].value
	print ("""
		<h1>Your video embedded</h1>
		<iframe width="854" height="510" src="https://www.youtube.com/embed/%s" frameborder="0" allowfullscreen></iframe>
		""" % lista[-1])		
	#<br>
	print """<br>"""
	print ("""This is the code""")
	print """<br>""" 
	theCode = ("""<iframe width=\"854\" height=\"510\" src=\"https://www.youtube.com/embed/%s\" frameborder=\"0\" allowfullscreen></iframe>
		""" % lista[-1])
	print theCode.replace("<", "&#60")
	print theCode.replace(">", "&#62")

