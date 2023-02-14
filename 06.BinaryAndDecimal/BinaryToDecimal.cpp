#include <iostream>
#include <math.h> // pow is used
using namespace std;

int main(){
    int binary;
    cin>>binary; // binary number is input
    int i = 0; // power
    int ans = 0; 
    while(binary>0){ // loop iterate over all the digit from right
        int lastdigit = binary%10; // last digit of binary
        if(lastdigit == 1){
            ans += pow(2,i); 
        }
        i++;
        binary/=10;
    }
    cout<<ans<<endl; // decimal is found in the answer
    return 0;
}