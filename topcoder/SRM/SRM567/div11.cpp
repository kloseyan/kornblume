#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define MAXN 77777
bool kkk[MAXN];

int com(int n) {
	return floor(sqrt(n));
}
int com2(int n, int m) {
	return n * m;
}
bool ok(int k) {
	for (int i = 2; i * i <= k; i ++) {
		if (k % (i * i) == 0) {
			return false;
		}
	}
	return true;
}
class TheSquareRootDilemma{
public:
	int countPairs(int N, int M) {
		int cnt = 0, k = 2, tmp;
		bool flag = true;
		///memset(kkk, 0, sizeof(kkk));
		///	memset(ppp, 0, sizeof(ppp));
		///for (int i = 0; i * i < MAXN; i ++) {
		///	kkk[i*i] = true;
		///}
		if (N < M) {
			tmp = M;
			M = N;
			N = tmp;
		}
		cnt =  com2(com(N), com(M));
		cout<< cnt << endl;
		while (flag) {
			if (!ok(k)) {
				///	cout << k << endl;
				k ++;
				continue;
			}
			
			tmp = com2(com(N / k), com(M / k));
			///	cout << tmp<< ' ';
			cnt += tmp;
			cout <<k << ' '<<  cnt << ' '<< tmp << endl;
			if (tmp == 0) {
				flag  = false;
			}
			k++;
		}
		return cnt;
	}
};
int main(void) {
/*
	for (int i = 0; i < 100; i ++) {
		printf("%d %d" , i, com(i));
	}
	cout << endl;
*/
	TheSquareRootDilemma a;
	cout <<a.countPairs(100,100) << endl;
	return 0 ;
}
