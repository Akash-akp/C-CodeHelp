#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){  //edge case
        cout<<1<<endl;
        return 0;
    }
    int m = n; // n value is stored in m so n value donot get override
    int mask = 0; // mask has value 00000....0111..t times such that t will be no.of bit in m after first 1.
    while(m!=0){ // creating musk
        m = m>>1;
        mask = (mask<<1)|1;
    }
    int ans = (~n)&mask; // this will remove the  previous 1 bits of ~n
    cout<<ans<<endl;
    return 0;
}