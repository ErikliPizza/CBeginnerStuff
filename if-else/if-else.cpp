#include <iostream>
using namespace std;




int main ()   {
	
	int a,b,c,d,kapat;
    
	sayi_1:
    cout<<"3 adet sayilarinizi giriniz "; cin>>a>>b>>c;
    
	d=a+b+c;
	
    if (a>=10&&b>=10&&c>=10)
	
	{
    
    cout<<"Sayilariniz 2 basamakli toplama islemi yapacagiz!"<<endl;
    cout<<d<<endl;
	cout<<"islem tamamlandi"<<endl;	
	
	}
	
	else {

	
	
	cout<<"lutfen iki basamakli bir sayi kullanin!"<<endl;
	goto sayi_1;
	
}
    cout<<"Islem tamam,herhangi bir komut gonderek programi kapatabilirsiniz ! ";
    cin>>kapat;
	return 0;
	
}

