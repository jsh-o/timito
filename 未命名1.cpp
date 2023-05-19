#include<stdio.h>
//int main()
//{
//	int x=3,y=0,z=0;
//	if(x=y+3) printf("****");
//	else printf("####");
//	return 0;
//}
//int main()
//{
//	int x=23;
//	do
//	{
//		printf("%d",--x);
//	}while(!x);
//	return 0;
//}
//int main()
//{
//	int i=1,s=3;
//	do
//	{
//		s+=i++;
//		if(s%7==0) continue;
//			else ++i;
//			printf("s=%d i=%d\n",s,i);
//	}while(s<15);
//	printf("%d",i);
//	return 0;
//}

//int main()
//{
//	int c;
//	while((c=getchar()!='\n'))
//	switch(c-'2')
//	{
//		case 0:
//		case 1:putchar(c+4);
//		case 2:putchar(c+4);break;
//		case 3:putchar(c+3);
//		default:putchar(c+2);break;
//	}
//	printf("\n");
//	return 0;
//}

//#define N 50	/*符号常量N，代表学生人数*/ 
//int main()
//{
//	float score[N];			/*定义score为一维数组*/ 
//	float aver=0;			/*aver用于存放平均成绩*/ 
//	int i,n=0;
//	for(i=0;i<N;i++)
//	{
//		scanf("%f",&score[i]);
//		aver+=score[i];
//	}
//	aver=aver/N;
//	for(i=0;i<N;i++){
//		if(score[i]>aver) n++;		/*统计成绩大于平均成绩人数*/
//	}
//	printf("平均成绩：%.4f,高于平均成绩人数：%d",aver,n); 
//	return 0;
//}

//int main()
//{
//	int i,a[6];
//	for(i=0;i<6;i++)
//		a[i]=i*2;
//	for(i=5;i>=0;i--)
//	printf("%3d",a[i]);
//	return 0;
//}

//int main()
//{
//	int b[10],i;
//	for(i=0;i<10;i++)
//	printf("%d ",b[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n,i,a[10],t;
//	printf("输入变量n的值:");
//	scanf("%d",&n);
//	printf("输入%d个整数:",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<n/2;i++)
//	{
//		t=a[i];
//		a[i]=a[n-1-i];
//		a[n-1-i]=t;
//	}
//	printf("逆序存放后:");
//	for(i=0;i<n;i++)
//	printf("%3d",a[i]);
//	printf("\n"); 
//	return 0;
//}


//int main()
//{
//	int f[21],i;						斐波拉契数列： 
//	f[1]=1;										1					n=1;
//	f[2]=1;								f(n)=	1					n=2;
//	for(i=3;i<21;i++)							f(n-1)+f(n-2)		n>=3;
//		f[i]=f[i-1]+f[i-2];
//	for(i=1;i<21;i++){
//		printf("%-8d",f[i]);
//		if(i%4==0){
//			printf("\n");
//		}
//}
//	return 0;
//}	


//选择排序法 
//int main()
//{
//	int i,j,t,a[10];
//	printf("输入10个数；\n");
//	for(j=0;j<10;j++)
//		scanf("%d",&a[j]);				//从键盘中输入10个数 
//	printf("\n");
//	for(i=0;i<9;i++)
//		for(j=i+1;j<10;j++)
//		if(a[i]>a[j])							//比较大小 
//		{ t=a[i]; a[i]=a[j]; a[j]=t ;}			//交换数字，小数在前，大数在后 
//		printf("排序之后；\n");
//		for(i=0;i<10;i++)
//		printf("%4d",a[i]);						//输出排序后的数 
//	return 0;
//}


//直接排序法 
//int main()
//{
//	int i,j,t,k,a[10];
//	printf("输入10个数：\n");
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);				//从键盘输入10个数 
//	for(i=0;i<9;i++){				//外循环9次 
//		k=i;
//		for(j=i+1;j<10;j++)			//内循环 
//		if(a[k]>a[j])				//如果前面的数大于后面的数 
//			k=j;					//记录较小数的下标 
//		if(i!=k){
//			t=a[k];a[k]=a[i];a[i]=t;		//交换位置 
//		}
//	}
//	for(i=0;i<10;i++)
//	 printf("%4d",a[i]);				//输出10排序后的数 
//	return 0;
//}

//int main()
//{
//	int i,j,k,t,a[6];
//	printf("输入6个数:\n");
//	for(i=0;i<6;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<6;i++){
//		k=i;
//		for(j=i+1;j<6;j++){
//			if(a[k]>a[j])
//			k=j;
//			if(k!=i){
//				t=a[k];a[k]=a[i];a[i]=t;
//			}
//		}
//	}
//	printf("输出排序后的数:\n");
//	for(i=0;i,i<6;i++)
//	printf("%4d",a[i]);
//	return 0;
//}

//冒泡排序法 
//#define n 6
//int main()
//{
//	int i,j,t,a[n];
//	printf("输入n个数:\n");
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//		if(a[j]>a[j+1]){
//			t=a[j];a[j]=a[j+1],a[j+1]=t;
//			
//		} 
//	}
//	}
//		printf("输出排序后的数:\n");
//		for(i=0;i<n;i++)
//		printf("%d ",&a[i]);
//	return 0;
//}



//插入法排序 
//int main()
//{
//	int a[6]={1,3,5,7,9},i,n,j;
//	printf("插入前的数组:\n");
//	for(i=0;i<5;i++)
//	printf("%3d",a[i]);
//	printf("请输入要插入的数:\n");
//	scanf("%d",&n);
//	printf("\n");
//	for(i=4;i>=0;i--)
//	if(a[i]<n)				//判断输入的数与数组最后一个数的大小 
//	{
//		a[i+1]=n;			//插入到数组a中，并结束循环 
//		break;
//	}
//		else
//			a[i+1]=a[i];	//比n大的数往后挪一位 
//	if(i<0)
//		a[0]=n;
//		printf("插入以后的数组:");
//		for(i=0;i<6;i++)
//		printf("%3d",a[i]);		//输出插序后的数组 
//	return 0;
//}



