#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	 int a[5];
	 int dato;
	 char band = 'F';
	 
	 for(int i=0;i<5;i++){
	 	cout<<"ingrese un numero: ";
	 	cin>>a[i]; 	
	 }
	 
	 cout<<"\nIngrese el numero a buscar:  ";
	 cin>>dato; 
	 
	 int j; 
	 while((band == 'F')&&(j<5)){
	 	if(a[j]==dato){
	 		band='V';
		 }
		 
		 j++;
	if(band =='F'){
		cout<<"El numero a buscar no existe en vector";
	}
	else if(band=='V'){
		cout<<"El numero "<<"fue encontrado en la posicion "<<j;
	}
	 	
	 	
	 }
	
	
	getch();
	return 0;


}
