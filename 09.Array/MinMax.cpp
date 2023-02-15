#include <iostream>
using namespace std;

//returning min value
int FindMin(int arr[],int n){
    if(n==0){  //edge case
        return -1;
    }

    int minval = arr[0];
    for(int i=1;i<n;i++){
        minval = min(arr[i],minval);
    }

    return minval;
}

//returning max value
int FindMax(int arr[],int n){
    if(n==0){ // edge case
        return -1;
    }

    int maxval = arr[0];
    for(int i=1;i<n;i++){
        maxval = max(arr[i],maxval);
    }

    return maxval;
}

int main(){
    int size; //no. of input you want to put
    cin>>size;
    // int arr[size]; // wrong practice 
    int arr[1000]; // correct practice
    
    //input value in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Minimum value in the array: "<<FindMin(arr,size)<<endl;
    cout<<"Maximum value in the array: "<<FindMax(arr,size)<<endl;
    return 0;
}