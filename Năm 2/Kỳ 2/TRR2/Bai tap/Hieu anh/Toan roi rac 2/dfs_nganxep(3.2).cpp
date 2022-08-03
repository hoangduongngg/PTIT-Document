#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int unused[n+1];
    
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) cin >> a[i][j];
    for(int i=0; i<=n; i++) unused[i]=1;
    
    stack<int> myBag;
    myBag.push(1);
    while(!myBag.empty()){
         int t=myBag.top();
         myBag.pop();
         
         if(unused[t]) cout << t << ' ';
         unused[t]=0;
         for(int i=1; i<=n; i++)
         if(unused[i]==1 && a[t-1][i-1]==1){
             myBag.push(t);
             myBag.push(i);
             break;
         }
    }
}