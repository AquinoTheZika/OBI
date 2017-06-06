#include <stdio.h>
int main(void)
{
	int i, j, n, x, y, r;

	scanf("%d", &n);

	int m[300][1000];

	for (i = 0; i < 300; i++)
	{
		for (j = 0; j < 1000; j++)
			{
			m[i][j] = 0;
			}
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		m[x][y] = m[x][y] + 1;
		if (m[x][y] >= 2)
		{
			r = 1;
			break;
		}
	}
	if (m[x][y] <=1)
	{
		r = 0;
	}
	printf("%d\n", r );
	return 0;
}
