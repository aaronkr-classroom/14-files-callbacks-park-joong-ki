#include <stdio.h>

int main(void) {
	int data1;
	int data2;
	int data_list[5];
	FILE* p_file = fopen("jin.dat", "r");

	if (NULL != p_file) {
		fread(&data1, sizeof(int), 1, p_file);
		fread(&data2, sizeof(int), 1, p_file);
		fread(data_list, sizeof(int), 5, p_file);

		printf("file data %d(0x%04x)\n", data1, data1);
		printf("file data %d\n", data2);
		for (int i = 0; i < 5; i++) {
			printf("file data_list %d\n", data_list[i]);
		}
	}

	return 0;
}