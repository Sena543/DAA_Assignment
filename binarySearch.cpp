#include<iostream>

int binarySearch(int my_array[], int lower_bound, int upper_bound, int wanted_value);


int main(){
	int arr[] = {2,3,5,6,9};
	
	int ubound = (sizeof(arr)/ sizeof(*arr));
	std::cout <<"Index of wanted value "<<binarySearch(arr, 0, ubound, 5);
	
	return 0;
}


int binarySearch(int my_array[], int lower_bound, int upper_bound, int wanted_value){
	int midpoint = (lower_bound + upper_bound)/2;
	
	if(my_array[midpoint] == wanted_value){
		return midpoint;
	}else if(my_array[midpoint] > wanted_value){
		return binarySearch(my_array, lower_bound, midpoint, wanted_value );
	}else if(my_array[midpoint] < wanted_value){
		return binarySearch(my_array, midpoint, upper_bound, wanted_value);
	}else{
		return -1;
	}
	
}
