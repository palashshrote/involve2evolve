#include <iostream>
using namespace std;


//1st basic
/*
int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){
        //left stars
        for(int k = n*2-1-i; k >= 1; k--){
            cout<<"* ";
        }

        //mid
        int counter = 0;
        for(int j = 1; j <= 2*i - 1; j++){
            cout<<i<<" ";
        }

        //right stars
        for(int l = 1; l <= n*2-1-i; l++){
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
        //left stars
        for(int k = n*2-1-i; k >= 1; k--){
            cout<<"* ";
        }

        //mid
        int counter = 0;
        for(int j = 1; j <= 2*i - 1; j++){
            if(counter == 0){
                cout<<i<<" ";
                counter = 1;
            }
            else{
                cout<<"* ";
                counter = 0;
            }
        }

        //right stars
        for(int l = 1; l <= n*2-1-i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/