#include<bits/stdc++.h>

#define sf                  scanf
#define pf                  printf
#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define PF                  first
#define PS                  second
#define si(n)               scanf("%d",&n)
#define sii(x,y)            scanf("%d %d",&x,&y)
#define siii(x,y,z)         scanf("%d %d %d",&x,&y,&z)
#define sl(n)               scanf("%lld",&n)
#define sll(x,y)            scanf("%lld %lld",&x,&y)
#define slll(x,y,z)         scanf("%lld %lld %lld",&x,&y,&z)
#define FOR(i,x,y)          for(int i=x;i<=y;i++)
#define RFOR(i,x,y)         for(int i=x;i>=y;i--)
#define CLR(arr,val)        memset(arr,val,sizeof arr);
#define vout(v,ind)         for(int vind=0;vind<v.size();vind++){ cout<<v[vind]; if(vind<v.size()-1) cout<<' '; else cout<<endl;}
#define arrout(arr,i,x,y)   for(int i=x;i<=y;i++){ cout<<arr[i]; if(i<y) cout<<' '; else cout<<endl;}
#define all(v)              v.begin(),v.end()
#define rall(v)             v.rbegin(),v.rend()
#define TCL(test,t)         for(test=1;test<=t;test++)
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)
#define fastIO()            {ios_base::sync_with_stdio(false); cin.tie(NULL);}
#define MAXN                100005
#define MAXP                2005
#define MOD                 1000000007
#define PI                  acos(-1)

#define FasterIO    ios_base::sync_with_stdio(false); cin.tie(NULL);


using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }

typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;


double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;

class TimeTracker {
    clock_t start, end;
public:
    TimeTracker() {
        start = clock();
    }
    ~TimeTracker() {
        end = clock();
        fprintf(stderr, "%.3lf s\n", (double)(end - start) / CLOCKS_PER_SEC);
    }
};


int main(){

    //FasterIO

    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//TimeTracker a;

	ll h1,h2,m1,m2;

	scanf("%lld:%lld",&h1,&m1);
    scanf("%lld:%lld",&h2,&m2);

    ll t1 = h1*60 + m1;
    ll t2 = h2*60 + m2;

    ll t3 = (t1+t2)/2;

    ll h3 = t3/60;
    ll m3= t3%60;

    if(h3<10){
        if(m3<10){
            pf("0%lld:0%lld\n",h3,m3);
        }else{
            pf("0%lld:%lld\n",h3,m3);
        }
    }else{
        if(m3<10){
            pf("%lld:0%lld\n",h3,m3);
        }else{
            pf("%lld:%lld\n",h3,m3);
        }
    }


    return 0;
}
