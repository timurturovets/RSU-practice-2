#include <stdio.h>

void encrypt(char* file_path, int key) {
	int i;
	FILE* read_ptr = fopen(file_path, "r");

	char buf[256];
	int actual_len = 0;
	char c = fgetc(read_ptr);
	for (i = 0; i < 255 && feof(read_ptr) == 0; i++) {
		buf[i] = ((char)c) ^ key;
		c = fgetc(read_ptr);
		actual_len++;
	}
	buf[i] = '\0';

	fclose(read_ptr);

	FILE* write_ptr = fopen(file_path, "w");
	for (int i = 0; i < actual_len; i++) {
		fputc(buf[i], write_ptr);
	}

	fclose(write_ptr);

}

void task12() {
	char* file_path = "example.txt";

	int key;
	printf("Input crypting key: ");
	scanf_s("%d", &key);

	int choice, flag = 1;
	printf("\n1. Encrypt/decrypt your file\n2. Change key\n3. Exit\n\n");

	while(flag) {
		printf("Input action: ");
		scanf_s("%d", &choice);

		switch (choice) {
			case 1:
				encrypt(file_path, key);
				printf("Successful!\n");
				break;
			case 2:
				printf("Input new key: ");
				scanf_s("%d", &key);
				printf("Key changed successfully!\n");
				break;
			default:
				printf("Bye!");
				flag = 0;
				break;
		}
	}
}