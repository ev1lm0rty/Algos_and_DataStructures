#include<iostream>

using namespace std;

void printArray(int arr[] , int size);
void selectionSort(int arr[] , int size);

int main(){
  int arr[] = { 20 , 10 , 3 , 6 , 2 , 0 ,100};
  int size = 7;
  cout << "**************SELECTION SORT***************"<<endl;
  cout << "Original Array: " << endl;
  printArray(arr , size);
  selectionSort(arr , size);
  cout << endl <<  "Sorted Array: " << endl;
  printArray(arr, size);
  cout << endl;
  return 0;

}

void printArray(int arr[] , int size){
  for(int i = 0 ; i < size ; i++)
    cout << arr[i] << " ";
}

void selectionSort(int arr[] , int size){
  for(int i = 0 ; i < size ; i++){
    int minIndex = i , temp;

    for(int j = i + 1; j < size ; j++){
      if(arr[j] < arr[minIndex])
        minIndex = j;
    }

    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }

}


