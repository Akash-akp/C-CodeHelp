#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int decimal;
    cin>>decimal;
    int ans = 0;
    string strans = "";
    int i = 0;
    while(decimal>0){
        int rem = decimal%2;
        ans = rem*pow(10,i)+ans;
        i++;
        strans = to_string(rem)+strans;
        decimal/=2;
    }
    cout<<ans<<endl;
    cout<<strans<<endl;

    return 0;
}