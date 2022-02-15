# include <iostream>

using namespace std;

short int kapat;


int main ()

{
	
struct deneme {
	
	
	
	int sayi;
	string harf;
	bool erkek;
};	
	
	
	deneme dnm;
	
    dnm.sayi=2;
	dnm.harf="deneme";
	dnm.erkek=true;
	
	
	
	cout<<dnm.sayi<<endl;
	cout<<dnm.harf<<endl;
	cout<<dnm.erkek<<endl;
		
   
    
    kapat:
    cout<<"Islem tamam,herhangi bir komut gonderek programi kapatabilirsiniz ! ";
    cin>>kapat;
	
	return 0;	
	
	
	
}
