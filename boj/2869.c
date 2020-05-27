#include <stdio.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	if (a == v) printf("%d", 1);
	else {
		double x = (v - b) / (a - b);
		double rmd = (v - b) % (a - b);
		int dx = (int)x;
		if (rmd == 0) printf("%d", dx);
		else printf("%d", dx + 1);
	}
			return 0;
}