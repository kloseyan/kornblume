#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;

#define CHECK_SIZE 4

int main(void) {
	int a[CHECK_SIZE][CHECK_SIZE];
	int x, y, z;
	memset(a, 0, sizeof(a));
	for (int i =0; i < 3; i ++) {
		for (int j = 0; j < 3; j ++) {
			scanf("%d", &a[i][j]);
		}
	}
	a[0][0] = ((a[0][2] + a[2][0]) + (- a[1][0] - a[2][0] + a[0][2] + a[1][2])) / 2;
	a[2][2] = a[0][2] + a[2][0] - a[0][0];
	a[1][1] = a[0][1] + a[0][2] + a[0][0] - a[1][0] - a[1][2];
	for (int i = 0; i < 3; i ++) {
		for (int j = 0; j < 3; j ++) {
			printf("%d", a[i][j]);
			if (j != 2) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
