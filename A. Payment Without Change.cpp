#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long t=(a*n)+b;
        if(t<s){
            printf("NO\n");
        }
        else if(t==s){
            printf("YES\n");
        }
        else if((a*n)>s){
            int x=(s/n);
            //int y=(x*n)+b;
            if(((x*n)+b)>=s){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            if(t>=s){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}