//查找数 
//int main()
//{
//	int i,j,n=0,a[10];
//	printf("输入10个数:\n");
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);									//输入10个数 
//	printf("输入要查找的数:\n");						
//	scanf("%d",&j);										//输入要查找的数 
//	for(i=0;i<10;i++){
//	if(a[i]==j){
//		printf("找到了,第%d个数\n",i+1);				//输出位置 
//		n++;
//	}
//	}
//	if(n==0)
//	printf("没有找到\n");								//没有找到数的情况 
//	return 0;
//}


//折半查找发 
//int main()
//{
//	int a[12]={3,5,8,9,14,17,19,21,23,26,28,32};						//定义并初始化数组a 
//	int x,i,top,bot,mid,find;
//	scanf("%d",&x);														//输入要查找的数 
//	top=0;																//确定首次查找的上界 
//	bot=11;																//确定首次查找的下界 
//	find=0;																//初始化标志 
//	do
//	{
//		mid=(top+bot)/2;												//确定查找范围的中间点 
//		if(x==a[mid]){													//若找到，则输出结果 
//			printf("found:%d,it is a[%d].\n",x,mid);					
//			find=1;														//将标志改为1，表示已找到 
//			break;														//退出循环 ，查找结束 
//		}
//		else if(x<a[mid])												
//			bot=mid-1;													//x小于中间数，修改查找范围的下界 
//		else
//		top=mid+1;														//x大于中间数，修改查找范围的上界 
//	}while(top<=bot);													//上界小于下界是继续查找 
//	if(!find)															//循环结束，若标志为0，说明未找到 
//	printf("%d not found.\n",x);
//	return 0;
//}




//二维数组
// int main()
// {
// 	int a[2][3];
// 	int i;
// 	for(i=0;i<2;i++){
// 		printf("输入a[%d][0],a[%d][1],a[%d][2]\n",i,i,i);
// 		//提示输入3个数据
//		 scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
//		 //输入3个数据 
//	 }
//	 for(i=0;i<2;i++){
//	 	printf("a[%d][0]=%d,addr=%x\n",i,a[i][0],&a[i][0]);
//	 	//输出每行第一个数据及地址
//		printf("a[%d][1]=%d,addr=%x\n",i,a[i][1],&a[i][1]);
//		//输出每行第二个数据及地址 
//		printf("a[%d][2]=%d,addr=%x\n",i,a[i][2],&a[i][2]);
//		//输出每行第三个数据及地址 
//	 }
// 	return 0;
// }


/*二维数组初始化														类型名  数组名 [行数][列数] ={初值表}
 	(1)按行给二维数组赋值												int a[2][3]={{1,2,3},{4,5,6}}; 
 	(2)可以将所有数据放入一个大括号内，按数组元素排序的顺序赋初值		int a[2][3]={1,2,3,4,5,6};
	(3)可以对二维数组的部分元素赋初值									int a[2][3]={{1},{2,3,4}}; 
	(4)在定义数组时，可以省略行数，不能省略列数 	 					int a[][3]={{1,2,3},{4,5,6}};
*/	
	

//小试牛刀 
//int main()
//{
//	int i,j,a[2][3]={{1,2,3},{4,5,6}};
//	for(i=0;i<2;i++){
//	for(j=0;j<3;j++)
//	printf("%3d",a[i][j]);	
//	printf("\n");
//}
//	return 0;
//}	


//找最大数 
//int main()
//{
//	int i,j,a[3][3]={29,36,14,36,57,44,94,65,11};
//	int max=a[0][0],row=0,colum=0;
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++)
//			printf("%3d",a[i][j]);
//			printf("\n");}
//	for(i=0;i<3;i++)
//		for(j=0;j<3;j++)
//			if(a[i][j]>max){
//				max=a[i][j];
//				row=i;
//				colum=j;
//			}
//	printf("max=%d,row=%d,colum=%d",max,row,colum);
//	return 0;
// } 


//数组对角线之和计算 
//int main()
//{
//	int i,j,sum=0,a[3][3]={{24,35,46},{90,89,51},{63,42,66}};
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++)
//		printf("%3d",a[i][j]);
//		printf("\n");
//	}
//	for(i=0;i<3;i++)
//	for(j=0;j<3;j++)
//		if(i==j||i+j==2)
//			sum=sum+a[i][j];
//	printf("对角线之和等于:%d",sum);
//	return 0;
//}



//杨辉三角杀 
//int main()
//{
//	int i,j,a[11][11];														//弃用0行0列 
//	for(i=1;i<11;i++)
//	{	a[i][1]=a[i][i]=1;									 				//规定第一列和对角线为一 
//		for(j=2;j<=i-1;j++)													//每一行从第二个元素开始 
//		a[i][j]=a[i-1][j-1]+a[i-1][j];										//计算每个元素的值 
//		
//	}
//		printf("\n");
//	for(i=1;i<11;i++){
//		for(j=1;j<=i;j++)
//		printf("%4d",a[i][j]);													//输出每个元素的值 
//		printf("\n");
//	}
//	return 0;
//}



//数组行列互换
//int main()
//{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},b[4][3],i,j;
//	for(i=0;i<3;i++){
//	for(j=0;j<4;j++)
//	printf("%-4d",a[i][j]);													//输出矩阵a 
//	printf("\n");
//}
//	for(i=0;i<4;i++)
//	for(j=0;j<3;j++)
//	b[i][j]=a[j][i];														//a矩阵转置成b矩阵 
//	printf("输出数组b:\n");
//	for(i=0;i<4;i++){
//	for(j=0;j<3;j++)
//	printf("%-4d",b[i][j]);													//输出b矩阵 
//	printf("\n");}
//	return 0;
// } 


//输入一个日期，判断该日期是当年第几天 
//int main()
//{
//	int year,month,day,i,leap;
//	int tab[2][13]={{0,31,28,31,30,31,30,31,30,31,30,31},{0,31,29,31,30,31,30,31,30,31,30,31}};			//数组初始化为每月的天数
//	printf("请输入年-月-日:");
//	scanf("%d-%d-%d",&year,&month,&day); 
//	leap=(year%4==0&&year%100!=0||year%400==0);															//leap等于1是闰年，leap=0是非闰年
//	for(i=1;i<month;i++)																				//计算天数
//		day=day+tab[leap][i];
//	printf("是当年第%d天\n",day); 
//	return 0;
//}



