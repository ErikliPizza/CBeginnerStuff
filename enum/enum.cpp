#include <iostream>

using namespace std;

int main ()

{
	enum gorev {ogrenci=17,mudur,ogretmen	};
	
	
	string ad="Asamet";
	string soyad="Kaya";
	int yas=16,kapat;
	gorev gorevi=mudur;
	
	cout<<ad+"\t";
	cout<<soyad+"\t";
	cout<<yas<<"\t";
	cout<<gorevi<<endl<<endl;
	
	cout<<"Islem tamam,kapatmak icin bir komut gonderiniz       ";
	cin>>kapat;
	return 0;
	
	
}
