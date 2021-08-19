#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,arr[10000],mx=0,flag=true;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(mx<arr[i]){
                mx=arr[i];
 
            }
        }
        for(int i=0;i<n;i++){
            int x=mx-arr[i];
            if(x%2==0){
                flag=true;
            }else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}