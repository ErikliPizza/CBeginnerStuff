#include <iostream>

using namespace std;


int main ()

{
	double x;
	
	oku_sayi:
	cout<<"Bir sayi giriniz : "; cin>>x;
	
	if (x==10)
	{ cout<<"Sayiniz 10'a esit"<<endl;
	  goto oku_sayi;
		}	
	else if (x>10)
	
	{ cout<<"Sayiniz 10'dan buyuk"<<endl;
      goto oku_sayi;	
	}
	
	
	else if (x<10)
	{
		cout<<"Sayiniz 10'dan kucuk"<<endl;
	    goto oku_sayi;
	}
	
	
}
