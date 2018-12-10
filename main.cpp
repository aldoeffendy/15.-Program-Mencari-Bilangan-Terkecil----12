#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout<<"****** PROGRAM MENENTUKAN BILANGAN TERKECIL ******"<<endl;
	cout<<"\nMasukan angka 1 : ";
	cin>>a;
	cout<<"Masukan angka 2 : ";
	cin>>b;
	cout<<"Masukan angka 3 : ";
	cin>>c;
	cout<<endl;
	
	if(a<b){
		cout<<a<<" <= Adalah Bilangan terkecil";
		cout<<endl;
	}
	else if(b<c){
		cout<<b<<" <= Adalah Bilangan Terkecil";
		cout<<endl;
	}
	else{
		cout<<c<<" <= Adalah Bilangan Terkecil";
		cout<<endl;
	}
		return 0;
}
