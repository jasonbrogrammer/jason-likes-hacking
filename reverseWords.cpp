#include <iostream>
#include <string>
using namespace std;


void reverse(char *a, int start, int end){
	for(int i=start; i<(end+start)/2; i++){
		int last = end - (1+i-start);
		char temp = a[i];
		a[i] = a[last];
		a[last] = temp;
	}
}

void reverse_strings(char * a, int start, int end){
	if(start >= end){
		return;
	}

	int pos_start = start;
	int pos_end = end;

	while(isspace(a[pos_start])){
		pos_start++;
	}

	for(int i=pos_start; i < end; i++){
		if(isspace(a[i])){
			reverse( a, pos_start, i);
			pos_end=i;
			break;
		}
	}

	if(pos_end == end){
		reverse(a,pos_start, pos_end);
	}	
	reverse_strings(a, pos_end +1, end);
}

/*

void reverse_string(char * a, int length){

reverse


}

*/


int main(){

	char input[1000];

	int i=0;
	cin>>i;
int j=0;

	while( j<i && cin.getline(input, 1000)){
		char *line = input;
		int length = strlen(input);
		reverse_strings(input,0, length);
		reverse(input,0,length);
		
		if(length > 0){
			j++;
		
			cout<<"Case #"<<j<<": "<<input<<endl;
		}
		
	}


}
