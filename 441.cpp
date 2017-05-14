#include <iostream>
#include <cstdio>
#include <cstring>
#include <cassert>

#define TRUE 1
#define FALSE 0

int main()
{
	int k = 0;
	scanf("%d", &k);

	int array[12];

	while(k != 0)
	{
		memset(array, 0, sizeof(int));
		for(int i = 0; i < k; ++i)
			scanf("%d", &array[i]);

		int n = 6;

		for(int a = 0; a < k - n + 1; ++a)
		{
			for(int b = a + 1; b < k - n + 2; ++b)
			{
				for(int c = b + 1; c < k - n + 3; ++c)
				{
					for(int d = c + 1; d < k - n + 4; ++d)
					{
						for(int e = d + 1; e < k - n + 5; ++e)
						{
							for(int f = e + 1; f < k - n + 6; ++f)
								printf(
										"%d %d %d %d %d %d\n",
										array[a],
										array[b],
										array[c],
										array[d],
										array[e],
										array[f]);
						}
					}
				}
			}
		}

		scanf("%d", &k);

		// Do we have another test case?
		if(k != 0)
			printf("\n");	// Add new line to separate outputs.
	}

	return 0;
}
