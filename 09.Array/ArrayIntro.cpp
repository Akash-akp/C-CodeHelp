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

// return size of array
int sizeOfArr(int *arr){
    return (int)(sizeof(arr)/(int)sizeof(int));
}

int main(){
    //first array
    int first[3] = {3,5,7};
    printArr(first,3);
    cout<<"Size: "<<sizeOfArr(first)<<endl;

    //second array
    int second[15] = {5,7}; // first two element is 5 and 7 and rest are garbage
    printArr(first,15);
    cout<<"Size: "<<sizeOfArr(second)<<endl;


    // third array
    int third[8] = {0}; // make every element of this array 0
    printArr(third,8);
    cout<<"Size: "<<sizeOfArr(third)<<endl;

    // forth array
    int forth[20] = {1}; // make first element of this array 1 and rest 0
    printArr(forth,20);
    cout<<"Size: "<<sizeOfArr(forth)<<endl;

    // fifth array
    char fifth[3]  = {'a','e','i'};
    cout<<"Printing Array: ";
    for(int i=0;i<3;i++){
        cout<<fifth[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
    cout<<"Size: "<<(int)sizeof(fifth)<<endl;

    double firstDouble[4]; // applicable to all other data type too...
    float firstFloat[4];
    long firstlong[4];
    bool firstBool[4];

    return 0;
}