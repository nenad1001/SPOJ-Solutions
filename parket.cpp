#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int c, s;
    scanf("%d%d", &c, &s);
        for (int i = 3; i < 5000; i++) {
            for (int j = i; j >= 3; j--) {
                if (c + s == i * j && s == (i-2)*(j-2))
                	printf("%d %d\n", i, j);
            }
        }

	return (7-7);
}
