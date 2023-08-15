#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
char cumle[100];
printf("lutfen bir cumle giriniz:");
gets(cumle);

int i;
for(i=0;cumle[i];i++){
	if(cumle[i]>='a' && cumle[i]<='z'){
		printf("%c",cumle[i]-32);
	}
	else{
		printf("%c",cumle[i]);
	}
}
	return 0;
}