/*字符数组
			一维数组		char 数组名[常量表达式]
			二维数组		char 数组名[常量表达式1][常量表达式2] 
			
			
*/



//int main()
//{
//	int a[10];
//	a[9]=999;
//	printf("%d",a[9]);
//	return 0;
//}


//int main()
//{
//	int i,n=0;
//	char a[20];
//	printf("输入一系列字符:\n");
//	for(i=0;(a[i]=getchar())!='\n';i++)
//	if(a[i]>='a'&&a[i]<='z')
//		n++,a[i]=a[i]-32;
//		printf("n=%d\n",n);
//	for(i=0;a[i]!='\n';i++)
//	printf("%c",a[i]);
//	
//	return 0;
//}



//int main()
//{
//	char c;
//	c=getchar();
//	putchar(c);
//	return 0;
//}


//三种标准输入输出函数 
//一·scanf()与printf ()
/*int main()
{
	int i;
	char ccc[11];
	printf("输入10个字符:\n");
	for(i=0;i<10;i++)
	scanf("%c",&ccc[i]);
	ccc[i]='\n';
	for(i=0;ccc[i]!='\n';i++)
	printf("%c",ccc[i]);
	return 0;
}*/


//输入输出字符串时不加 &，因为数组名就是地址 
//int main()
//{
//	char a[10];
//	scanf("%s",a);
//	printf("%s",a);
//	return 0;
//}


//输入含有空格的字符串时，要用多个数组 
//int main()
//{
//	char str[10],a[10],b[10];
//	scanf("%s%s%s",str,a,b);
//	printf("%s %s %s",str,a,b);
//	return 0;
//}

//三·gets()与puts()函数可以输入输出一行的字符串，弥补了scanf()函数不能输入包含空格的字符串的不足 
//int main()
//{
//	char a[80];
//	gets(a);
//	puts(a);
//	return 0;
//}



//字符串处理函数

/*
1.字符串复制函数  strcpy()
	一般调用格式为；	strcpy(字符串1，字符串2) 
	功能：将字符串2复制到字符串1 
	注意；
			字符串2可以是字符数组名也可以是字符串常量，但字符串1必须是字符数组名。
			字符串1空间必须足够装下字符串2.
			复制时遇到字符串2中的‘\0’为止。 
*/
//#include<string.h>
//int main()
//{
//	char a[]="jdhdujd";
//	strcpy(a,"hello");
//	puts(a);
//	return 0;
//}


//strncpy函数部分复制
//strncpy(字符串1，字符串2，n)    n为要复制的前n个字符 
//展示
//#include<string.h>
//int main()
//{
//	char a[]="jishfaihfuafiu15156554";
//	char b[]="jahfhuva1255555";
//	strncpy(a,b,10);
//	puts(a);
//	return 0;
// } 


/*字符串连接函数strcat()
	格式；		strcat(字符串1，字符串2）
	功能；连接两个字符串
	注意；字符串2的首个字符覆盖字符串1的结束标志\0，系统在新的字符串结尾自动加一个字符串结束标志\0.
*/


//#include<string.h>
//int main() 
//{
//	char sa[80]="hfkjsfjs";
//	char sb[10]="1551511";
//	strcat(sa,sb);
//	puts(sa);
//	return 0;
//}


//字符串比较函数strcmp()
/* 	格式；strcmp(字符串1，字符串2）
	功能；比较两个字符串的大小。
	函数的返回值为一个整数。即：
	1.当字符串1<字符串2时，返回值<0
	2		   >         ,       >0
	3		   =         ,       =0
	
	字符串比较的规则:从两个字符串的首字符开始，依次比较对应字符的ASCII码，直到出现不同的字符或\0为止。
	如果所有的字符都相同，返回0;否则，以第一个不相同字符的比较结果为准，返回这两个字符的差。
*/


//#include<string.h>
//int main()
//{
//	char c1[]="1234",c2[]="12345";
//	printf("%d\n",strcmp(c1,c2));
//	printf("%d\n",strcmp("zhang","zhao"));
//	printf("%d\n",strcmp("zhou","zhang"));
//	return 0;
// } 

//
//#include<string.h>
//int main()
//{
//	char a[]="adf1213",b[]="adf1213";
//	if(strcmp(a,b)==0)
//	printf("yes\n");
//	return 0;
// } 


//求字符长度函数strlen()
/*	格式：		strlen(字符串）
	功能：计算字符串长度，不包括结束标志\0。
	注意strlen()函数与sizeof()函数的区别。strlen()函数的值是不包括\0，而sizeof()函数的值是包括\0的.
*/

//
//#include<string.h>
//int main()
//{
//	char ab[]="gugygyyfj3455";
//	printf("%d %d\n",strlen(ab),sizeof(ab));
//	return 0;
// } 


//大小写字母转化函数
/*大转小写    strlwr(字符串）
  小转大写 	  strupr(字符串）
*/


//#include<string.h>
//int main()
//{
//	char m[]="JsHsjhhHSSShhs113456";
//	printf("%s\n",strlwr(m));
//	printf("%s\n",strupr(m));
//	return 0;
// } 


//#include<string.h>
//int main()
//{
//	char bn[]="student";
//	int i,n=0;
//	for(i=0;bn[i]!='\0';i++)
//	n++;
//	printf("%s  n=%d\n",bn,n); 
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	int i,n,j=0;
//	char jsh[]="jdaghgsh";
//	puts(jsh);
//	printf("输入你要删除的字符:\n");
//	scanf("%c",&n);
//	for(i=0;jsh[i]!='\0';i++)
//		if(jsh[i]!=n)
//			jsh[j++]=jsh[i],								//当找到该字符后，i是大于j的 ， 将 jsh[i]赋值给jsh[i-1] 
//			printf("%s  j=%d i=%d\n",jsh,j,i);
//	jsh[j]='\0';
//	printf("%s\n",jsh);
//	return 0;
//}


