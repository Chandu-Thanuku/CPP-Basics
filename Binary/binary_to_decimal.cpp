
#include <iostream>
using namespace std;

int main() {
    int binary;
    cout<<"Enter Binary: ";
    cin>>binary;
    int rem,num=0,power=1;
    while(binary>0){
        rem=binary%10;
        num=num+rem*power;
        binary=binary/10;
        power=power*2;
    }
    cout<<num;
    return 0;
}
