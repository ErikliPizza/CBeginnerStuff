#include <iostream>

using namespace std; 


int main () {
	
	float b,n,c,kapat;
	
	oku_1:
		
	cout<<"ilk sayinizi girin : "; cin>>b;
	
	
	if (b<0 || b>100) {
	
	cout<<"Hatali sayi !"<<endl;
	goto oku_1;	
	
}

	oku_2:
		
   cout<<"ikinci sayinizi girin : "; cin>>n;
	
	if (n<0 || n>100) {
	
	cout<<"Hatali sayi !"<<endl;
	goto oku_2;
}
	
	sonuc:
	
	
    c=(b+n)/2;
    cout<<"sonuc : "<<c<<endl;	
	
	kapat:
    cout<<"Islem tamam,herhangi bir komut gonderek programi kapatabilirsiniz ! ";
    cin>>kapat;
	
	return 0;
	
	
}
