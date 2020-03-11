#include <iostream>
using namespace std;

int main(){
	int length=0;
	cout<<"Please Enter The Number Of Values You Want To Sort"<<endl;
	cin>>length;
//	Declaring variables
	int arr[length];
	int min=0;
	int arb=0;
//	Takong inputs
	for(int k=0;k<length;k++){
		cout<<"Value " <<k+1<<" : ";
		cin>>arr[k];
		cout<<endl;
	}
	
	cout<<endl;
//	Sorting values entered
	for(int i=0; i<length-1; i++){
		
		min =i;
		
		for(int j=i+1;j<length;j++){
			
			if(arr[j] < arr[min]){
//				min = j;
			    arb=arr[j];
			    arr[j]=arr[min];
			    arr[min]=arb;
			}
		}
//		Outputting the various stages 
	cout<<"Stage"<< i <<" : ";
	for(int k=0;k<length;k++){
		
		cout<< arr[k]<<"\t" ;
	}
	cout<<endl;
		
		cout<<endl;
	}
	
	
	
	return 0;
}