//查找字符 
//#include<string.h>
//int main()
//{
//	int i,n=0;
//	char a[20],ch;
//	for(i=0;(a[i]=getchar())!='\n';i++)
//		;
//	//a[i]='\0';
//	printf("输入一个字符:\n");
//	ch=getchar();
//	for(i=0;a[i]!='\0';i++)
//		if(ch==a[i])
//			n++;
//	printf("n=%d\n",n);
//	puts(a);
//	return 0;
//}



//判断回文 
//#include<string.h>
//int main()
//{
//	char jsh[20];
//	int i,j,n;
//	printf("输入一个字符串:\n");
//	gets(jsh);
//	n=strlen(jsh);
//	for(i=0,j=n-1;i<j;i++,j--)
//		if(jsh[i]!=jsh[j])
//			break;
//	printf("i=%d j=%d\n",i,j); 
//	if(i>=j)
//		printf("是回文\n");
//	else 
//		printf("不是回文\n");
//	return 0;
//}


/*#include<string.h>
int main()
{
	char j1[80],j2[20];
	printf("输入第一个字符串:");
	gets(j1);
	printf("输入第二个字符串:");
	gets(j2);
	strcat(j1,j2);
	puts(j1);
	return 0;
}
*/



/*#include<stdio.h>
int main()
{
	int a,b,c,d,e,m;
	int max(int x,int y);
	a=10;b=12;c=9;d=13;e=5;
	m=max(a,max(b,max(c,max(d,e))));
	printf("最大值:%d\n",m);
	return 0;
}
int max(int x,int y)
{
	int z;
	if(x>y)
	z=x;
	else
		z=y;
	return z;
}
*/

/*#include<stdio.h>
void prstar(void)
{
		printf("********************\n");
}
int main()
{	prstar();
	printf("Welcome to C language world!\n");
	prstar();
	return 0;
}
*/


/*#include<math.h>
double fact(int n);
int main()
{
	int i=1;
	double x,item,s=0;
	printf("输入x的值:");
	scanf("%lf",&x);
	item=x;
	while(fabs(item)>=0.00001)
	{	s=s+item;
		i++;
		item=pow(x,i)/fact(i);
	}
	printf("和是:%lf\n",s);
	return 0;
}
double fact(int n)
{	int i;
	double jc=1;
	for(i=1;i<=n;i++)
		jc=jc*i;
	return jc; 
}
*/


/*int main()
{
	int a,b=1,i;
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			b=0;
			break;
		}
	} 
	if(b==1){
		printf("%d",a);
	}
	return 0;
}
*/

/*int jsh(int i){
	int ret=1;
	int k;
	for(k=2;k<i;k++){
		if(i%k==0){
			ret=0;break;
		}
	}
	return ret;
}
int main()
{
	int m,n;
	int i,sum=0,cnt=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(jsh(i)){
			sum+=i;
			cnt++;
		}
	}
	printf("sum=%d,cnt=%d",sum,cnt);
	return 0;
}
*/

/*int jsh(int a,int b){
	int s=0;
	int i;
	for(i=a;i<=b;i++){
		s+=i;
	}
	printf("s=%d\n",s);
}
int main()
{
	jsh(1,10);
	jsh(20,30);
	jsh(35,45);
	return 0;
}
*/



/*int max(int a,int b){
	int ret;
	if(a>b){
		ret=a;
	}	else{
		ret=b;
	}
	return ret;
}
int main()
{
	int a=5,b=66,c=99,d=34,e=87,f;
	f=max(a,max(b,max(c,max(d,e))));
	printf("max=%d",f);	
}*/

/*#include<windows.h>
int main()
{float x,y,a;
for(y=1.5;y>-1.5;y-=0.1)
{for(x=-1.5;x<1.5;x+=0.05)
{a=x*x+y*y-1;
putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
}
system("color 0c");
putchar('\n');
}
return 0;
}*/


/*void cheer(int i)
{
	printf("cheer %d\n",i);
}
int main()
{
	cheer(2.0);
	return 0;
}*/

/*void swap(int a,int b);
int main()
{
	int a=5;
	int b=6;
	swap(a,b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int x,int y){
	int t;
	t=x,x=y,y=t;
}*/

//void swap();
//int main()
//{
//	int a=5;
//	int b=6;
//	swap(a,b);
//	{
//		a=0;
//		printf("a=%d\n",a);
//	}
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//void swap(double a,double b)
//{
//	int swap;
//	int t=a;
//	printf("in swap,a=%f,b=%f\n",a,b);
//	a=b;
//	b=t;
//} 

//#define N 11
//int main()
//{
//	int a[N][N];
//	int i,j;
//	for(i=1;i<N;i++)
//	{
//			a[i][1]=a[i][i]=1;
//		for(j=2;j<i;j++)
//		a[i][j]=a[i-1][j]+a[i-1][j-1];
//	}
//	for(i=1;i<N;i++)
//	{
//		for(j=1;j<=i;j++)
//		printf("%4d",a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int b[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//	int a[4][3];
//	int i,j;
//	for(i=0;i<3;i++){
//		for(j=0;j<4;j++)
//		printf("%3d",b[i][j]);
//		printf("\n");
//	}
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			a[i][j]=b[j][i];
//		}
//	}
//	for(i=0;i<4;i++){
//		for(j=0;j<3;j++)
//		printf("%3d",a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a,b,c;
//	int gcd(int m,int n);
//	printf("输入两个整数:");
//	scanf("%d%d",&a,&b);
//	c=gcd(a,b);
//	printf("%d和%d的最大公约数是:%d\n",a,b,c);
//	return 0; 
//}
//int gcd(int m,int n)
//{
//	int r;
//	r=m%n;
//	while(r!=0){
//		m=n;
//		n=r;
//		r=m%n;
//	}
//	return n;
//}

//void swap(int x,int y)
//{
//	int t;
//	t=x;x=y;y=t;
//	printf("x=%d,y=%d,\n",x,y);
//}
//int main()
//{
//	int a,b;
//	scanf("%d,%d",&a,&b);
//	swap(a,b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}

