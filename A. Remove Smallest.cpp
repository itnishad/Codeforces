#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int arr[1000];
        int n, flag=true;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr, arr+n);
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])>1){
                flag=false;
                break;
            }
        }
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}