#include <bits/stdc++.h>  
 using namespace std;
 
int mult(int a, int b){
    return a*b;
}

int divi(int a, int b){
    return a/b;
}

int main(){
    int a,b; cin>>a>>b;
    int mul = mult(a,b);
    int div = divi(a,b);
    cout<<"La multiplicaion es: "<<mul<<endl;
    cout<<"La division es: "<<div<<endl;
    return 0;
}