#include <iostream>

using namespace std;


int main ()
{
	
   long double x,y;
   
   oku_sayi:
   cout<<"Ýki sayi giriniz : "; cin>>x>>y;
   
   
   if (x==y)
   { cout<<"1. sayiniz 2. sayiniza esit"<<endl;
     goto oku_sayi;
	   }	
	else if (x<y)
	
	{ cout<<"1.sayiniz 2.sayinizdan kucuk"<<endl;
	goto oku_sayi;
	}
	else if(x>y)
	{cout<<"1. sayiniz 2.sayinizdan buyuk"<<endl;
	goto oku_sayi;
	}
	else 
	{cout<<"HATA !"<<endl;
	goto oku_sayi;	}
	

}
