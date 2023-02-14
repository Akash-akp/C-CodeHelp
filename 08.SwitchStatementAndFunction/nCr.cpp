#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans *= i;
    }
    return ans;
}

int nCr (int n,int r){
    int num = factorial(n);
    int den = factorial(r)*factorial(n-r);

    return num/den;
}

int main(){
    cout<<factorial(4)<<endl;
    cout<<nCr(5,2)<<endl;
    return 0;
}