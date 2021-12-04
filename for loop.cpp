#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    int n;
    for(n=a;n<=b;n++){
        if(n==1){
            cout<<"one\n";
            
        }
        else if(n==2){
            cout<<"two\n";
            
        }
        else if(n==3){
            cout<<"three\n";
            
        }
        else if(n==4){
            cout<<"four\n";
            
        }
        else if(n==5){
            cout<<"five\n";
            
        }
        else if(n==6){
            cout<<"six\n";
            
        }
        else if(n==7){
            cout<<"seven\n";
            
        }
        else if(n==8){
            cout<<"eight\n";
            
        }
        else if(n==9){
            cout<<"nine\n";
            
        }
        else if(n>9 && n%2==0){
            cout<<"even\n";
        }
        else if(n>9 && n%2!=0) {
            cout<<"odd\n";
        }
        /*else if(b>9 && b%2==0){
            cout<<"even\n";
        }
        else if(b>9 && b%2!=0) {
            cout<<"odd\n";
        }*/
    }
    // Complete the code.
    return 0;
}