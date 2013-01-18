#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cctype>

using namespace std;


void work(int a, int b, int n) {
	//if (n >= 2 && b > 10 && a * 10 % b != 0) {
	//	printf("-1\n");
	//	return ;
	//}
	a = a * 10;
	if (a % b != 0 && b - a % b >= 10) {
		printf("-1\n");
		return ;
	}
	if ( a % b > 0 && b - a % b < 10) {
		
		a += b - a % b;
	}
	printf("%d", a);
	for (int i = 1; i < n; i ++) {
		printf("%d", 0);
	}
	printf("\n");
	return ;
}

int main(void) {
	int a, b, n;
	
	scanf("%d%d%d", &a, &b, &n);
	work(a, b, n);
	
	return 0;
}
