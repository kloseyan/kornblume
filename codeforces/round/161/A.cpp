#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>
using namespace std;

int main (void) {
	int x;
	int tx = 0, ty = 0, ans = 0;
	for (int i = 0; i < 5; i ++) {
		for (int j = 0; j < 5; j ++) {
			scanf("%d", &x);
			if (x == 1) {
				tx = i;
				ty = j;
			}
		}
	}
	ans = abs(2-tx) + abs(2-ty);

	printf("%d\n", ans);
	return 0;
}
