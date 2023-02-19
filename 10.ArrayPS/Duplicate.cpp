// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
// For example:
// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

#include <iostream>
using namespace std;

int duplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,4};
    cout<<duplicate(arr,5)<<endl;    
    return 0;
}