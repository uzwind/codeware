#include <stdio.h>

/*
	数组名代表着整个数组的地址，如果一维数组的名字作为函数实参，传递的是整个数组，
	即形参数组和实参数组完全等同，是存放在同一存储空间的同一个数组。
	这样形参数组修改时，实参数组也同时被修改了。形参数组的元素个数可以省略。
*/
void test(int a[])
{
	a[0] = 9;
}

int main(int argc, char const *argv[])
{
	int a[10]; //声明整型数组a  有10个元素

	char amessage[] = "a message";//定义一个数组
	char *msg = "a message";	  //定义一个指针

	printf("%s\n", amessage);
	printf("%c\n", *msg);

	int b[3] = {10};
	test(b);
	printf("%d\n", b[0]);

	/*
		C语言把二维数组当作是一维数组的集合，即二维数组是一个特殊的一维数组：它的元素是一维数组。
		例如int a[2][3]可以看作由一维数组a[0]和一维数组a[1]组成，这两个一维数组都包含了3个int类型的元素

		二维数组的存放顺序是按行存放的，先存放第一行的元素，再存放第2行的元素。
		例如int a[2][3]的存放顺序是：a[0][0] → a[0][1] → a[0][2] → a[1][0] → a[1][1] → a[1][2]
	*/
	int c[2][3] = {{2,2,2}, {3,3,3}};//初始化二维数组 按行进行初始化
	int d[2][3] = {1,2,3,4,5,6};	 //按存储顺序进行初始化(先存放第1行，再存放第2行)

	printf("%d\n", c[0][1]);
	printf("%d\n", d[1][1]);

	return 0;
}