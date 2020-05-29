/* int占쏙옙 큐 IntQueue占쏙옙 占쏙옙占쏙옙求占� 占쏙옙占싸그뤄옙 */
#include <stdio.h>
#include "MyQueue.h"

int main(void)
{
	IntQueue que;

	if (Initialize(&que, 64) == -1) {
		puts("failed to construct Queue...");
		return 1;
	}

	while (1) {
		int m, x;

		printf("current num of data : %d / %d \n", Size(&que), Capacity(&que));
		printf("(1) Enqueue (2) Dequeue (3) Peek (4) Print all data (0) Exit : ");
		scanf("%d", &m);

		if (m == 0) break;
		switch (m) {
		case 1: /*--- Enqueue ---*/
			printf("data input : "); scanf("%d", &x);
			if (Enque(&que, x) == -1)
				puts("failed to enqueue...");
			break;

		case 2: /*--- Dequeue ---*/
			if (Deque(&que, &x) == -1)
				puts("failed to dequeue...");
			else
				printf("Dequed data >>> %d\n", x);
			break;

		case 3: /*--- Peek ---*/
			if (Peek(&que, &x) == -1)
				puts("failed to peek...");
			else
				printf("Peeked data >>> %d\n", x);
			break;

		case 4: /*--- Print      ---*/
			Print(&que);
			break;
		}
	}

	Terminate(&que);

	return 0;
}