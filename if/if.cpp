#include <iostream>
using namespace std;



int main ()

{
	int a,b,c,d;
	tekrar:
	cout<<"1 adet bosluk birakarak 3 sayi giriniz : "; cin>>a>>b>>c;
	d=a+b+c;

    
    if (a<=5&&b<=5&&c<=5)
	
	  cout<<d<<endl;
	  cout<<"tebrikler sayilariniz 5'e esit yada 5'ten kucuk! \n" ;

	goto tekrar;
	
}
