#include<iostream>
#include<math.h>
using namespace std;
void isPrime(int n){
    int Count =0;
    for(int i=2; i<n; i++){
        if(n%i==0)
        Count++;
    }
    if(Count==0 || n==2)
    cout<<"Prime";
    else
    cout<<"Not Prime";

}
int main(){
    int n;
    cin>>n;
    isPrime(n);
    
    return 0;
}