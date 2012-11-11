#include <iostream>

using namespace std;


void reverse_string(char* str){
char * end= str;
while( *(end + 1) ){
end++;
}

while(end > str){
char temp = *str;
*str = *end;
*end = temp;
str++; end--;
}

}

int main(){

char test[] = "jasonnchang";

cout<<test<<endl;

reverse_string(test);


cout<<test<<endl;

}



