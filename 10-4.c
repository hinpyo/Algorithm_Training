///*
//Step_10 ���Ʈ ����
//#1018 ü���� �ٽ�ĥ�ϱ�
//2019.10.01 Ǯ�̽���
//���� �������� 2�����迭 ���� ��ü�� �ȵǴµ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int** arr;
	int size_row; //size of row
	int size_col; //size of column
	char color;

	scanf("%d", &size_row);
	scanf("%d", &size_col);

	arr = (int**)malloc(sizeof(int) * size_row);
	for (int i = 0; i < size_row; i++) {
		arr[i] = (int*)malloc(sizeof(int) * size_col);
	}

	for (int i = 0; i < size_row; i++) {
		for (int j = 0; j < size_col; j++) {
			scanf("%c", &color);
			arr[i][j] = color;
		}
	}
	
	for (int i = 0; i < size_row; i++) {
		for (int j = 0; j < size_col; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	int wait;
	scanf("%d", &wait);

	for (int i = 0; i < size_row; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}
//*/