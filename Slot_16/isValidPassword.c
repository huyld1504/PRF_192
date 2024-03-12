#include<stdio.h> 
#include<string.h>
#include<ctype.h>


int checkUpper (char c) {
	if (c <= 'Z' && c >= 'A') return 1;
	else return 0;
}

int checkLower (char c) {
	if (c <= 'z' && c >= 'a') return 1;
	else return 0;
}

int checkNumber (char c) {
	if (c <= '9' && c >= '0') return 1;
	else return 0;
}


int isValidPassword (char s[]) {
	int number = 0, upper = 0, lower = 0, symbol = 0, length = strlen(s);
	
	int i;
	for (i = 0; i <= length; i++) {
		if (checkUpper(s[i])) upper++;
		else if (checkLower(s[i])) lower++;
		else if (checkNumber(s[i])) number++;
		else symbol++;
	}
	
	if (number > 0 && lower > 0 && upper > 0 && symbol > 0 && length >= 8) return 1;
	else return 0;
} 

int main () {
	char s[100];
	gets(s);
	
	int result = isValidPassword(s);
	
	if (result == 1) printf("Valid Password !!");
	else printf("Invalid Password !!");

	
	return 0;
}
