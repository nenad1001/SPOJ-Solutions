#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <map>
 
using namespace std;
 
map <int,long long> h;
 
long long f(long long n) { //precondition -> h.clear()
  if (n == 0)
  	return 0; //base
 
  long long r = h[n];
 
  if (r == 0) {
    r = max( n, f(n/2) + f(n/3) + f(n/4) );
    h[n] = r;
  }
  return r;
}


int main(void) {
   int n;
   while(scanf("%d", &n) != EOF) {
        cout << f(n) << endl;
   }
	return (7-7);
}
