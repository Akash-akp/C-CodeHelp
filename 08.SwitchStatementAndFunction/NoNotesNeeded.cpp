// There are 100 rupees , 50 rupees , 10 rupees and 1 rupees notes . You need n money . Print how much minimum note you need..
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter how much money you need"<<endl;
    cin>>n;
    int hundred = 0,fifty = 0,ten = 0,one = 0;
    hundred = n/100;
    n = n-hundred*100;
    fifty = n/50;
    n = n-fifty*50;
    ten = n/10;
    n = n = ten*10;
    one = n;
    cout<<hundred<<" hundreds,"<<fifty<<" fifty,"<<ten<<" tens,"<<one<<" ones"<<endl;
    return 0;
}