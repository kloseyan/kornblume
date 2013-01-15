#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define LENGTH 100001
int a[LENGTH];

bool cmp(int a, int b) {
	return a < b;
}
bool even(int p) {
	return p % 2 == 0;
}
int sum1(int* a, int n) {
	int total = 0;
	for (int i = 0; i < n; i ++) {
		total += a[i];
	}
	return total;
}
int main (void) {
	int n, k, p, remain;	
	scanf("%d%d", &n, &k );
	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n, cmp);
	p = k;
	for (int i = 0; i < k; i ++) {
		if (a[i] < 0) {
			a[i]  = 0 - a[i];
		} else {
			p = i;
			break;
		}
	}
	remain = k - p;
	sort(a, a +n, cmp);
	if (!even(remain) ) {
		a[0] = 0 - a[0];
	}

	printf("%d\n", sum1(a, n));
	
	return 0;
}
