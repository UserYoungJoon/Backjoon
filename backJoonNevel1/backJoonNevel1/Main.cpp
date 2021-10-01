#include <stdio.h>

int main()
{
	int n = 0x64636261;
	char* pn = (char*)&n;
	char a = 'b';

	char* p = nullptr;

	for (int i = 0; i < 4; i++)
	{
		printf("%c", *pn++);
		if (pn[i] == a)
		{
			p = pn;
		}
	}

	printf("\n");
	printf("%c\n", *p++);
	printf("%c\n", *++p);
	printf("%c\n", (*p)++);
	printf("%c\n", ++ * p);
	printf("%X\n", n);


	return 0;

}