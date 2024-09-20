#include <iostream>
using namespace std;

void InsercionDir(int A[],int n){
	for( int i=1; i<n;i++){
		int aux = A[i];
		int k= i-1;
		while(k>=0 && aux < A[k]){
			A[k+1]=A[k];
			k = k-1;
		}
		A[k+1]=aux;
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
	InsercionDir(A,tam);
	
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