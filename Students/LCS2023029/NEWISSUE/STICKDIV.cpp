#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m = n/2;
    int count = 0;
    for (int i=1 ; i<m ; i++){
        if ( i != (m-i)){
            count++;
        }
    }
    cout<<count/2;
}