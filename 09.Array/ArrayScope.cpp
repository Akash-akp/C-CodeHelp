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

//update the array
void update(int arr[],int index,int val){
    arr[index] = val;
    cout<<"Inside the function after update:"<<endl;
    cout<<"Printing Array: ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}


int main(){
    int arr[3] = {0,1,2};

    cout<<"Inside the main before update:"<<endl;
    printArr(arr,3);
    update(arr,1,6);
    cout<<"Inside the main after update:"<<endl;
    printArr(arr,3);
    return 0;
}