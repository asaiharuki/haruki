#include<stdio.h>
int main(void){
	int i;
	char moji;
	printf("文字を入力=");
	scanf_s("%c",&moji);
	if ((moji >= 'a') && (moji <= 'z')){
		printf("アルファベットの小文字!\n");
	}
	else if ((moji >= 'A') && (moji <= 'Z')){
		printf("アルファベットの大文字!\n");
	}
	else {
		printf("その他の文字!\n");
	}
	return 0;
}
