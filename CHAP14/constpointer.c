#include <stdio.h>

int main(void){
	char s[]="Barking dogs seldom bite.";
	char t[]="A bad workman blames his tools";
	const char *p=s;
	char* const q=s;
	
	p=t;
	q[3]='a';
	return 0;
}
