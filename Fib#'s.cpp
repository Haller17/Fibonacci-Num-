#include <iostream>
using namespace std;
int* memo;
int fib(int n){
    if(memo[n]==-1){
        memo[n]= fib(n-1)+fib(n-2);
    }
    return memo[n];
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    memo= new int[n+1];
    
    for(int i =0;i<n+1;i++){
        memo[i]=-1;
    }
    memo[0]=1;
    memo[1]=1;
    cout<<fib(n)<<endl;
    return 0;

}

