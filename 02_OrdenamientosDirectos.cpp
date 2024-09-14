#include <iostream>

#include <locale>
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
void InterDirIzq(int A[],int n){
	for(int i=1;i<n;i++){
		for(int j=n-1;j>i-1;j--){
			if(A[j] < A[j-1]){
				int aux = A[j-1] ;
				A[j-1] = A[j] ;
				A[j] = aux ;
			}
		}
	
	}
}
void InterDirCen(int A[],int n){
	int cen = 1 ;
	int i = 0 ;

	while(i <= n-1&&cen == 1){
		 cen = 0 ;
		for (int j = 0; j<n-i-1;j++ ){
			if(A[j] > A[j+1]){
				int aux = A[j] ;
				A[j] = A[j+1] ;
				A[j+1] = aux ;
				cen = 1 ;
			}
		}
		i = i+1 ;
	}  

}

int main(){
	setlocale(LC_ALL, "");
	
	int resp;
	int tam;
	while(true){
	
		cout<<"Ingrese el tamaño del arreglo: " ;
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
		
		if(resp==1){
			InterDirDer(arreglo,tam);	
		}else if(resp==2){
			InterDirIzq(arreglo,tam);	
		}else if(resp==3){
			InterDirCen(arreglo,tam);
		}else if(resp==4){
			//InterDirDer();
		}else if(resp==0){
			break;
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

