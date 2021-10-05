#include<iostream>
using namespace std;

int power(int n, int p){
if(p==0){
    return 1;

}

int prepower = power(n,p-1);
//cout<<prepower;
return n * prepower;

}

int main() {
int n=2;
int p=4;

cout<<power(n,p);


    return 0;
}