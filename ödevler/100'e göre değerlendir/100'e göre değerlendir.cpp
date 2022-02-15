#include <iostream>

using namespace std;

int main(){


    long long int x;
    
    oku:
    
    cout<<"Sayi giriniz : "; cin>>x;
    
    if (x<100)
    {cout<<"Girilen sayi 100'den kucuk"<<endl;
    goto oku;
	}
    else if (x==100){
    cout<<"Girilen sayi 100'e esit"<<endl;
    goto oku;
}   
   else 
   {
   	cout<<"Girilen sayi 100'den buyuk"<<endl;
   	goto oku;
   }

    return 0;


}

