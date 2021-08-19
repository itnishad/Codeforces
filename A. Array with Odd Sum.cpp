#include<stdio.h>
 
int main(){
    int t,n,arr[50000],a,odd,sum;
    scanf("%d",&t);
 
    while(t--){
            odd=0;sum=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a%2!=0){
                odd++;
            }
            sum+=a;
            arr[i]=a;
        }
        if(sum%2!=0){
            printf("YES\n");
        }
        else if(odd==n&&odd%2!=0){
            printf("YES\n");
        }else if(odd>=1&&odd<n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
        return 0;
}