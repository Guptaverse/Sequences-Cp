#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    int ws=0;
    int winSum =0;
    int sum =0;
    for(int i =0;i<n;i++){
        ws++;
        sum+=v[i];
        if(ws==k){
            winSum=max(winSum,sum);
            sum = sum-v[i-k+1];
            ws--;
        }
    }
    cout<<winSum<<" ";

}