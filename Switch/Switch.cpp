#include <iostream>

using namespace std;



int main ()
{
	
	
	int a,kapat;
	
	cout<<"bir sayi giriniz : "; cin>>a;
	
	switch (a)
	{
	
	case 1:
	cout<<"sayiniz 1 ";
	break;
	
	case 2:
	cout<<"sayiniz 2";
	break;
	
	case 3:
	cout<<"sayiniz 3";
	break;
	
	case 4:
	cout<<"sayiniz 4";
	break;
	
	default:
	cout<<"Degisken 1,2,3 yada 4 degil!"<<endl;
	}
	
    cout<<"Islem tamam,herhangi bir komut gonderek programi kapatabilirsiniz ! ";
    cin>>kapat;
	
	return 0;

}
