#include <stdio.h>

int main() {
	int a = 5, b = 6;

	printf("|%d%d%-6d|", a, a, a);
	printf("%6d%d%d|\n", a, a, a);
	printf("|%d%d%-6d|", b, b, b);
	printf("%d%d%-6d|\n", a, a, a);
	printf("|%6d%d%d|", b, b, b);
	printf("%d%d%-6d|\n", b, b, b);
	printf("|%6d%d%d|", a, a, a);
	printf("%6d%d%d|\n", b, b, b);

	return 0;
}