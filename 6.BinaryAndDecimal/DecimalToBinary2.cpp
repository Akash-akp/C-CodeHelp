#include <iostream>
#include <math.h> //pow used
using namespace std;

int main(){
    cout<<"Enter a Decimal Number"<<endl;
    int n;
    cin>>n; // n is decimal number
    int ans = 0; // in ans we store the binary number
    int i = 0;  // i used to help to fill backward as it defne the power of 10
    string strans = "";
    while(n!=0){
        int lastbit = n&1; // this will give the last bit of the binary number of decimal number n
        n = n>>1; // left shift the binary number of decimal number n
        ans = ans + lastbit*pow(10,i) ;
        strans = to_string(lastbit) + strans;
        i++;
    }
    cout<<"Answer(int) is "<<ans<<endl;  //error arrises when n is larger number because of exceeding of integer
    cout<<"Answer(string) is "<<strans<<endl;
    return 0;
}