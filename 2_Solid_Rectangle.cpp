/*
Solid Rectangle Pattern 

   * * * * *
   * * * * *
   * * * * *


*/

#include <iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Input the number of Rows : ";
    cin>>row;
    cout<<"Input the number Of Column : ";
    cin>>column;
    // Row Loop
    for(int i=0; i<row; i++){
        // Column Loop
        for(int j=0; j<column; j++){
            cout<<" *";
        }
    cout<<endl;
    }
    return 0;
}