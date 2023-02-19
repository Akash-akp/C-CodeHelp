#include <iostream>
using namespace std;

int unique(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main(){
    int arr[] = {1,2,1,2,3,5,4,4,3};
    cout<<unique(arr,9)<<endl;
    return 0;
}