#include <iostream>
using namespace std;
int main(){
	int nilai;
	string greade;
	
	cout<<"masukan nilai"<<endl;
	cin>>nilai;
	
	if (nilai >=95){
	   cout<<"A+"<<endl;
	} else if(nilai >=85){
		cout<<"A"<<endl;
 }else if(nilai >=80){
		cout<<"B+"<<endl;
	}else if(nilai >=75){
		cout<<"B"<<endl;
	}else if(nilai >=70){
		cout<<"B-"<<endl;
	}else if(nilai >=65){
		cout<<"C+"<<endl;
	}else if(nilai >=60){
		cout<<"C"<<endl;
	}else if(nilai >=55){
		cout<<"C-"<<endl;
	}else if(nilai >=50){
		cout<<"D"<<endl;
	}else if(nilai >=45){
		cout<<"E"<<endl;
	}else{
		cout<<"bodoh kali anda"<<endl;
	}
}
