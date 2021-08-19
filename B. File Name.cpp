#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,siz=0;
    char arr[200];
    scanf("%d%s",&n,arr);

    for(int i=0;i<n;i++){
        if(arr[i]=='x'){
            siz++;
        }else{
            if(siz>2){
                sum+=siz-2;
            }
            siz=0;
        }
    }
    if(siz>2){
        sum+=(siz-2);
    }
    printf("%d\n",sum);
    return 0;

}