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

//reversing array
void reverseArray(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6};

    reverseArray(arr1,5);
    reverseArray(arr2,6);

    cout<<"After reversing"<<endl;
    cout<<"Array 1: "<<endl;
    printArr(arr1,5);

    cout<<endl<<"Array 2:"<<endl;
    printArr(arr2,6);
    return 0;
}