//n个数排序后输出 
//void input(int a[],int n);
//void choose(int a[],int n);
//void print(int a[],int n);
//int main(void)
//{
//	int n,a[10];
//	printf("输入变量n的值:(n<=10)");
//	scanf("%d",&n);
//	printf("输入%d个数组元素:",n);
//	input(a,n);
//	choose(a,n);
//	printf("排序之后:",n);
//	print(a,n);
//	printf("\n");
//	return 0; 
//}
//void input(int a[],int n)
//{	int i;
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//}
//void choose(int a[],int n)
//{	int i,j,k,t;
//	for(i=0;i<n-1;i++)
//	{	k=i;
//		for(j=i+1;j<n;j++)
//		if(a[j]<a[k])k=j;
//		t=a[i],a[i]=a[k],a[k]=t;
//		
//	}
//}
//void print(int a[],int n)
//{	int i;
//	for(i=0;i<n;i++)
//	printf("%3d",a[i]); 
//}
//函数互相调用 
//void prtstars(int);
//void prtstarline();
//void prtadd(int x,int y)
//{	 prtstarline();
//	printf(" sum=%d\n",x+y);
//	prtstarline();
//}
//void prtstars(int n)
//{	int i;
//	for(i=0;i<n;i++)printf("*");
//}
//void prtstarline()
//{	prtstars(10);
//	printf("\n");
//}
//int main()
//{	int a=42,b=16;
//	prtadd(a,b);
//	return 0;
//}

//int fun2()
//{	int k=10;
//	printf("%d\n",k);
//	return (10*k);
//}
//int fun1()
//{	int b;
//	b=fun2();
//	printf("%d\n",b);
//	return (10*b);
//}
//int main()
//{	int a;
//	a=fun1();
//	printf("%d\n",a);
//	return 0;
//}

//递归函数:函数自己调用自己 
//long fac(int n)
//{	int k;
//	if(n==0||n==1)
//	k=1;
//	else
//	k=n*fac(n-1);
//	return k;
//}
//int main()
//{	int n;
//	scanf("%d",&n);
//	if(n<0)
//		printf("数据错误!\n");
//	else
//		printf("%d!=%d\n",n,fac(n));
//		return 0;
//}

//斐波拉契数列 
//int a(int n)
//{	int y;
//	if(n>=3)
//	y=a(n-1)+a(n-2);
//	else	y=1;
//	return y;
//}
//int main()
//{	int n;
//	scanf("%d",&n);
//	printf("f(%d)=%d\n",n,a(n));
//	return 0;
//}

//调换数字的顺序 
//int main()
//{
//	void(printn(int x));
//	int n;
//	scanf("%d",&n);
//	if(n<0)
//	{
//		n=-n;
//		putchar('-');
//	}
//	printn(n);
//	return 0;
//}
//void printn(int x)
//{
//	if(x>=0&&x<=9)
//	printf("%d",x);
//	else
//	{
//		printf("%d",x%10);
//		printn(x/10);
//	}
//}

//调换数字的顺序 
//int abc(int n)
//{	if(n>=0&&n<=9)
//	printf("%d",n);
//	else {
//		printf("%d",n%10);
//		abc(n/10);
//	}
//}
//int main()
//{	int n;
//	scanf("%d",&n);
//	if(n<0){
//		n=-n;
//		putchar('-');
//	}
//	else{
//		abc(n);
//	}
//	return 0;
//}

//int fun(int x)
//{	int p;
//	if(x==0||x==1)
//	return 2;
//	else
//	p=x-fun(x-2);
//	return p;
//}
//int main()
//{	int x;
//	scanf("%d",&x);
//	printf("%d",fun(x));
//	return 0;
//}

//判断是否为升序数 
//int sx(int n)
//{	int a,b,c;
//	a=n/100;
//	b=n/10%10;
//	c=n%10;
//	if(a<b&&b<c)
//	return 1;
//	else 
//	return 0;
//}
//int main()
//{
//	int a[10]={321,234,567,987,123,345,456,778,789};
//	int i;
//	for(i=0;i<10;i++)
//	{
//		if(sx(a[i]))
//		printf("%4d",a[i]);
//	}
//	return 0;
//}
//奇数右靠 
//void judge(int b[],int n)
//{
//	int i,j,k,temp;
//	for(i=0,j=n-1;i<j;)
//	{	if(b[i]%2!=0){
//		temp=b[i];
//		for(k=i;k<j;k++)
//		b[k]=b[k+1];
//		b[j]=temp;
//		j--;
//	}  else
//			i++;
//	}
// } 
// int main()
// {
// 	int i,a[10]={12,33,45,26,78,65,47,69,90,12};
// 	for(i=0;i<10;i++)
// 	printf("%3d",a[i]);
// 	judge(a,10);
// 	printf("\n");
// 	for(i=0;i<10;i++)
// 	printf("%3d",a[i]);
// 	return 0;
// }

//二维数组找最大值 
//int max_val(int a[][4]);
//int main()
//{	int a[3][4]={{1,7,8,10},{21,23,45,33},{24,53,29,42}};
//	printf("最大元素:%d\n",max_val(a));
//	return 0;
//} 
//int max_val(int a[][4])
//{
//	int max,i,j;
//	max=a[0][0];
//	for(i=0;i<3;i++)
//	for(j=0;j<4;j++)
//	if(max<a[i][j]){
//		max=a[i][j];
//	}
//	return max;
//}

//局部变量与全局变量
//局部变量: 
//int f(int x)
//{	if(x==4)
//	{	int x=6;
//		return x;
//	}
//	else
//	return x;
//}
//int main()
//{
//	int y;
//	y=f(4);
//	printf("%d %d\n",y,f(3));
//	return 0;
//}

//全局变量:
//void num()
//{
//	extern int x,y;							//外部变量声明 
//	int a=8,b=7;
//	x+=a-b;
//	y-=a+b;
//}
//int x,y;									//定义全局变量 
//int main()
//{
//	int a=7,b=8;
//	x=a+b;
//	y=a-b;
//	num();									//函数调用 
//	printf("%d,%d\n",x,y);
//	return 0;
//}


//尽量少使用全局变量 
//int i;
//void prtstr()
//{
//	for(i=0;i<10;i++)
//	printf("*");
//	printf("i=%d",i);
//}
//int main()
//{
//	for(i=0;i<5;i++)
//	prtstr();
//	printf("\n");
//	printf("i=%d",i); 
//	return 0;
//}

