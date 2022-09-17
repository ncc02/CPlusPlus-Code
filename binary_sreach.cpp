#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    int a[n+1];  for(int i=1; i<=n; i++) cin >> a[i];
    int x;  cin >> x;

    int l= 1, r= n;
    while(l<r){
        int m= (l+r)/2;
        if (a[m] < x) l= m+1;
            else r= m;
    }
    cout<<r<<"\n";
}

//In thứ tự nhỏ nhất của phần tử có giá trị bằng x trong mảng.