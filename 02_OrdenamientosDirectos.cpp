#include <iostream>
using namespace std;

void InterDirDer(int A[],int n){
	for(int i=0; i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				int aux = A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
}

int main(){
	
	
	int resp;
	int tam;
	while(true){
	
		cout<<"Ingrese el tama�o del arreglo: " ;
		cin>>tam;
		int arreglo[tam];
		cout<<"ingrese los datos del arreglo:"<<endl;
		for(int i=0;i<tam;i++){
			cout<<"P"<<i<<": ";
			cin>>arreglo[i];
		}
		cout<<"ELIGA EL METODO DE ORDENAMIENTO: "<<endl;
		cout<<"1) Intercambio directo por la derecha "<<endl;
		cout<<"2) Intercambio directo por la Izquierda "<<endl;
		cout<<"3) Intercambio directo con centinela "<<endl;
		cout<<"4) Intercambio directo bidireccional "<<endl;
		cout<<"0)Salir"<<endl;
		
		cin>>resp;
		if(resp!=0){
			if(resp==1){
				InterDirDer(arreglo,tam);	
			}
			if(resp==2){
			
				//InterDirDer();	
			}
			if(resp==3){
				//InterDirDer();
			}
			if(resp==4){
				//InterDirDer();
			}
			if(resp==0){
				//InterDirDer();
			}
			
			
		}
		cout<<"Arreglo: ( ";
		for(int i=0; i<tam;i++){
			if(i==tam-1){
				cout<<arreglo[i]<<" )";
			}else{
				cout<<arreglo[i]<<" , ";
			}
		
			
		}
		cout<<endl;
		system("PAUSE");
		
	}
	
	return 0;
}

