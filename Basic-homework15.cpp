#include <stdio.h>
int main(void)
{
	printf("請輸入現在的時間，判斷現在是上學時間或放學時間\n");
	int h,m;
	scanf("%d%d",&h,&m);
	if((h==7 && m>=30)||(h>=8 && h<=16)){
		printf("現在是上學時間\n");
	}
	else{
		printf("現在是放學時間\n");
	}
	return 0 ;

}
