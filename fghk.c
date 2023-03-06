#include"SList.h"
void TestSList1()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);
}
void func(int** y)
{
	*y = (int*)malloc(sizeof(int));
}
int main()
{
	TestSList1();
	int *x = NULL;
	func(&x);
	free(x);
	return 0;
}