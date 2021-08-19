#include<bits/stdc++.h>
using namespace std;
 
int arr[200];
 
int main(){
    int n;
    scanf("%d",&n);
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if(even>odd){
        printf("%d\n",odd);
    }
    else if(even<odd){
        printf("%d\n",even);
    }else{
        printf("%d\n",even);
    }
    return 0;
}