#include <stdlib.h>
#include <stdio.h>

int main() {

	int a[4],temp;

	printf("請輸入5個數值：\n");
	for (int i = 0; i < 5; ++i) {
		printf("數值 %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("您輸入的數值是：\n");
	for (int i = 0; i < 5; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4-i; j++) {

			if (a[j] > a[j + 1]) {
				
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}
		}
	}

	printf("經過氣泡排序後：\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	system("pause");
}
