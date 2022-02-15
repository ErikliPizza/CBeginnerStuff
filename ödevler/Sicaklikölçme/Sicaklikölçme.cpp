#include <iostream>

using namespace std;


int main (){
	
	
	
	long double x;
	
	oku_sicaklik:
	cout<<"Sicakligi giriniz! : "; cin>>x;
	
	if(x<0)
	{cout<<"SOGUK"<<endl;
	goto oku_sicaklik;
	}
	
	else if(x>=0&&x<=15){
	cout<<"ILIK"<<endl;
	goto oku_sicaklik;}
	
	else {
		
		cout<<"SICAK"<<endl;
		goto oku_sicaklik;
	}
	
	
	return 0;
	
}
