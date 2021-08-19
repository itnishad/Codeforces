#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            printf("0\n");
        }
        else if(a<b){
            int dif=b-a;
            if(dif%2==0){
                printf("2\n");
            }else{
                printf("1\n");
            }
        }else{
            int dif=a-b;
            if(dif%2==0){
                printf("1\n");
            }else{
                printf("2\n");
            }
        }
    }
    return 0;
}