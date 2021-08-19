#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,arr[1000],flag=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])==1){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            printf("2\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}