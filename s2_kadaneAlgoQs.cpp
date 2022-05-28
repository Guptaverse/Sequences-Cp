//Flipping game : https://codeforces.com/problemset/problem/327/A
//must : https://www.youtube.com/watch?v=FtiWd8PIpxI&list=PLX0iyO9CrCF0KUTBhzSJC8OE7gy6U47LR&index=2
// 

#include<iostream>
#include<vector>
using namespace std;

void solver(){
    int n;
    cin>>n;
    vector<int>v(n);
    int no_of_ones =0;
    for(auto &x:v) cin>>x,no_of_ones+=x;
    for(int i =0;i<n;i++){ //we want to maximize 0s and try to minimize the 1s so considering 1s as a loss and 0 as gain 
        if(v[i]) v[i]=-1;// giving w =-1 if its 1
        else v[i]=1;// giving w = 1 if its 0
    }
    // for(auto x:v) cout<<x<<" ";
    if(no_of_ones==n) cout<<n-1<<endl;
    // sum is the no of 1s in array 
    else{
        int flippingIt = 0;
        int x =0;
        for(int i =0;i<n;i++){
            x = max(0,v[i]+x);
            flippingIt = max(flippingIt,x);
        }
        cout<<no_of_ones+flippingIt<<endl;
    }
}

int main(){
    // int testcases;
    // cin>>testcases;
    // while(testcases--){
        solver();
    // }
    return 0;
}