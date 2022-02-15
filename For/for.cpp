#include <iostream>
using namespace std;

int main () {
	
	int x,y;
	 sayial:
	cout<<"sirayla X ve Y deðerlerini giriniz: "; cin>>x>>y;
	
	if (x<y){
	
	for (; x<=y; x++)
	cout<<x<<endl;
	goto sayial;
}
    else if (x>y)
    {
    	for (; y<=x; y++)
	cout<<y<<endl;
	goto sayial;
	}
	else 
	cout<<"HATA!!!"<<endl;
	goto sayial;
}
