#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

struct cmpr{
    bool operator()(pair<int,pair<int,int> > l,pair<int,pair<int,int> > r){
        return l.second.second<r.second.second;
    }
}cmp;

int main()
{

	int t;

	cin >> t;

	while(t--)
	{
        int n;
        cin >> n;
        vector<pair<int,pair<int,int> > > v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].second.first;
            v[i].first = i+1;
        }
        for(int i=0;i<n;i++){
            cin >> v[i].second.second;
        }
        sort(v.begin(),v.end(),cmp);
        cout << v[0].first << " ";
        int finish = v[0].second.second;
        for(int i=1;i<n;i++){
            if(finish<=v[i].second.first){
                cout << v[i].first << " ";
                finish = v[i].second.second;
            }
        }
        cout << endl;
	}


	return 0;
}
