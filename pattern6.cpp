#include<iostream>
using namespace std;
int main(){
    int i,n;
    i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i++;
    }
}