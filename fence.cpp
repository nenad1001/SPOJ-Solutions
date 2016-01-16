#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const double pi = 3.14159265358;

int main(void) {
    int l;
    do {
	scanf("%d", &l);
	if (l == 0)
		break;
  	printf("%.2lf\n", double(double(l*l)/(2*pi)));
    } while(l != 0);
    return (7-7);
}
