#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int n;
	int fat = 1;
	scanf("%d", &n);
	while(n > 1) {
		fat *= (n--);
	}
	printf("%d\n", fat);
	return 0;
	
}
