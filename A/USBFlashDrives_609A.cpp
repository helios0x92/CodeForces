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
  int N, M, usbCount = 0;
  cin >> N >> M;
  vector<int> A(N);
  for(int i = 0; i < N; i++) cin >> A[i];
  sort(A.begin(), A.end());
  for(int i = N-1; i >= 0; i--) {
    M -= A[i];
    usbCount++;
    if(M <= 0) break; 
  }
  cout << usbCount << "\n";
  return 0;
}
