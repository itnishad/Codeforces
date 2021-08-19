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
        int n,arr[1000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0,j=n-1;i<=n/2;i++,j--){
            if(n%2==1 && i==n/2){
               cout<<arr[i]<<" ";
            }else if(n%2==0 && i==n/2){

            }
            else{
                cout<<arr[i]<<" ";
                cout<<arr[j]<<" ";
            }

        }
        cout<<"\n";
    }


    return 0;
}
