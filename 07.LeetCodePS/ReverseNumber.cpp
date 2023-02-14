#include <iostream>
#include <climits> // INT_MAX and INT_MIN is used
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n!=0){ // after n become zero ans have the n in reversed format
        int ldigit = n%10; // last digit of given input
        if((ans>(INT_MAX/10))||(ans<(INT_MIN/10))){  // if input is large it will exceed the integer range
            cout<<"Input is out of range"<<endl;
            return 0;
        }
        ans = ans*10 + ldigit; // last is comming in front in each loop
        n/=10; // n is divided to access tens place of current n
    }
    cout<<ans<<endl;
    return 0;
}