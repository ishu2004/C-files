#include<iostream>
using namespace std;

int fact(int n){
    if (n==1){
        return 1;
    }
    int prevfact = fact(n-1);
    return n*prevfact;
}
int main(){
 int n=4;
  cout<<fact(n);
    
    return 0;
}


