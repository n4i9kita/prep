#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fo(i,l,h) for(int i=l;i<h;i++)
#define pfo(l,h,arr) for(int i=l;i<h;i++) {cout<<arr[i]<<" ";} cout<<'\n';
# define m 1000000007

void solve(){
	int n,q;
	cin>>n>>q;
	int val;
	vector<int>v;
	fo(i,0,n){ cin>>val; v.push_back(val);}
	int t,x;
	auto it1=v.begin();
	auto it2=v.begin();
    
  // remember, you gotta sort to apply lower_bound() and upper_bound()
  sort(v.begin(), v.end());
	while(q--){
		cin>>t>>x;
		it1=lower_bound(v.begin(), v.end(),x);
		it2=upper_bound(v.begin(), v.end(),x);

		switch(t){
			case 1: if(it1==v.end()){cout<<-1<<" ";continue;}
					cout<<*it1;
			break;
			case 2: if(it2==v.end()){cout<<-1<<" ";continue;} cout<<*it2;
			break;
			case 3: cout<<it2-v.begin(); 
			break;
			case 4: cout<<it1-v.begin();
			break;
		}
		
		cout<<" ";
	}
	cout<<endl;
}

signed main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		solve();
	}

}
