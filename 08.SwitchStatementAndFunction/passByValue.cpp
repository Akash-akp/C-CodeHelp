#include <iostream>
using namespace std;

void dummy(int&n){
    n++;
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<n<<endl;
    return 0;
}