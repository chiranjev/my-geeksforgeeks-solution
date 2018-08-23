#include<bits/stdc++.h>
using namespace std;
struct cmpr{
    bool operator()(pair<int,int> l,pair<int,int> r){
        return l.second<r.second;
    }
}cmp;

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<int,int> > activity(n);
        for(int i=0;i<n;i++){
            cin >> activity[i].first;
        }
        for(int i=0;i<n;i++){
            cin >> activity[i].second;
        }

        sort(activity.begin(),activity.end(),cmp);

        int ans = 1;
        int fin = activity[0].second;

        for(int i=1;i<n;i++){
            if(fin<=activity[i].first){
                ans++;
                fin = activity[i].second;
            }
        }
        cout << ans << endl;

    }

	return 0;
}
