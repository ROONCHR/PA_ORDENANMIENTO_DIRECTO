#include <iostream>
using namespace std;
struct Articulo {
    string cod;
    string des;
    float prec;
    int cant;
};

void  OrdenaArt(Articulo ART[],int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			int result1=ART[j].prec*ART[j].cant;
			int result2=ART[j+1].prec*ART[j+1].cant;
			if(result2<result1){
				Articulo aux=ART[j];
				ART[j]=ART[j+1];
				ART[j+1]=aux;
			}
		}
	}
	
}
int main() {
    int n=0;
    cout<<"Ingrese la cantidad de Articulos: ";cin>>n;
    Articulo ART[n];
    for(int i=0; i<n;i++){
    	cin.ignore();
    	cout<<"Articulo "<<i+1<<endl<<"Codigo: ";cin>>ART[i].cod;
    	cout<<"Descripcion: ";cin>>ART[i].des;
    	cout<<"Precio: ";cin>>ART[i].prec;
    	cout<<"Cantidad: ";cin>>ART[i].cant;

	}
	
    OrdenaArt(ART,n);
    cout<<"___________ORDENADO____________________";
	for(int i=0; i<n;i++){
    	cout<<"\nArticulo "<<i+1<<"\nCodigo: "<<ART[i].cod;
    	cout<<"\nDescripcion: "<<ART[i].des;
    	cout<<"\nPrecio: "<<ART[i].prec;
    	cout<<"\nCantidad: "<<ART[i].cant<<"\n________________";

	}
    return 0;
}

	
	
