#include<iostream>
#include<conio.h>

using namespace std;

struct libro{
	char nombre[30];
	char autor[30];
	int edicion;	
}libros; 

void iLibro();
void sLibro();
void uLibro();
void dLibro();

int main(){
	
	cout<<"\n\n\nBienvenidos";
	cout<<"\n\n\nEnter para ingresar";
	getch();
	system("cls");
	
	do{
		cout<<"\n\n\t. Biblioteca";
		cout<<"\n\n\t2. Registrar Libros";
		cout<<"\n\n\t3. Registro de Libros";
		cout<<"\n\n\t4. Eliminar Libro";
		cout<<"\n\n\t5. Salir"
		cin<<op;
		
		switch(){
			case1:{
				
				break;
			}
		}while(op !=5);
		return 0;
	} 
	
	void iLibro(){
		char s;
		FILE *fp
		do{
			fp = fopen("Biblioteca.txt", "a+b")
			system("cls");
			cout<<"\n\n\n\t\tRegistrar Libro\n",
			cout<<"\n\tNombre del libro: ";
			cin.getline(libros.nombre, sizeof(libros.nombre));
			cout<<"\nNombre del autor: ";
			cin.getline(libro.autor, sizeof(libros.autor));
			cout<<"\n\tEditorial: ";
			ciin>>lirbos.edicion;
			fwrite(&lirbos,sizeof(libros),1,fp);
			fclose(fp);
			
			
			
			cout<<"\n\n\n\t\tIngrese un "
			
			
			
			
			
			
			}while();
			
		
	}
	
	
	
	
}
