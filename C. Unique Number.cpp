#include<bits/stdc++.h>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> pii;
typedef pair <ll,ll> pll;

///#define ff              first
///#define ss              second
///#define pb              push_back
///#define all(v)          v.begin(),v.end()

///#define D(x)            cerr << #x " = " << x << '\n'
///#define DBG             cerr << "Hi!" << '\n'

///#define CLR(a)          memset(a,0,sizeof(a))
///#define SET(a)          memset(a,-1,sizeof(a))
///#define nn              "\n"
///#define gcd(a,b)        __gcd(a,b)
///#define lcm(a,b)        (a*b)/gcd(a,b)
///#define	pi             acos(-1.0)
///#define inf             2e9+10

///const double pi = acos(-1.0);
///const double eps = 1e-8;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //freopen("in.txt", "r", stdin);

    int t;
    cin>>t;
    while(t--){
        int x,arr[10]={0};
        cin>>x;

        if(x<=9){
            cout<<x<<"\n";
        }else if(x>45){
            cout<<"-1\n";
        }else{
            for(int i=9;;i--){
                if(x>i){
                    x-=i;
                    arr[i]=1;
                }else{
                    arr[x]=1;
                    break;
                }
            }
            for(int i=0;i<10;i++){
                if(arr[i]==1){
                    cout<<i;
                }
            }
            cout<<"\n";
        }
    }


    return 0;
}
