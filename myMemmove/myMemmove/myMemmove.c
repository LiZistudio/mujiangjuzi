#define _CRT_SECURE_NO_WARNINGS 1

//	____                      ____
///	|	|                  / |    |
//|	|	|                  | |____|
//|	|	|                  |/____/
//|	|	|                   ______
//|	|	|                 / |     |  
//|	|	|______________   | |     |  
//|	|__________________|  | |     |
//|/___________________/  | |_____|
//                        | /_____/	
//

//ʱ�䣺2021��4��13��22:47 : 00;
//author : LiZi;
//context:memmove��ʵ��;

#include <stdio.h>
#include <assert.h>
#include <string.h>

void* myMemmove(void* dest, const void* scr, size_t count)
{
	void* ret = dest;
	assert(dest && scr);
	while (count--)
	{
		//��ǰ�����滻
		if (dest<scr)
		{
			*(char*)dest = *(char*)scr;
			((char*)dest)++;
			((char*)scr)++;
		}
		//�Ӻ���ǰ�滻
		else
		{
			*((char*)dest+count) = *((char*)scr+count);
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	myMemmove(arr, arr + 2, 20);
	////ͻȻ�뵽����ָ�����顣����дһ��
	//void (*p[3])(void* , const void* , size_t ) = {myMemmove,myMemmove,myMemmove};
	for ( i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
