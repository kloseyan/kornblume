#include <stdio.h>

bool lucky(int tmp) {
	if (tmp == 4 || tmp == 7) {
		return true;
	}
	return false;
}
bool luckyK(int p, int k) {
	int tmp;
	int cnt = 0;
	while (p > 0) {
		tmp =  p % 10;
		if (lucky(tmp)) {
			cnt ++;
		}
		p = p / 10;
	}
	if (cnt > k ) return false;
	else return true;
}
int main (void) {
	int n, k, x, cnt = 0;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &x);
		if (luckyK(x, k)) {
			cnt ++;
		}
	}
	printf ("%d\n", cnt);
	return 0;
}
