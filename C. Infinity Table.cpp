#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);



    int tt;
    cin>>tt;
    while(tt--){

        long long n;
        cin>>n;

        if(n==1){
            cout<<1<<" "<<1<<"\n";
            continue;
        }

    long long i=2;
    long long a=3;
    long long z=1;
    long long r,c;

    while(true){

        if(a==n){
            r=z+1;
            c=z+1;
            cout<<r<<" "<<c<<"\n";
            break;
        }else if(n <= a+z){
            if(n>a){
            long long dif = n-a;
                r=z+1;
                c=z+1-dif;
                cout<<r<<" "<<c<<"\n";
                break;
            }else{
                long long dif= a-n;
                r=z+1-dif;
                c=z+1;
                cout<<r<<" "<<c<<"\n";
                break;
            }
        }

        i+=2;
        a+=i;
        z++;
    }



    }

    return 0;
}
