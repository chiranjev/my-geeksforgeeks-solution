#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
        int n,s;
        cin >> n;
        int arr[n];
        int sb=0,sa=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sa+=arr[i];
        }
        int i;
        for(i=0;i<n;i++){
            sa=sa-arr[i];
            if(sb==sa){
                break;
            }else{
                sb+=arr[i];
            }
        }
        if(sb==sa){
            cout << i+1 << endl;
        }else{
            cout << "-1" << endl;
        }



	}


	return 0;
}
