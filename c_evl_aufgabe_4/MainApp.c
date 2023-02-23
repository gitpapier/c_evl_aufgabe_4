#include <stdio.h>
#include <stdlib.h>

void printer(char value[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d", value[i]);
	}
}

void readInput(char *value) {
	printf("Please enter the German short. Only three letters are accepted. Confirm with <ENTER>/<RETURN>.\n");
	fgets(value, 4, stdin);
	if (value[0] == '#') {
		exit(0);
	}

}

void resize(char* value) {
	for (int i = 0; value[i] != '\0'; i++) {
		switch (value[i]) {
			case '#': {
				if (i == 0) {
					exit(0);
				}
			}
			default: {
				if ('a' <= value[i] <= 'z') {
					value[i] = value[i] - 32;
				}
			}
		}
	}
}

int compareArrays(char* day, char*input) {
	for (int i = 0; i < 3; i++) {
		if (day[i] == input[i]) {
			continue;
		}
		else {
			return 0;
		}
	}
	return 1;

}

void checkInput(char* value) {
	char mon[4] = { 'M','O','N','\0' };
	char die[4] = { 'D','I','E','\0' };
	char mit[4] = { 'M','I','T','\0' };
	char don[4] = { 'D','O','N','\0' };
	char fre[4] = { 'F','R','E','\0' };
	char sam[4] = { 'S','A','M','\0' };
	char son[4] = { 'S','O','N','\0' };
	int switchIndex = 0;
	if (compareArrays(mon, value) == 1) {
		printf("\nMonday\n\n");
	}
	else if (compareArrays(die, value) == 1) {
		printf("\nTuesday\n\n");
	}
	else if (compareArrays(mit, value) == 1) {
		printf("\nWednesday\n\n");
	}
	else if (compareArrays(don, value) == 1) {
		printf("\nThursday\n\n");
	}
	else if (compareArrays(fre, value) == 1) {
		printf("\nFriday\n\n");
	}
	else if (compareArrays(sam, value) == 1) {
		printf("\nSaturday\n\n");
	}
	else if (compareArrays(son, value) == 1) {
		printf("\nSunday\n\n");
	}
	else {
		printf("\nno_day\n\n");
	}
	
}

int main() {
	char input[4];
	printf("AA");
	printf("log. input: %s\n", input);
	readInput(input);
	printer(input, 3);
	resize(input);
	printf("log. input: %s\n", input);
	checkInput(input);
	printf("log. input: %s\n",input);

	return 0;
}