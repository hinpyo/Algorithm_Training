/*
//Step_10 ���Ʈ ����
//#2798 ����
//2019.10.01 Ǯ�̽���/����
//ū��+ū��+������, ū��+������+������ �ִ밡 �Ǵ� ���� ��ġ�� �ڵ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr;
	int size;
	int max;
	int sum;

	scanf("%d", &size);
	scanf("%d", &max);

	arr = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		int card;
		scanf("%d", &card);
		arr[i] = card;
	}

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = (size-1); i >= 2  ; i--) {
		sum = arr[i] + arr[i - 1] + arr[i - 2];
		if (sum <= max) {
			printf("%d", sum);
			break;
		}
	}


	//int wait;
	//scanf("%d", &wait);

	free(arr);
	return 0;
}
//*/