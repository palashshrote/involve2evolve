#include <iostream>
using namespace std;

// 1st basic
/*
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){

        //mid
        int counter = 0;
        for(int j = 1; j <= 2*i - 1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

//2nd basic
/*
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){

        int counter = 0;
        char ch = 'A';
        for(int j = 1; j <= 2*i - 1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
*/

//final
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){

        int counter = 0;
        char ch = 'A';
        for(int j = 1; j <= 2*i - 1; j++){
            if(counter == 0){
                cout<<ch<<" ";
                ch++;
            }
            else{
                cout<<ch<<" ";
                ch--;
            }
            if(j >= (2*i-1)/2){
                counter = 1;
            }
        }
        cout<<endl;
    }
    return 0;
}   