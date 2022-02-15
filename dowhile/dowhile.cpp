#include <iostream>
using namespace std;

int main () {
	
	int s=1, top=0;
	sayial:
	
	do {
		
		top=top+s;
		s++;
	}
	
	while(s<=5);
	
	cout<<"toplam = "<<top;
	goto sayial;
}
