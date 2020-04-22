#include<iostream>
using namespace std;
void printArray(int arr[] , int size);
void insertionSort(int arr[] , int size);

int main(){
  int arr[] = { 10, 9, 7, 48 , 0 , 0 , 3 , 100};
  cout << "**********INSERTION SORT**********" << endl;
  cout << "Original array: " << endl;
  printArray(arr , 8);
  cout << "Sorted array: " << endl;
  insertionSort(arr , 8);
  printArray(arr , 8);
  return 0;
}

void printArray(int arr[] , int size){
  for(int i = 0 ; i < size ; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void insertionSort(int arr[] , int size){
  for(int i = 1; i < size ; i++){
    int hole = i;
    int value = arr[i];

    while(hole > 0 && arr[hole -1 ] > value){
      arr[hole] = arr[hole-1];
      hole--;
    }
    arr[hole] = value;
  }
}

