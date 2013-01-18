#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

#define CHECK_SIZE 8
char line[CHECK_SIZE];
bool ok(char line[]) {
	
	for (int i = 1; i < CHECK_SIZE; i ++) {
		if (line[i] == line[i-1]) return false;
	}
	return true;
}
int main(void) {
	int error = 0;
	for (int i = 0; i < CHECK_SIZE; i ++) {
		gets(line);
		if (!ok(line)) {
			error ++;
		}
	}
	if (error != 0) {
		printf("NO\n");
	} else {
		printf("YES\n");
	}
	return 0;
}
