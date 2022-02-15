#include <iostream> 

using namespace std;


int main ()

{
    long double x,y,z,vize,final, snc;
	

    oku_not:
	cout<<"Sirayla 2 Vize ve 1 Final notlarinizi giriniz : "; cin>>x>>y>>z;
	
	if (x>100||x<0)
	{cout<<"HATA!!!"<<endl;
	goto oku_not;
	}
	else if(y>100||y<0)
	{cout<<"HATA!!!"<<endl;
	goto oku_not;
	}
	else if (z>100||z<0)
	{cout<<"HATA!!!"<<endl;
	goto oku_not;
	}
	
		
	vize=(x+y)/100*40;
	
	final=z/100*60;
	
	snc=final+vize;
	
	if (snc>=50){
	
	cout<<"GECTI! notu : "<<snc<<endl;
	goto oku_not;
	}
	
	else if (snc<50){
	
	cout<<"KALDI! notu : "<<snc<<endl;
	goto oku_not;
	}


	else {
	cout<<"HATA!";
	goto oku_not;
	}
  
  
    return 0;	
	
}
