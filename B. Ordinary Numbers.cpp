#include<bits/stdc++.h>
using namespace std;

int digit(int n){

    int dig = 0;

    while(n>0){
            dig++;
        n/=10;
    }

    return dig;
}

int cNum(int n){

    int num=1;

    for(int i=1;i<n;i++){
        num*=10;
        num+=1;
    }

    return num;

}

int main(){


    int t;
    cin>>t;

    while(t--){

        int n,d,res,z,te;
        cin>>n;

        if(n<10){
            cout<<n<<"\n";
        }else{
            d = digit(n);

            res = 9*(d-1);


           z = cNum(d);
           te = z;

           while(z<=n){
            res++;
            z+=te;
           }
            cout<<res<<"\n";
       }
    }

    return 0;
}
