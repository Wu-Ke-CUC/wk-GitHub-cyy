//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int* b = (char*)&a;
//	if (0 == *b)
//	{
//		printf("大端\n");
//	}
//	else if (1 == *b)
//	{
//		printf("小端\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//		printf("love");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int temp1 = a;
//	int temp2 = a;
//	int count = 1;
//	while (temp1 > 9)
//	{
//		temp1 /= 10;
//		count++;
//	}
//	int d = pow(10, count - 1);
//	for (int i = 0; i < count; i++)
//	{
//		int b = a / d % 10;
//		if (b % 2 == 1)
//		{
//			printf("%d", b);
//		}
//		a %= d;
//		d /= 10;
//	}
//    d = pow(10, count - 1);
//	for (int i = 0; i < count; i++)
//	{
//		int b = temp2 / d % 10;
//		if (b % 2 == 0)
//		{
//			printf("%d", b);
//		}
//		temp2 %= d;
//		d /= 10;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int temp1[10] = { 0 };
//	int temp2[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		scanf_s("%d", arr + i);
//	}
//	int j = 0;
//	int l = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2)
//		{
//			temp1[j] = arr[i];
//			j++;
//		}
//		else
//		{
//			temp2[l] = arr[i];
//			l++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//		printf("%d ", temp1[i]);
//	for (int i = 0; i < l; i++)
//		printf("%d ", temp2[i]);
//	return 0;
//}
//void reverse(int* arr, int sz)
//{
//	if (0 == sz)
//		return;
//	int n = 0, m = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (*(arr + left) % 2 == 1)
//	{
//		left++;
//		n++;
//	}
//	while (*(arr + right) % 2 == 0)
//	{
//		right--;
//		m++;
//	}
//	if (left < right)
//	{
//		int temp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = temp;
//	}
//	reverse(arr + n, sz - n - m);
//}
//#include<stdio.h>
//int main()
//{
//	int arr[11] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//		scanf_s("%d", arr + i);
//	/*int left = 0;
//	int right = 9;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)
//			left++;
//		while (arr[right] % 2 == 0)
//			right--;
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}*/
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	printf("%d ", arr[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<time.h>
////int main()
////{
////	int* p;
////	p = (int*)malloc(sizeof(int));
////	assert(p);
////	*p = 10;
////	printf("%d", *p);
////	free(p);
////	return 0;
////}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int* p;
//	p = calloc(10, sizeof(int));
//	assert(p);
//	int i = 0;
//	while (i < 10)
//	{
//		p[i++] = rand() % 10 + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* s = "abcdef";
//	s += 2;
//	printf("%s", s);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2= "abcdef";
//	printf("%p\n", p1);
//	printf("%p", p2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int* parr[] = { arr1,arr2 };
//	printf("%d\n", parr[0][2]);
//	printf("%d\n", *(parr[0] + 2));
//	printf("%d", *(*(parr + 1) + 2));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%zu\n", sizeof(arr + 0));
//	printf("%zu", sizeof(arr));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int (*p)[3] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", arr);
//	printf("%p\n", p + 1);
//	printf("%p\n", arr + 1);
//	return 0;
//}

//void print1(int (*p)[3], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	print1(arr, 2, 3);
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void meun()
//{
//	printf("*************\n");
//	printf("*1,add 2,sub*\n");
//	printf("*3,mul 4,div*\n");
//	printf("*0,exit *****\n");
//	printf("*************\n");
//
//}
//#include<stdio.h>
////#include<windows.h>
//int main()
//{
//	int(*pf[5])(int, int) = { 0,add,sub,mul,div };
//	int a = 0, b = 0;
//	int input = 0;
//	do
//	{
//		meun();
//		printf("运算操作为：");
//		scanf_s("%d", &input);
//		printf("a,b分别为：");
//		scanf_s("%d%d", &a, &b);
//		int ret = (*pf[input])(a, b);
//		printf("结果为：%d\n", ret);
//		Sleep(2000);
//		system("cls");
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//void qsort(void* base,size_t num,size_t width,int(*cmp)(const void* e1,const void* e2));
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//typedef struct student
//{
//	char name[7];
//	int age;
//}STU;
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((STU*)e1)->name, ((STU*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((STU*)e1)->age - ((STU*)e2)->age;
//}
//int main()
//{
//	STD sum[3] = { {"b",15},{"a",20},{"c",10} };
//	int sz = sizeof(sum) / sizeof(sum[0]);
//
//	qsort(sum, sz, sizeof(sum[0]), cmp_stu_by_name);
//	//qsort(sum, sz, sizeof(sum[0]), cmp_stu_by_age);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s\t%d\n", sum[i].name, sum[i].age);
//	}
//	return 0;
//}

//#include<stdio.h>
//typedef struct student
//{
//	char name[10];
//	int age;
//}STU;
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((STU*)e1)->name, ((STU*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((STU*)e1)->age - ((STU*)e2)->age;
//}
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//void swap(char* buff1, char* buff2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = temp;
//		buff1++;
//		buff2++;
//	}
//}
//
//void bubble_swap(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flat = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flat = 0;
//			}
//		}
//		if (1 == flat)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	char arr[10] = "gfdsa";
//	STU stu[3] = { {"zhang",15},{"li",10},{"wang",20} };
//	
//	int sz1 = strlen(arr);
//	int sz2 = sizeof(stu) / sizeof(stu[0]);
//
//	bubble_swap(arr, sz1, sizeof(arr[0]), cmp_char);
//	//bubble_swap(stu, sz2, sizeof(stu[0]), cmp_stu_by_name);
//	bubble_swap(stu, sz2, sizeof(stu[0]), cmp_stu_by_age);
//
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz2; i++)
//	{
//		printf("%s\t%d\n", stu[i].name, stu[i].age);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* c[] = { "wuuu","keee","daaa","wang" };
//	char** cp[] = {c + 3,c + 2,c + 1,c};
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//typedef unsigned int uint;
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* temp = arr1;
//	while (*arr1++ = *arr2++);
//	return temp;
//}
//char* my_strcat(char* arr1,const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* temp = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++);
//	return temp;
//}
//int my_strcmp(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if ('\0' == *arr1)
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr1 > *arr2 ? 1: -1;
//	/*if (*arr1 > *arr2)
//		return 1;
//	else if (*arr1 == *arr2)
//	{
//		if ('\0' == *arr1)
//			return 0;
//		else
//			return my_strcmp(arr1+1, arr2+1);
//	}
//	else
//		return -1;*/
//}
//char* my_strncpy(char* arr1, const char* arr2, uint n)
//{
//	assert(arr1 && arr2);
//	char* temp = arr1;
//	for (uint i = 0; i < n; i++)
//	{
//		*arr1++ = *arr2++;
//	}
//	return temp;
//}
//char* my_strncat(char* arr1, const char* arr2, uint n)
//{
//	assert(arr1 && arr2);
//	char* temp = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	for (uint i = 0; i < n; i++)
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = '\0';
//	return temp;
//}
//int my_strncmp(char* arr1, const char* arr2, int n)
//{
//	assert(arr1 && arr2);
//	for (int i = 0; i < n; i++)
//	{
//		if (*arr1 > *arr2)
//			return 1;
//		else if (*arr1 == *arr2)
//		{
//			if (0 == n)
//				return 0;
//			return my_strncmp(++arr1, ++arr2, --n);
//		}
//		else
//			return -1;
//	}
//}
//char* my_strstr(char* arr1,const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* p = arr1;
//	while (*p)
//	{
//		char* s1 = p;
//		char* s2 = arr2;
//		while (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//			if ('\0' == *s2)
//				return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//char* my_strtok(char* str, const char* delim) 
//{
//	static char* next;
//	if (str) 
//	{
//		next = str;
//	}
//	if (!next) 
//	{
//		return NULL;
//	}
//	char* start = next;
//	while (*next) 
//	{
//		const char* d = delim;
//		while (*d) 
//		{
//			if (*next == *d) 
//			{
//				*next++ = '\0';
//				return start;
//			}
//			d++;
//		}
//		next++;
//	}
//	next = NULL;
//	return start;
//}
//int main()
//{
//	/*char arr1[20] = "abcbcdef";
//	char arr2[] = "bcd";*/
//	//my_strcpy(arr1, arr2);
//	//my_strcat(arr1, arr2);
//	//int ret = my_strcmp(arr1, arr2);
//	//printf("%s\n", arr1);
//	//printf("%d\n", ret);
//	//my_strncpy(arr1, arr2, 3);
//	//my_strncat(arr1, arr2, 3);
//	//printf("%s\n", arr1);
//	/*int ret = my_strncmp(arr1, arr2, 3);
//	printf("%d\n", ret);*/
//	/*char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("false!\n");
//	else
//		printf("%s\n", ret);*/
//	//char email[] = "0704wuke@outlook.com.net";
//	//char cut[] = "@.";
//	///*char* ret = my_strtok(email, cut);
//	//printf("%s\n", ret);*/
//	//char* ret = NULL;
//	//for (ret = my_strtok(email, cut); ret != NULL; ret = my_strtok(NULL, cut))
//	//{
//	//	printf("%s\n", ret);
//	//}
//	int a = isalpha('0');
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void* my_memcpy(void* destination, const void* resoure, size_t num)
//{
//	assert(destination && resoure);
//	while(num--)
//	{
//		*((char*)destination)++ = *((char*)resoure)++;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	memmove(arr1 + 1, arr1, 20);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//#pragma pack(1)
//#include<stdio.h>
//struct s1
//{
//	char c1;
//	int num;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int num;
//};
//int main()
//{
//	printf("%zu\n", sizeof(struct s1));
//	printf("%zu\n", sizeof(struct s2));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void GetMemory(char** p, size_t num)
//{
//	*p = (char*)malloc(num);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str, 10);
//	strcpy(str, "hello");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//}
//void Test()
//{
//	char* str = (char*)malloc(10);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf("%s\n", str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//#include<stdio.h>
//int PopRepeatNum(int* arr, int n)
//{
//	if (0 == n)
//	{
//		return 0;
//	}
//	int sum = 1;
//	int i = 0;
//	int j = 1;
//	while (j < n)
//	{
//		if (arr[i] == arr[j])
//		{
//			j++;
//		}
//		else
//		{
//			arr[sum] = arr[j];
//			sum++;
//			i = j;
//			j++;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int arr[] = { 0,0,0,1,1,2,2,2,2,3,4,4,5,6,6 };
//	int n = sizeof(arr) / sizeof(int);
//	int sum = PopRepeatNum(arr, n);
//	for (int i = 0; i < sum; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int* mergeArrays(int* arr1, int sz1, int* arr2, int sz2) 
{
	int sum = sz1 + sz2;
    int* mergedArray = (int*)malloc(sum* sizeof(int));
    if (mergedArray == NULL) 
    {
        printf("内存分配失败\n");
        exit(1);
    }
    while (sz1 > 0 && sz2 > 0)
    {
        if (arr1[sz1 - 1] > arr2[sz2 - 1])
        {
			mergedArray[sum - 1] = arr1[sz1 - 1];
			sz1--;
		}
        else
        {
			mergedArray[sum - 1] = arr2[sz2 - 1];
			sz2--;
        }
        sum--;
    }
    while (sz1 > 0)
    {
		mergedArray[sum - 1] = arr1[sz1 - 1];
		sz1--;
		sum--;
    }
    while (sz2 > 0)
    {
		mergedArray[sum - 1] = arr2[sz2 - 1];
		sz2--;
        sum--;
    }
    return mergedArray;
}
int main() 
{
    int arr1[] = { 1, 3, 5, 7, 9 };
    int arr2[] = { 1, 4, 6, 8, 10, 12 };
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    int* mergedArray = mergeArrays(arr1, sz1, arr2, sz2);
    for (int i = 0; i < sz1 + sz2; i++) 
    {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    free(mergedArray);
	mergedArray = NULL;
    return 0;
}