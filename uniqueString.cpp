#include <iostream>
#include <string>

using namespace std;
/*
Adding a useless comment
*/

function isUniqueChars(string a){
set<char> chars;
int len = a.size();
bool unique = true;
set<char>::iterator it; 
	for(int i=0; i<len && unique; i++){
		char current= a[i];
		it = chars.find(a);
		if(it != chars.end()){
			unique = false;
		}
	}
return unique;
}


function isUniqueCharsInPlace(string a){
int len = a.size();
bool unique = true;


                
return unique;
}
