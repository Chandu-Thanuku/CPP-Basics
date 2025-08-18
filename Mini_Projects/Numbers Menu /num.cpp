#include<iostream>
using namespace std;
void menu(){
    cout<<"1. Print Numbers from 1-N:\n2. Print Even Numbers from 1-N:\n";
    cout<<"3. Print Odd Numbers from 1-N:\n4. EXIT.";
}
int main(){
    int choice,n;
    do{
        menu();
        cout<<"\nPlease Enter Your Choice: ";
        cin>>choice;
     
        
        switch(choice){
            case 1:{
                cout<<"Enter Number (N): ";
        cin>>n;
                for(int i=1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<"\n";
                break;
            }
            case 2:{
                cout<<"Enter Number (N): ";
        cin>>n;
                for(int i=2;i<=n;i+=2){
                    cout<<i<<" ";
                }
                cout<<"\n";
                break;
            }
            case 3:{
                cout<<"Enter Number (N): ";
        cin>>n;
                for(int i=1;i<=n;i+=2){
                    cout<<i<<" ";
                }
                cout<<"\n";
                break;
            }
            case 4:{cout<<"Thanks for Using.\n-----------COMPLETED-----------";break;}
            default:{ cout<<"Invalid Choice!\n";break;}
        }
        
    }while(choice!=4);

}
