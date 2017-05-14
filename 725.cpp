#include <iostream>
#include <cstdio>
#include <cassert>
using namespace std;

#define TRUE 1
#define FALSE 0

int main()
{
	int N;
	scanf("%d", &N);

	if(N == 0)
		return 0;

	while(TRUE)
	{
		int solutions = 0;
		for(int fghij = 1234; fghij <= 98765; ++fghij)
		{
			int abcde = N * fghij;

			if(abcde > 98765)
				break;

			unsigned int used = (fghij < 10000);
			int tmp = fghij;
			while(tmp)
			{
				used |= (1 << (tmp % 10));
				tmp /= 10;
			}
			tmp = abcde;
			while(tmp)
			{
				used |= (1 << (tmp % 10));
				tmp /= 10;
			}

			if(used == (1 << 10) - 1)
			{
				solutions++;
				printf("%05d / %05d = %d\n", abcde, fghij, N);
			}
		}

		if(solutions == 0)
			printf("There are no solutions for %d.\n", N);

		scanf("%d", &N);
		if(N == 0)
			return 0;

		printf("\n");
	}
}
