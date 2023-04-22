#include <bits/stdc++.h>

using namespace std;

int length_strlen = 0;

int strlen(char *str) { // 堆栈溢出(递归次数过多？)
	if (*(str++) == '\0') {
		return 0;
	}
	return 1+strlen(str++);
}

int main() {
	char a[100] = "abcdefghijkaaaaaaaaaaa\0";
	cout << strlen(a);
	return 0;
}//str_strlen()实现