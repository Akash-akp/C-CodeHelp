#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 1;
    bool bans = false;
    for(int i=0;i<=30;i++){ // this will check if n == 2^i and i is taken upto 30 as 2^31 exceed int range.
        if(ans==n){
            bans = true;
            break;
        }
        ans = ans*2;
    }
    if(bans){
        cout<<"True"<<endl; // n is the power of 2
    }else{
        cout<<"False"<<endl; // n is not the power of 2
    }
    return 0;
}