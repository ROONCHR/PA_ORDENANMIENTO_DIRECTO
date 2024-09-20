#include <iostream>
using namespace std;

void SeleccionDir(int A[],int n){
	for(int i=0; i<n; i++){
		int menor =A[i];
		int k=i;
		for(int j=i+1;j<n;j++){
			if(menor > A[j]){
				menor= A[j];
				k=j;
			}
		}
		A[k]=A[i];
		A[i]= menor;
	}
	
	
}

int main(){
	
	int tam = 10;
	int A[tam] = {5,8,9,6,3,4,12,15,14,1} ;
	cout<<"Lista antes: ( ";
	for(int i=0; i<tam;i++){
		if(i==tam-1){
			cout<<A[i]<<" ) ";
		}else{
			cout<<A[i]<<" , ";
		}	
	}
	cout<<endl<<endl;
	SeleccionDir(A,tam);
	
	cout<<"Lista despues: ( ";
	for(int i=0; i<tam;i++){
		if(i==tam-1){
			cout<<A[i]<<" ) ";
		}else{
			cout<<A[i]<<" , ";
		}	
	}
	
	return 0;
}