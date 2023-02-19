#include <iostream>
using namespace std;

// print the whole array
void printArr(int arr[],int n){
    cout<<"Printing Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}

//  2 pair swapping the array
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){  // check whether i+1 lie in array or not
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6};

    swapAlternate(arr1,5);
    swapAlternate(arr2,6);

    printArr(arr1,5);
    printArr(arr2,6);
    return 0;
}