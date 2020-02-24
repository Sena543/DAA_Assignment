#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

void swapping(int &a, int &b);
void display(int *array, int size);
void merge(int *array, int l, int m, int r);
void mergeSort(int *array, int l, int r);
void write_file(int x_points, double y_points );


int main(){
	
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];     //create an array with given number of elements
    srand(rand());
    cout << "Enter elements to be  sorted:" << endl;
    for(int i = 0; i<n; i++) {
   		arr[i] =  rand();
    }
    cout << "Array before sorting: ";
    display(arr, n);
    mergeSort(arr, 0, n-1);     //(n-1) for last index
    cout << "Array after sorting: ";
    display(arr, n);
}


void swapping(int &a, int &b){     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}


void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}


void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}


void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

void write_file(int x_points, double y_points ){
	std::ofstream file;
	file.open("dataPoints.dat", std::ios::app);
	
	file<< x_points <<"  " << y_points << "\n";
	
	file.close();
}
