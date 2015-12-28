#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  const int MAX = 1e6+2;
  
  int N;
  cin >> N;
  vector<int> B(MAX);
  vector<int> D(MAX);
  for(int i = 0, a; i < N; i++){
    cin >> a;
    cin >> B[a];
  }
  if(B[0] > 0) D[0] = 1;
  int maxNotDestroyed = 0;
  for(int i = 1; i < MAX; i++) {
    if(B[i] == 0) D[i] = D[i-1];
    else {
      if(B[i] >= i) D[i] = 1;
      else D[i] = D[i - B[i] - 1] + 1;
    }
    if(D[i] > maxNotDestroyed) maxNotDestroyed = D[i];
  }
  cout << N - maxNotDestroyed << "\n";
  return 0;
}
