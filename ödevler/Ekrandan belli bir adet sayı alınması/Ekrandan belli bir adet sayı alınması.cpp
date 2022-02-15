#include <iostream>

using namespace std;


int main (){
	
	
	int kapat,adet,sayi,sayac=0,top=0;
	
	gir:
		
	cout<<"adet giriliyor :  "; cin>>adet;
	
	
	oku:
		
	cout<<"sayi giriliyor : "; cin>>sayi;
	top=top+sayi;
	sayac=sayac+1;
	
	
	if (sayac<adet) goto oku;
	
	
	cout<<"toplam =  " <<top<<"\n";
	
        goto gir;

        cin>>kapat;

	return 0;	
	
        
        


}