//int imax(int x,int y)
//{
//	int z;
//	if(x>y)	z=x;
//	else	z=y;
//	return (z);
//}
////int a=19,b=22;
//int main()
//{
//	extern int a,b;
//	printf("%d\n",imax(a,b));
//	return 0;
//}
//int a=19,b=22;

//int fun(int a,int b)
//{
//	int c;
//	printf("a=%d,b=%d\n",a,b);
//	if(a>b)
//		c=1;
//	else if(a==b)
//		c=0;
//	else
//		c=-1;
//		return c;
//}
//int main()
//{
//	int i=10,j;
//	j=fun(i,++i);
//	printf("%d\n",j);
//	return 0;
//}


//100~~1000范围内的回文素数 
//#include<math.h>
//int prime_pal(int n)
//{
//	int i,k=sqrt(n),m;
//	for(i=2;i<=k;i++)
//	if(n%i==0) return 0;
//	k=n;m=0;
//	while(k>0)
//	{
//		m=m*10+k%10;
//		k=k/10;
//	}
//	if(m==n) return 1;
//	return 0;
//}
//int main()
//{
//	int j,k=0;
//	for(j=100;j<=999;j++)
//	{
//		if(prime_pal(j))
//		{
//			printf("%d\t",j);
//			if(++k%5==0)printf("\n");
//		}
//	}
//	return 0;
//}

//#include<math.h>
//double mycos(double x)
//{
//	int n=1;
//	double sum=0,term=1.0;
//	while(fabs(term)>=1e-6)
//	{
//		sum+=term;
//		term*=-pow(x,2)/((2*n-1)*(2*n));
//		n=n+1;
//	}
//	return sum;
// } 
// int main()
// {
// 	double x;
// 	scanf("%lf",&x);
// 	printf("fx(%f)=%f,%f\n",x,mycos(x),cos(x));
// 	return 0;
// }

//#include<stdio.h>
//int main(void)
//{
//	int i=0;
//	int p;
//	p=(int)&i;
//	printf("0x%x\n",p);
//	printf("%p\n",&i);
//	printf("%lu\n",sizeof(int));
//	printf("%lu\n",sizeof(&i));
//	return 0;
//}
//

//int main()
//{
//	int i=0;
//	int p;
//	printf("%p\n",&i);
//	printf("%p\n",&p);
//	return 0;
//}

//int main()
//{
//	int a[10];
//	
//	printf("%p\n",&a);
//	printf("%p\n",a);
//	printf("%p\n",&a[0]);
//	printf("%p\n",&a[1]);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	int *pa,*pb;
//	pa=&a,pb=&b;
//	*pa=10;
//	*pb=100;
//	printf("a=%d,*pa=%d\n",a,*pa);
//	printf("b=%d,*pb=%d\n",b,*pb);
//	pb=pa;
//	printf("b=%d,*pb=%d\n",b,*pb); 
//	return 0;
//}

//int main()
//{
//	int a,b,*pa=&a,*pb=&b,*pc=NULL;
//	scanf("%d,%d",pa,pb);				/*将输入的内容存储到pa和pb指向的变量中*/ 
//	if(pa[0]<pb[0])						/*等价于if(a<b)或if(*pa<*pb)*/ 
//	{
//		pc=pa;							/*交换pa和pb的内容，此出并未交换指针所指对象的值*/ 
//		pa=pb;
//		pb=pc;
//	}
//	printf("最大值为:%d,最小值为:%d,和是:%d\n",pa[0],pb[0],pa[0]+pb[0]);
//	return 0;
//}

//void changeA(int *);						/*函数声明*/ 
//int main()
//{
//	int a=10,*pa=&a;						
//	printf("调用前:pa=%x,a=%d\n",pa,a);
//	changeA(pa);							/*函数调用*/ 
//	printf("调用后:pa=%x,a=%d\n",pa,a); 
//	return 0;
//}
//void changeA(int *p)						/*函数定义*/ 
//{
//	int b;
//	*p=*p+*p;								/*操作p所指向的变量*/ //*p和a的值均改变 
//	p=&b;									/*p指向b*/ 
//	printf("在函数中:p=%x\n",p);
//}

//#include<stdio.h>
//void swap(int *p1,int *p2)									/*函数的形参为指针类型*/
//{
//	int t;
//	printf("p1=%x,p2=%x\n",p1,p2);
//	t=*p1;													/*交换指针所指向变量的值*/ 
//	*p1=*p2;
//	*p2=t;
//	printf("在函数中:*p1=%d,*p2=%d\n",*p1,*p2);
//	printf("p1=%x,p2=%x\n",p1,p2);
//}
//int main()
//{
//	int a=10,b=20;
//	int *pa=&a,*pb=&b;										/*pa指向a,pb指向b*/ 
//	printf("pa=%x,pb=%x\n",pa,pb);
//	printf("调用函数之前:a=%d,b=%d\n",a,b);
//	swap(pa,pb);											/*调用函数,实参为指针变量*/ 
//	printf("调用函数之后:a=%d,b=%d\n",a,b);
//	return 0;
// } 

//int main()
//{
//	int *p;
//	int *max(int n);								/*声明指针函数*/ 
//	p=max(8);										/*max()函数返回最大值的地址*/ 
//	printf("最大值是:%d\n",*p);						/*输出最大值*/ 
//	return 0;
//}
//int *max(int n)										/*定义指针函数*/ 
//{
//	static int a[]={13,24,38,27,11,9,36,18};		/*定义并初始化数组*/ 
//	int i,m=0;
//	for(i=0;i<n;i++)								/*找出最大值*/ 
//	if(a[m]<a[i])
//	m=i;											/*m为最大值元素的下标*/ 
//	return &a[m];									/*输出最大值元素的地址*/ 
//}

