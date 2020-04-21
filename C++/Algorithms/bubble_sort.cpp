#include<iostream>
using namespace std;
void printArray(int arr[] ,int size);
void bubbleSort(int arr[] , int size);

int main(){

  int arr[] = { 20, 30 ,0 ,5 , 7 , 2 , 1, 0};
  cout << "**********BUBBLE SORT**********" << endl;
  cout << "Original Array: " << endl;
  printArray(arr , 8);
  cout << endl << "Sorted Array: " << endl;
  bubbleSort(arr , 8);
  printArray(arr , 8);
  return 0;
}

void printArray(int arr[] , int size){
  for(int i = 0 ; i < size ; i++ )
    cout << arr[i] << " ";
  cout << endl;
}

void bubbleSort(int arr[] , int size){
  int temp;
  for( int i = 0 ; i < size-1 ; i++){
    for( int j = 0 ; j < size -1 ; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1]  = temp;
      }
    }
  }
}


