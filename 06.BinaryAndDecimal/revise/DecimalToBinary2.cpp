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
        int lastbit = decimal&1;
        ans = lastbit*pow(10,i)+ans;
        i++;
        strans = to_string(lastbit)+strans;
        decimal= decimal>>1;
    }
    cout<<ans<<endl;
    cout<<strans<<endl;
    return 0;
}