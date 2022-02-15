#include <iostream>

using namespace std;


int main (){
	
	long long int x,y=0,z=0,kapat;
	
	oku:
	cout<<"1'den kaca kadar olan sayinin toplamini almak istersin \? : "; cin>>x;
	
	
	topla:
	
	y+=1;
	z=z+y; 
	
	if (y<x)
	goto topla;
	
	cout<<"toplam = "<<z<<"\n";
	goto oku;
	
	cin>>kapat;
}
