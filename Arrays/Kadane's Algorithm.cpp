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
        int n;

        cin >> n;
        int arr[n];
        int positiveflag=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]>0){
                positiveflag=1;
            }
        }
        int curr_sum = 0;
        int max_sum = 0;

        if(positiveflag == 0){
            max_sum = arr[0];
            for(int i=1;i<n;i++){
                max_sum = max(max_sum,arr[i]);
            }
        }else{
            for(int i=0;i<n;i++){
                if(curr_sum+arr[i]<0){
                    curr_sum = 0;
                }else{
                    curr_sum += arr[i];
                    if(curr_sum>max_sum){
                        max_sum = curr_sum;
                    }
                }
            }
        }
        cout << max_sum << endl;
	}


	return 0;
}
