#include <stdio.h>

int main(){
	char a,b,c;
	int age;

	printf("enter your initials then your age: ");
	scanf("%c %c %c %d", &a, &b, &c, &age);
	printf("my initials are %c%c%c and my age is %d.\n", a,b,c,age);
	return(0);
}

