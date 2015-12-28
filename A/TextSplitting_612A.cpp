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
  int N,P,Q;
  cin >> N >> P >> Q;
  string S;
  cin >> S;
  int a = -1,b = -1;
  for(int i = 0; i <= N/P; i++) {
    for(int j = 0; j <= N/Q; j++) {
      if(i*P + j*Q == N) {
	a = i; b = j;
	break;
      }
    }
  }
  //cout << a << " "<<b<<"\n";
  bool alt = true;
  if(a == -1 && b == -1) cout << "-1\n";
  else {
    if(a && b) cout << a+b << "\n";
    else if(a) cout << a <<"\n";
    else cout << b << "\n";
    for(int i = 0; i < N; ) {
      if(a != -1 && i < a*P) {
	cout << S.substr(i, P)<<"\n";
	i += P;
      } else {
	cout << S.substr(i, Q) <<"\n";
	i += Q;
      }
    }
  }
  return 0;
}
