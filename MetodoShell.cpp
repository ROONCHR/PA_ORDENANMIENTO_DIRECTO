#include <iostream>
using namespace std;

void MetododoShell(int A[],int n){
	
	int k= n+1;
	while( k>0){
		k = k/2;
		int cen=1;
		
		while(cen == 1){
			
			cen =0;
			int i=0;
			while(i+k< n){
				
				if(A[i+k]<A[i]){
					int aux=A[i];
					A[i]=A[i+k];
					A[i+k]=aux;
					cen = 1;
					
				}
				i=i+1;
			}
			
		}
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
	MetododoShell(A,tam);
	
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