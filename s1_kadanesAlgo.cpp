//maximum subarray sum  
// there is also dp solution Look into dp repo

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;

    int maxSofar = 0;
    int currSum =v[0];
    for(int i =1;i<n;i++){
        currSum = max(v[i],v[i]+currSum);
        maxSofar = max(currSum,maxSofar);
    }
    cout<<maxSofar<<endl;
}