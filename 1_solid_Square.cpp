/*
Solid Square Pattern In C++
   * * * *
   * * * *
   * * * *
   * * * *

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input the number : ";
    cin>>n;
    // Row Loop
    for(int i=0; i<n; i++){
        // Column Loop
        for(int j=0; j<n; j++){
            cout<<" *";
        }
    cout<<endl;
    }
    return 0;
}