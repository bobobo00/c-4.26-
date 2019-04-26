#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int Math(int menoy){
	int num = 0;
	while (menoy >0){
		num = menoy + num;
		menoy /= 2;
	}
	return num;
}

int main(){
	int menoy = 0;
	printf("Plese give me some menoy!\n");
	scanf("%d", &menoy);
	printf("Have %d water", Math(menoy));
	system("pause");
	return 0;
}