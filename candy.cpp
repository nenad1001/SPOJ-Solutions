#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void) {
    int n;
    for( ; ; ) {
            scanf("%d", &n);
            if (n == -1) 
            	break;
            int arr[n], poc = 0;
            for (int i = 0; i < n; i++) {
            	scanf("%d", &arr[i]);
                poc += arr[i];
            }
    	    if (poc % n != 0)
    		printf("-1\n"); 
    	    else {
          	int ret = 0; 
          	for (int i = 0; i < n; i++) { 
              		if (poc / n > arr[i])
              			ret += poc/n - arr[i];
            	}
              	printf("%d\n", ret);
   	     }
	}
return (7-7);
}
