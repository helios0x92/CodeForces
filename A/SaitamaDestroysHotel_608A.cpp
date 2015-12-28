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
  int N,S;
  cin >> N >> S;
  vector<pair<int, int>> A(N);
  for(int i = 0; i < N; i++) {
    int f,t;
    cin >> f >> t;
    A[i] = make_pair(f,t);
  }
  sort(A.begin(), A.end());
  int totalTime = 0;
  int prevFloor = S;

  for(int i = N-1; i >= 0; i--) {
    int curFloor = A[i].first;
    int curTime = A[i].second;
    totalTime += prevFloor - curFloor;
    prevFloor = curFloor;
    
    if(curTime <= totalTime) continue;
    else totalTime += (curTime - totalTime);
  }
  totalTime += prevFloor;
  cout << totalTime << "\n";
  return 0;
}
