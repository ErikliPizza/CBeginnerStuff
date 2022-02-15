#include <iostream>
using namespace std;

int main () {
	
	double a,b,d;
	
	
	oku_not:
	cout<<"2 adet notunuzu bosluk birakarak girin : ";
	cin>>a>>b;
	d=(a+b)/2;
	
	
	if (d>100||d<0)
	{ cout<<"Gecerli sayi degil!!"<<endl;
	  goto oku_not;
	}
	else if (d<50||d==0)
	{cout<<"KALDIN!Cok yazik!"<<endl;
	 cout<<"notun = "<<d<<endl;
	 goto oku_not;}

	else if (d<70)
	{cout<<"GECTÝN! Kotu"<<endl;
	cout<<"notun = "<<d<<endl;
	goto oku_not;}
	
	else if (d<84)
	{cout<<"GECTÝN! Orta"<<endl;
    cout<<"notun = "<<d<<endl;
	goto oku_not;}


	else if (d<=100)
	{
	
	cout<<"TEBRÝKLER! Cok basarili"<<endl;
	cout<<"notun = "<<d<<endl;
	goto oku_not;}
	else 
	{
		cout<<"HATA!"<<endl;
		goto oku_not;
	}
	
	
	
	
}
