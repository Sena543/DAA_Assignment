#include <iostream>
using namespace std;

int main(){
	
	int length=0;
	int arb=0;
	
	cout<<"Please Enter The Number Of Values You'd Like To Sort"<<endl;
	cin>>length;
	
	int arr[length];
	
	for( int i =0; i< length; i++){
		
		cout<<"Value "<<i+1 <<" : ";
		cin>>arr[i];
		cout<<endl;
		
	}
	for(int i=0; i<length; i++){
		
		for(int j=0;j<length-1;j++ ){
			
			if(arr[j]>arr[j+1]){
				
				arb =arr[j];
				arr[j]=arr[j+1];
				arr[j+1] =arb;
				
			}
		}
		cout<<"Stage"<<i+1<<": \t";
		
		for(int k=0;k<length;k++){
			
			cout<<arr[k] <<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}


