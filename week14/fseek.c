#include <stdio.h>

int main(void) {
	int file_size = 0;
	FILE* p_file = fopen("jin.dat", "rb");
	if (NULL != p_file) {
		fseek(p_file, 0, SEEK_END); //파일 끝으로 이동
		file_size = ftell(p_file);
		printf("파일 크기: %d\n", file_size);
		fclose(p_file);
	}
	return 0;
}