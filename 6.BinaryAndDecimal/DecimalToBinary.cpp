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
        int rem = n%2; // this will give the reminder that we get after dividing decimal number by 2
        n = n/2; 
        ans = ans + rem*pow(10,i) ;
        strans = to_string(rem) + strans;
        i++;
    }
    cout<<"Answer(int) is "<<ans<<endl;  //error arrises when n is larger number because of exceeding of integer
    cout<<"Answer(string) is "<<strans<<endl;
    return 0;
}