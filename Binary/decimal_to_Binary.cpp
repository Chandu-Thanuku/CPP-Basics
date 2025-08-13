
#include <iostream>
#include<cmath>
using namespace std;
int main() {
   int n;
   cout<<"Enter N: ";
   cin>>n;
   int rem=0;
   int binary=0;
   int i=0;
   while(n>0){
       rem=n%2;
       binary=binary+rem*pow(10,i);
       i++;
       n=n/2;
   }
cout<<binary;
    return 0;
}
