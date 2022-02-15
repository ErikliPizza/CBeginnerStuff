#include <iostream>
using namespace std;

int main () {
	
	int n,s=1,f=1;
	sayial:
		s=1;
		f=1;
	cout<<"n degerini girin: "; cin>>n;
	
	for (s=1; s<=n; s++)
	{
	f=f*s;
}
	cout<<"for ile "<<n<<"!="<<f<<endl;
	
	s=1; f=1;

while(s<=n){
	f=f*s;
	s++;
}
cout<<"while ile "<<n<<"!="<<f<<endl;

goto sayial;
}