//int max(int a,int b)							//定义求最大值函数 
//{
//	return a>b?a:b;
//}
//int min(int a,int b)							//定义求最小值函数 
//{
//	return a>b?b:a;
//}
//int ave(int a,int b)							//定义求平均值函数 
//{
//	return (a+b)/2;
//}
//int main()
//{
//	int a=10,b=15,c;
//	int (*pc)(int ,int);						//定义指向函数的指针pc,限定pc所致函数有两个整形函数 
//	int (*p[2])(int ,int);						//定义指向函数的数组p,不限定所致函数大的参数 
//	pc=ave;										//pc指向函数ave 
//	p[0]=max;									//p[0]指向函数max 
//	p[1]=min;									//p[1]指向函数min 
//	c=(*pc)(a,b);								//调用pc所指函数ave,并给出所需实参 
//	printf("平均值是:%d\n",c);
//	c=(*p[0])(a,b);								//调用p[0]所指函数max，并给出所需实参 
//	printf("最大值是:%d\n",c);
//	c=(*p[1])(a,b);								//调用p[1]所指函数min，并给出所需实参 
//	printf("最小值是:%d\n",c);
//	
//}

//指向函数的指针可以作为函数的参数，例如:	double root(double a,double b,double(*f)(double))


//指针和一维数组

//int a[5]={1,2,3,4,5},*p;
//p=a;
//等价于
//int a[5]={1,2,3,4,5},*p;
//p=&a[0]; 


//int main()
//{
//	int i,a[5]={1,2,3,4,5},*p=&a[0];
//	printf("\na[i] : ");
//	for(i=0;i<5;i++)							//常规下标法访问数组元素 
//	printf("%3d",a[i]);
//	printf("\n*(a+i) : ");
//	for(i=0;i<5;i++)							//数组名作为指针访问数组元素 
//	printf("%3d",*(a+i));
//	printf("\np[i] : ");
//	for(i=0;i<5;i++)							//指针变量下标法访问数组元素 
//	printf("%3d",p[i]);
//	printf("\n*(p+i): ");
//	for(i=0;i<5;i++)							//使用指针变量法访问数组元素 
//	printf("%3d",*(p+i));
//	return 0;
//}

//void f(int *p);
//void g(int k);
//int main(void)
//{
//	int i=6;
//	printf("&i=%p\n",&i);
//	f(&i);
//	g(i);
//	return 0;
// } 
// void f(int *p)
// {
// 	printf(" p=%p\n",p);
// 	printf("*p=%d\n",*p);
// 	*p=26;
// }
// void g(int k)
// {
// 	printf("k=%d",k);
// }

//void minmax(int *a,int len,int *min,int *max);
//
//int main(void)
//{
//	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,15,16,17,18,19,44};
//	int min,max;
//	printf("main sizeof(a)=%lu\n",sizeof(a));
//	printf("main a=%p\n",a);
//	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
//	printf("a[0]=%d\n",a[0]);
//	printf("min=%d,max=%d\n",min,max);
//	int *p=&min;
//	printf("*p=%d\n",*p);
//	printf("p[0]=%d\n",p[0]);
//	return 0;
//}
//
//void minmax(int *a,int len,int *min,int *max)
//{
//	int i;
//	printf("minmax sizeof(a)=%lu\n",sizeof(a));
//	printf("minmax a=%p\n",a);
//	a[0]=1000;
//	*min=*max=a[0];
//	for(i=1;i<len;i++){
//		if(a[i]<*min){
//			*min=a[i];
//		}
//		if(a[i]>*max){
//			*max=a[i];
//		}
//	}
//}

//int main()
//{
//	int i;
//	char c;
//	scanf("%d",&i);
//	c=i;
//	printf("c=%d\n",c);
//	printf("c='%c'\n",c);
//	return 0;
//}

//int main()
//{
//	int i;
//	char c;
//	scanf("%d%c",&i,&c);
//	printf("i=%d,c=%d,c='%c'\n",i,c,c);
//	return 0;
//}

//int main()
//{
//	char c='A';
//	c++;
//	printf("%c\n",c);
//	return 0;
//}

//int main()
//{
//	printf("123\b\n456\n");
//	return 0;
//}

//int main()
//{
//	int a[5]={1,2,3,4,5},*p=a;
//	printf("\n *p++: ");
//	for(;p<a+5;)
//	printf("%3d",*p++);
//	return 0;
//}

//int sum(int a[],int len);
//int main()
//{
//	int a[]={0,1,2,3,4,5,6,7,8,9,10};
//	int *const p=&a[0];
//	printf("sizeof(a)=%d,sizeof(p)=%d\n",sizeof(a),sizeof(p));
//	printf("main:p=%p\n",p);
//	printf("main:a=%p\n",a);
//	a[13]=10;
//	printf("main:a[13]=%d\n",a[13]);
//	p[13]=10;
//	printf("main:p[13]=%d\n",p[13]);
//	sum(a,11);
//	return 0;
//}
//int sum(int a[],int len)
//{
//	int sum=0;
//	int i=0;
//	int *const p=&a[0];
//	printf("p=%p\n",p);
//	printf("a=%p\n",a);
//	p[1]=10;
//	printf("p[1]=%d\n",p[1]);
//	a[1]=10;
//	printf("a[1]=%d\n",a[1]);
//	a[13]=10;
//	printf("a[13]=%d\n",a[13]);
//	p[13]=10;
//	printf("p[13]=%d\n",p[13]);
//	for(i=0;sum+=a[i];)
//	{
//		printf("sizeof(a)=%d\n",sizeof(a));
//	}
//	return sum;
//}

//int main()
//{
//	char ac[]={0,1,2,3,4,5,6,7,8,9};
//	char *p=ac;
//	printf("p =%p\n",p);
//	printf("p+1=%p\n",p+1);
//	int ai[]={0,1,2,3,4,5,6,7,8,9};
//	int *q=ai;
//	printf("q =%p\n",q);
//	printf("q+1=%p\n",q+1);
//	return 0;
//}


//int main()
//{
//	int a[]={1,3,2,4,7,5},i;
//	int *p=a;
//	printf("%3d\n",*(p+1));
//	for(i=0;i<6;i++)
//	printf("%3d",a[i]);
//	printf("\n");
//	for(i=0;i<6;i++)
//	printf("%3d",*p++);
//	return 0;
//}



