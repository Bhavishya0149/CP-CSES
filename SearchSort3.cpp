#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpii;
typedef unordered_map<int,int> umii;
typedef unordered_map<int,bool> umib;
typedef unordered_map<char,int> umci;
typedef unordered_map<char,bool> umcb;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define loop(iter_n, x, n) for(int iter_n = x; i < n; iter_n++)
#define cyes cout << "YES" << "\n";
#define cno cout << "NO" << "\n";
#define cneg cout << -1 << "\n";
#define cnull cout << 0 << "\n";
#define cans cout << ans << "\n";
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

// DEBUG
// #define ONLINE_JUDGE
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " ; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

template <typename T> void _print(T a){cerr << a;}
template <typename T, typename V> void _print(pair <T, V> a){cerr << "[ "; _print(a.ff); cerr << ", "; _print(a.ss); cerr << " ]";}
template <typename T> void _print(set <T> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";} cerr << "]";}
template <typename T> void _print(unordered_set <T> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";} cerr << "]";}
template <typename T> void _print(vector <T> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";}  cerr << "]";}
template <typename T, typename V> void _print(map <T, V> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";} cerr <<"]";}
template <typename T, typename V> void _print(map <T, vector <V>> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";} cerr <<"]";}
template <typename T, typename V> void _print(unordered_map <T, V> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";} cerr <<"]";}
template <typename T, typename V> void _print(unordered_map <T, vector <V>> a){cerr << "[ "; for(auto i : a){_print(i); cerr << " ";} cerr <<"]";}
// DEBUG

ll ceil(ll dividend, ll divisor){ return (dividend + divisor - 1)/divisor;}
ll max(ll a, ll b, ll c){ return max(a, max(b, c)); }
ll min(ll a, ll b, ll c){ return min(a, min(b, c)); }

template <typename T> bool revsort(T a, T b){return a > b;}

ll mod_add(ll a, ll b, ll m){a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m){a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m){a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

//  _____________________________________________________________________________
// | |   ____  \    |  |     |  |     /  __  \     |  |      |  |               
// | |  |    \  \   |  |     |  |    /  /  \  \    |  |      |  |               
// | |  |     |  |  |  |     |  |   /  /    \  \   |  |      |  |                   
// | |  |____/  /   |  |_____|  |  |  |______|  |  |  |      |  |                     
// | |   ____  |    |   _____   |  |   ______   |  |  |      |  |                    
// | |  |    \  \   |  |     |  |  |  |      |  |  |  |      |  |                 
// | |  |     |  |  |  |     |  |  |  |      |  |   \  \    /  /                 
// | |  |____/  /   |  |     |  |  |  |      |  |    \  \__/  /                  
// |_|_________/____|__|_____|__|__|__|______|__|_____\______/___________________

void solve(){
    int n, k; cin>>n>>k;
    int arr[n]; for(auto &i : arr) cin>>i;

    sort(arr, arr + n);

    int ans = n;
    
    int i = 0, j = n - 1;

    while(i <= j){
        if(i == j) break;
        if(arr[i] + arr[j] <= k){
            i++; j--; ans--;
        } else j--;
    }

    cans;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();

    auto start1 = high_resolution_clock::now();

    // int t; cin >> t; while(t--)
    solve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast <microseconds> (stop1 - start1);

#ifndef ONLINE_JUDGE // displays runtime
    cerr << "Time: " << duration.count() / 1000 << " ms";
#endif

    return 0;
}