#include<stdio.h>
#include<string.h>

int main(void) {

	int C,N;
	int average = 0 , sum = 0;
	int list[1000];
	float student = 0;

	scanf("%d", &C);

	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &list[j]);
			sum += list[i];
		}
		average = sum / N;
		for (int k = 0; k < N; k++) {
			if (list[k] > average)
				student++;
		}
		printf("%.3f", student / N * 100);
		student = 0;
		sum = 0;
		average = 0;
	}
} 

