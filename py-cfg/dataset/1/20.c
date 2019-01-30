#include <bits/stdc++.h> // This is all in one include library
using namespace std;
//------------------------------------------------
#define endl '\n'
#define urange(_i, _startLimit, _endLimit) for(int64_t (_i) = (_startLimit); (_i) < (_endLimit); ++(_i))
#define ulimit(_i, _startLimit, _endLimit) for(int64_t (_i) = (_startLimit); (_i) <= (_endLimit); ++(_i))
#define dlimit(_i, _startLimit, _endLimit) for(int64_t (_i) = (_startLimit); (_i) >= (_endLimit); --(_i))
#define uIterRange(arr_name, iter_start, iter_end) &arr_name[iter_start],&arr_name[iter_end]
#define dIterRange(arr_name, iter_start, iter_end) make_reverse_iterator(&arr_name[iter_end]),make_reverse_iterator(&arr_name[iter_start])
#define db(a) {cerr<<"\033[1;31m"<<"Debug: "<<"\033[0m"; cerr<<#a<<"\033[1;31m"<<" : "<<"\033[0m"<<a<<'\n';}
#define dbarr(_type, _arr, _l, _h) {cerr << "\033[1;31m" << "Debug: " << "\033[0m" << #_arr << " [" << (_l) << " : " << (_h) << "] = "; u##_type(_i,_l,_h) cerr << (_arr)[_i] << ", "; cerr<<"\n";}
#define all(container_name) begin(container_name),end(container_name)
#define contains(_map, _value) (_map.find(_value)!=_map.end())
#define gett(_item1, _index1) get<_index1>(_item1)
#define matrix(T,name,rows,cols,val) vector<vector<T>> name((rows),vector<T>(cols,val));
#define short int16_t
#define int int32_t
#define LONG int64_t
#define DOUBLE long double
//------------------------------------------------

std::vector<int> ans(1e5+5);
void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(k);
    urange(i,0,k) cin>>arr[i];

    // NOTE: the most important statement of: Petya doesn't want to take any risks, so he additionally wants this sequence to be the only longest increasing subsequence, that is, all other increasing subsequences have to have strictly smaller length.
    if(n==1){
        cout<<"YES"<<endl;
        cout<<"1"<<endl;
    }else if(k==1){
        cout<<"NO"<<endl;
    }else if(n==2 && k==2){
        cout<<"YES"<<endl;
        cout<<"1 2"<<endl;
    }else{
        bool possible = true;
        if(k==2 && ((arr[0]+1) != arr[1])){
            cout<<"NO"<<endl;
            return;
        }

        fill(&ans[0],&ans[n+1],-1);
        int val = n;
        urange(j, 1, arr[0]){
            ans[j]=val--;
        }

        /*
        The below loop is required to handle this testcase:
            1
            4 3
            1 3 4
        Without this loop, output is : 2 1 3 4
        This is not ok becase there are two increasing sub-sequence with length 3

        Correct output: 1 4 2 3
        */
        urange(j,arr[0]+1,arr[1]){
            ans[j]=val--;
        }

        dlimit(j,k-1,0){
            ans[arr[j]]=val--;
            db(ans[arr[j]]);
        }

        ulimit(j,arr[0]+1,n){
            if(ans[j]==(-1)) ans[j]=val--;
        }

        cout<<"YES"<<endl;
        ulimit(i,1,n) cout<<ans[i]<<" ";
        cout<<endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cout.precision(20); cout << fixed;

    int T; cin>>T;
    while (T--)
        solve();

    return 0;
}
