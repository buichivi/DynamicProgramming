#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int n, a[200];
// int MEMO[200];
// int L(int i){ // L[i] la do dai lon nhat cua chuoi con tang ket thuc tai i
//     if (i == 0)
//         return 1;
//     if (MEMO[i] != -1)
//         return MEMO[i];
    
//     // cout<<"L("<<i<<")"<<endl;
//     int r = 0;
//     for(int j=0; j<i; j++){
//         if (a[i] > a[j]) {
//             r = max(r, L(j));
//             // cout << r << ' ';
//         }
//     }
//     return MEMO[i]= r+1;
// }
int main(){
    // freopen("input.txt", "r", stdin);
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    //     MEMO[i]= -1;
    // }
    // int ans = 0;
    // for(int i=0;i<n;i++)
    //     ans= max(ans, L(i));
    // cout<<ans<<endl;
    //Trien khai bang mang
    int n;
    cin >> n;
    int a[100];
    vector<int> L(n, 1);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < i; j++)
        if (a[i] > a[j]) 
          L[i] = max(L[i], L[j]+1);
    cout << *max_element(L.begin(), L.end());
    return 0;
}