#include <iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {21,34,52,73,92};
    int key;
    cin>>key;
    bool isPresent = LinearSearch(arr,5,key);
    if(isPresent){
        cout<<key<<" is Present in array"<<endl;
    }else{
        cout<<key<<" is Absent in array"<<endl;
    }
    return 0;
}