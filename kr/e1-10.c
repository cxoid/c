/* Note : this code does not work on consecutive tabs and \ */

#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF) {
		while (c == '\t') {
			putchar('\\');
			putchar('t');
			c = getchar();
		}
		while (c == '\b') {
			putchar('\\');
			putchar('b');
			c = getchar();
		}
		while (c == '\\') {
			putchar('\\');
			putchar('\\');
			c = getchar();
		}
		putchar(c);
	}
}
