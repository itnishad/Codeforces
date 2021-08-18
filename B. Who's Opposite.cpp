#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin>>tt;
    while(tt--){

    int a,b,c;
    cin>>a>>b>>c;

    int dif = abs(a-b);

    if(min(a,b)*2 > max(a,b) || (dif*2) < c){
        cout<<-1<<"\n";
    }else{

        if(dif < c){
            cout<<c-dif<<"\n";
        }else{
            cout<<c+dif<<"\n";
        }
    }


    }

    return 0;
}
