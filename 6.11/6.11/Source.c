#include <stdlib.h>
#include <stdio.h>

int main() {

	int a[4],temp;

	printf("�п�J5�ӼƭȡG\n");
	for (int i = 0; i < 5; ++i) {
		printf("�ƭ� %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("�z��J���ƭȬO�G\n");
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

	printf("�g�L��w�Ƨǫ�G\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	system("pause");
}
