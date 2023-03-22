#include<stdio.h>
#include"game.h"
//void M(int arr[], int H)        //有序数字排序
//{
//	int i = 0;
//	for (i = 0; i < H - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < H - 1 - i; j++)
//		{
//			int B = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = B;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int H = sizeof(arr) / sizeof(arr[0]);
//	M(arr, H);
//	for (i = 0; i < H; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()                            //数组名是首元素地址
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名)-数组名表示整个数组，计算的是整个数组的大小单位是字节
//	printf("%p\n", arr);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr);//&数组名，代表整个数组，取出的是整个数组的地址 
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	printf("%p\n", *arr);
//	return 0;
//}
void H()
{
	printf("******************************\n");
	printf("***     1. piay   0. exit   **\n");
	printf("******************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DispiayBoard(board, ROW, COL);
}
void test()
{
	int M = 0;
	do
	{
		H();
		printf("请选择：>");
		scanf("%d", &M);
		switch (M)
		{
		case 1:
		/*	printf("三子棋\n");*/
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (M);
}
int main()
{
	test();
	return 0;
}