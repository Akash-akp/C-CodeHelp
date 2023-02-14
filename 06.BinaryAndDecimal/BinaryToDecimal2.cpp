#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string Binary;
    cin>>Binary;
    int i = 0;
    int ans = 0;
    while(Binary!=""){
        int lastdigit = Binary.back()-48;
        // int lastdigit = (Binary[Binary.length()-1])-48;
        if(lastdigit == 1){
            ans = ans+pow(2,i);
        }
        Binary = Binary.substr(0,Binary.length()-1);
        i++;
    }   
    cout<<ans<<endl;
    return 0;
}