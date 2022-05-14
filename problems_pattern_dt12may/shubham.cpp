#include <iostream>
using namespace std;

//1st  basic
/*
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int k = n-i; k >= 1; k--){
            cout<<"  ";
        }
        for(int j = 1; j <= 2*i - 1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/


//final code 
/*
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int k = n-i; k >= 1; k--){
            cout<<"  ";
        }
        int k = i, counter = 0;
        for(int j = 1; j <= 2*i - 1; j++){
            if(counter == 0){
                cout <<k<<" ";
                k++;
            }
            else{
                cout <<k<<" ";
                k--;
            }

            if(k == 2*j+1){
                counter = 1;
                // k--;
            }
            // cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/

