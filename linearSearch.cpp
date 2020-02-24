#include<iostream>


int linearSearch(int array[],int start, int needed_value);

int main(){
	 int my_array[] = {1,2,3,4,5,6,7,8,9,0};
	 
	 std::cout << linearSearch(my_array,0, 5);
	
	return 0;
}


int linearSearch(int array[], int start, int needed_value){
	
	int arraySize = 10; //(sizeof(array)/sizeof(*array));
	if(start == arraySize){
		return -1;
	}
	if(array[start] == needed_value){
		return start;
	}else{
		linearSearch(array, start+1, needed_value );
	}
	
	
}
