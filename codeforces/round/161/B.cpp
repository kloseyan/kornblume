#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>
using namespace std;

#define MAXN 60
int a[MAXN];
int main (void) {
	int n, k;
	
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	sort(a, &a[n]);
	if (k > n) {
		printf("%d\n", -1);
	} else {
		printf("%d %d\n", a[n - k], 0);
	}
	return 0;
}
