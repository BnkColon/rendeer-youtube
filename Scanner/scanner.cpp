// High Level Class

// this file is: scanner.cpp
// g++ -o scanner scanner.cpp
// ./scanner



#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;
int main(){


cout << endl<<endl;


cout  << "        SSSSSSSSSSSSSSS                                                                                                                     " << endl                                                                                                                   
      << "      SS:::::::::::::::S                                                                                                                    " << endl 
      << "      S:::::SSSSSS::::::S                                                                                                                   " << endl 
      << "      S:::::S     SSSSSSS                                                                                                                   " << endl 
      << "      S:::::S                cccccccccccccccc  aaaaaaaaaaaaa   nnnn  nnnnnnnn    nnnn  nnnnnnnn        eeeeeeeeeeee    rrrrr   rrrrrrrrr    " << endl 
      << "      S:::::S              cc:::::::::::::::c  a::::::::::::a  n:::nn::::::::nn  n:::nn::::::::nn    ee::::::::::::ee  r::::rrr:::::::::r   " << endl 
      << "       S::::SSSS          c:::::::::::::::::c  aaaaaaaaa:::::a n::::::::::::::nn n::::::::::::::nn  e::::::eeeee:::::eer:::::::::::::::::r  " << endl 
      << "        SS::::::SSSSS    c:::::::cccccc:::::c           a::::a nn:::::::::::::::nnn:::::::::::::::ne::::::e     e:::::err::::::rrrrr::::::r " << endl 
      << "          SSS::::::::SS  c::::::c     ccccccc    aaaaaaa:::::a   n:::::nnnn:::::n  n:::::nnnn:::::ne:::::::eeeee::::::e r:::::r     r:::::r " << endl 
      << "             SSSSSS::::S c:::::c               aa::::::::::::a   n::::n    n::::n  n::::n    n::::ne:::::::::::::::::e  r:::::r     rrrrrrr " << endl 
      << "                  S:::::Sc:::::c              a::::aaaa::::::a   n::::n    n::::n  n::::n    n::::ne::::::eeeeeeeeeee   r:::::r             " << endl 
      << "                  S:::::Sc::::::c     ccccccca::::a    a:::::a   n::::n    n::::n  n::::n    n::::ne:::::::e            r:::::r             " << endl 
      << "      SSSSSSS     S:::::Sc:::::::cccccc:::::ca::::a    a:::::a   n::::n    n::::n  n::::n    n::::ne::::::::e           r:::::r             " << endl 
      << "      S::::::SSSSSS:::::S c:::::::::::::::::ca:::::aaaa::::::a   n::::n    n::::n  n::::n    n::::n e::::::::eeeeeeee   r:::::r             " << endl 
      << "      S:::::::::::::::SS   cc:::::::::::::::c a::::::::::aa:::a  n::::n    n::::n  n::::n    n::::n  ee:::::::::::::e   r:::::r             " << endl 
      << "       SSSSSSSSSSSSSSS       cccccccccccccccc  aaaaaaaaaa  aaaa  nnnnnn    nnnnnn  nnnnnn    nnnnnn    eeeeeeeeeeeeee   rrrrrrr             " << endl<< endl ;
int number;
    string line;
    stringstream stream;
    
    cout << "Please enter a mathematical expression." << endl;
    getline(cin, line);
    
    stream << line;
    stream >> number;
    cout << "------------------------------------------" << endl <<endl;
    
//    cout << "The number entered was " << number << ".\n";
//    cout << line << endl;
cout << endl<<endl;

//cout << "Line size" <<line.size() << endl;
string integer = "";

for(int i = 0; i < line.size(); ++i) {
    
    if ( isdigit(line[i])  ){           // if line[i] is a number
      integer += line[i];               // save it in integer string
      if( (i+1) < line.size()){         // Now, check if we have a next element
          if (!isdigit(line[i+1]))      // If we have a next element, and the next element is not a number
          {
           cout << "'" << integer << "'\n";  // print all in integer
           integer = "";                     // clean integer
          }
      } else {                          // Now, check if we don't have a next element
        cout << "'" << integer << "'\n" ;   // print all in integer
      }
    }
    else if (line[i] == '+'){           // If line[i] is not a number 
          cout << "'" << line[i] << "'\n" ; 
        }
    else if (line[i] == '-'){
        cout << "'" << line[i] << "'\n" ; 
      }
    else if (line[i] == '/'){
        cout << "'" << line[i] << "'\n" ; 
      }
    else if (line[i] == '*'){
        cout << "'" << line[i] << "'\n" ;
      }
    else if (line[i] == '('){
        cout << "'" << line[i] << "'\n" ;
      }
    else if (line[i] == ')'){
        cout << "'" << line[i] << "'\n" ;  
      }
    else if (isspace(line[i])){       // If I'm a blank space

    }
    else                              
    cout << "ERROR, this is not part of a mathematical expression " << "'" << line[i] << "'" << endl;
}
    

cout << endl<<endl;

return 0;
}
