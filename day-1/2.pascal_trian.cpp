// pascal triangle Q2.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;

int arr[n][n];
for(int i=0;i<n;i++){
    arr[i][0]=1;
    for(int j=1;j<i;j++){
    arr[i][j]=arr[i-1][j-1]+arr[i-1][j-1];
    }
    arr[i][i]=1;
}
 for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<arr[i][j]<<" ";
    }
 }    
    return 0; 
}
