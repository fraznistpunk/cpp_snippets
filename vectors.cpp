#include<bits/stdc++.h>
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        	map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vector<int> a; /* Global vector, initialized to 0 by default. */

void solve(){
	
	vector<int> b; /* Local vector */
	
	vector<int> c = { 12, 13, 15, 16, 19, 20 }; /* Declare and Initialize at same time. */    
	
	/* Insert an element to vector. Use "vector_name.push_back()" fn */
	
	c.push_back(7); /* Insert an element manually into the vector. */
	
	// cout<<c.size()<<endl; /* Will print size of vector. */
	/* For smaller elements we can use vector_name.resize(n) and insert elements and take input from user. For ex: */
	// int n;
	// cin>>n;
	// b.resize(n);
	// for(int i=0; i<n; i++) cin>>b[i];
	// for(int i=0; i<n; i++) cout<<b[i]<<endl;
	
	/* As vectors are dynamic in nature, If we dont want to use resize(), then use below method (Note: Mostly used when vector size is not known, for larger values) */
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		int num;
		cin>>num;
		b.push_back(num);
	}
	/* pop_back() is used to remove element from the last of the vector. */

	for(int i=0; i<n; i++) cout<<b[i]<<endl;
	
	/* to print last element of vector, use back() function. */
	
	cout<<c.back(); /* It is also similar to cout<<c[c.size()-1]; */
	// 2d vector (dynamic)
	std::vector<std::vector<int>> g;
	std::vector<int> a(2, 0);
	std::vector<int> baba(5, 0);
	g.push_back(a); g.push_back(baba);
	// 2d static vector of size 10 x 25
	std::vector<std::vector<int>> vec(10, std::vector<int> (25, 0));
}

signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}