//int main()
//{
//	int a[]={1,2,3,4,5},*p=&a[2];
//	printf("%d",*p);
//	printf("%d",p[0]);
//	printf("%d",p[-1]);
//	printf("%d",*(p-1));
//	printf("%d",p[1]);
//	printf("%d",*(p+1));
//	return 0;	
//}


//int main()
//{
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	printf("a[1][2]=%d\n",a[1][2]);
//	printf("*(a[1]+1)=%d\n",*(a[1]+2));
//	printf("*(*(a+1)+1)=%d\n",*(*(a+1)+2));					/*  a[1][2]等价于*(a[1]+2)等价于*(*(a+1)+2) 
//	return 0;												其中a[1]和*(a+1)表示第一行*/ 
//}

//int main()
//{
//	int a[]={1,2,3,4,5};
//	int *p=a;
//	printf("a[1]=%d\n",a[1]);
//	printf("*(p+1)=%d\n",*(p+1));
//	printf("*(a+1)=%d\n",*(a+1));
//	printf("p[1]=%d\n",p[1]);
//	return 0;
// } 


//#define row 3
//#define col 4
//int main()
//{
//	int a[row][col],*p,i,j;
//	p=&a[0][0];
//								//*p为指向二维数组元素的指针，可以替换为p=*a或p=a[0] 
//	for(i=0;i<row;i++)			//初始化二维数组元素 
//	for(j=0;j<col;j++)
//	a[i][j]=i*10+j;
//	for(i=0;i<row*col;i++)		//row*col计算数组的元素个数 
//	printf("%3d",*(p+i));		//一维数组的方式访问，*p(+i)等价于p[i] 
//	return 0;
//}


//#define row 3
//#define col 4
//int main()
//{
//	int a[row][col]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int (*p)[col]=a;				//定义行指针p,并指向数组a 
//	int i,j;
//	for(i=0;i<row;i++)
//	for(j=0;j<col;j++)
//	printf("%3d",*(*(p+i)+j));		//可以在此次替换访问a[i][j]方式 
//	
//	printf("\n");
//	return 0;
//}

//#define row 3
//#define col 4
//int main()
//{
//	int a[row][col]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int (*p)[col],i,j;
//	p=a;								//行指针指向二维数组的第一行 
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		printf("%3d",*(*p+j));			//等价于*(*(p+i)+j) ，访问p所指向的行中元素 
//		p=p+1;							//p指向下一行 
//	}
//	printf("\n");
//	return 0;
// } 


//average(int student[5][6])
//{
//	int i,j;
//	printf("学号        数学       英语       计算机       总分       平均分\n");
//	for(i=0;i<5;i++)
//	{
//		student[i][4]=student[i][1]+student[i][2]+student[i][3];			//求总分
//		
//		student[i][5]=student[i][4]/3; 										//求平均分 
//	}
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<6;j++)
//		printf("%-12d",student[i][j]);										//打印数组的元素 
//		printf("\n");
//	}
//	
//}
//search(int (*p1)[6],int n)										//查找成绩不合格学生函数 
//{
//	int i,j,flag;
//	printf("\n成绩有一门以上课程不及格的学生如下:\n");
//	for(i=0;i<n;i++)										//n=5,对五个学生3门课进行查找 
//	{
//		flag=0;												//用flag做标记，若成绩<60，flag=1 
//		for(j=1;j<4;j++)
//		if(*(*(p1+i)+j)<60)				
//		flag=1;											//*(*(p1+i)+j)等价于score[i][j] 
//		if(flag==1)
//		for(j=0;j<6;j++)									//用循环输出该行6个数 
//		printf("%-12d",*(*(p1+i)+j));						//*(*(p1+i)+j)等价于score[i][j] 
//		printf("\n");
//	}
//}
//int main()
//{
//	int score[5][6]={{201101,78,93,82},{201102,67,83,72},{201103,55,83,62},{201104,65,59,70},{201105,80,78,90}};
//	average(score);											//调用求平均数函数 
//	search(score,5);										//调用查找并输出有不及格学生成绩的函数 
//	return 0;
//}


//int main()
//{
//	char *str1="hello",*str2;
//	int i=0;
//	str2=str1;
//	puts(str2);
//	str1="world";
//	if(str1!=str2)
//	printf("str1<>str2\n");
//	while(*(str1+i))
//	printf("%c",str1[i++]);
//	return 0;
//}

//int main()
//{
//	char str[]="a1a2a3a4a";
//	int i=0;
//	for(i=0;i<9;i++)
//	if(*(str+i)=='a')
//	str[i]='b';
//	puts(str);
//	return 0;
//}


//指针-指针=两个指针之间有都少个字符
//int main()
//{
//	char *str1,*str2;
//	str1="abcdefghijklmnopqrstuvwxyz";
//	for(str2=str1;str2<str1+26;str2++)
//	{
//		printf("%c",*str2);
//		if((str2-str1+1)%10==0)						//str2-str1计算str2与str1之间有都少个字符 
//		printf("\n");
//	}
//	return 0;
// } 

//int main()
//{
//	char a[25]="c language programming!",*str=a;
//	str=a+2;
//	puts(str);
//	str=str+9;
//	puts(str);
//	printf("%c",*str);
//	return 0;
//}

//二级指针
//int main()
//{
//	int a,*pa=&a,**ppa=&pa;
//	**ppa=10;
//	printf("**ppa=%d,*pa=%d,a=%d\n",**ppa,*pa,a);
// } 


//int main()
//{
//	char *s[]={"VB","C","C++","Java","C#"};
//	char **q=s;
//	int k;
//	for(k=0;k<5;k++)
//	printf("%s\n",*(q+k));				//q等价于s,指针数组名本质上就是一个二级指针 
//	return 0;
//}


//main函数的参数
/*		main(int argc,char *argv[])
	其中,argc和argv为main()函数的形参,argc表示main()所接受的参数个数；字符指针数组*argv[]指向命令行中的程序名和参数字符串,
	main()函数的参数需要在命令行中给出 
	*/
	
//int main(int argc,char *argv[])
//{
//	int i;
//	printf("argument number is %d \n",argc);
//	for(i=0;i<argc;i++)
//	printf("%s\n",argv[i]);
//}
