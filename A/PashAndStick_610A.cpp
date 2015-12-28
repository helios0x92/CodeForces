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
  int N;
  cin >> N;
  if(N%2 != 0) cout << 0 << "\n";
  if(N%2 == 0) {
    if(N%4 == 0) cout << N/4 -1 <<"\n";
    else cout << N/4 << "\n";
  }
  return 0;
}
