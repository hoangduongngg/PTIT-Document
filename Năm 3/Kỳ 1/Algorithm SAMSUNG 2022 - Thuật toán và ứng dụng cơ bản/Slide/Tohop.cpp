#include<iostream>
using namespace std;
bool OK = false;
int C[20], n, k;
void in(){
    for(int i=1;i<=k;i++) cout<<C[i];
    cout<<endl;
}
void sinhketiep(){
    int i = k;
    while(C[i] == n-k+i) i--;
    if(i == 0) OK = true;
    else{
        C[i]++;
        for(int j = i+1; j <= k; j++) C[j] = C[j-1] + 1;
    }
}
main(){
    cin >> n >> k;
    for(int i = 1; i <= k; i++) C[i] = i;
    while(!OK){
        in();
        sinhketiep();
    }
}
