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

//#define N 50	/*���ų���N������ѧ������*/ 
//int main()
//{
//	float score[N];			/*����scoreΪһά����*/ 
//	float aver=0;			/*aver���ڴ��ƽ���ɼ�*/ 
//	int i,n=0;
//	for(i=0;i<N;i++)
//	{
//		scanf("%f",&score[i]);
//		aver+=score[i];
//	}
//	aver=aver/N;
//	for(i=0;i<N;i++){
//		if(score[i]>aver) n++;		/*ͳ�Ƴɼ�����ƽ���ɼ�����*/
//	}
//	printf("ƽ���ɼ���%.4f,����ƽ���ɼ�������%d",aver,n); 
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
//	printf("�������n��ֵ:");
//	scanf("%d",&n);
//	printf("����%d������:",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	for(i=0;i<n/2;i++)
//	{
//		t=a[i];
//		a[i]=a[n-1-i];
//		a[n-1-i]=t;
//	}
//	printf("�����ź�:");
//	for(i=0;i<n;i++)
//	printf("%3d",a[i]);
//	printf("\n"); 
//	return 0;
//}


//int main()
//{
//	int f[21],i;						쳲��������У� 
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


//ѡ������ 
//int main()
//{
//	int i,j,t,a[10];
//	printf("����10������\n");
//	for(j=0;j<10;j++)
//		scanf("%d",&a[j]);				//�Ӽ���������10���� 
//	printf("\n");
//	for(i=0;i<9;i++)
//		for(j=i+1;j<10;j++)
//		if(a[i]>a[j])							//�Ƚϴ�С 
//		{ t=a[i]; a[i]=a[j]; a[j]=t ;}			//�������֣�С����ǰ�������ں� 
//		printf("����֮��\n");
//		for(i=0;i<10;i++)
//		printf("%4d",a[i]);						//����������� 
//	return 0;
//}


//ֱ������ 
//int main()
//{
//	int i,j,t,k,a[10];
//	printf("����10������\n");
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);				//�Ӽ�������10���� 
//	for(i=0;i<9;i++){				//��ѭ��9�� 
//		k=i;
//		for(j=i+1;j<10;j++)			//��ѭ�� 
//		if(a[k]>a[j])				//���ǰ��������ں������ 
//			k=j;					//��¼��С�����±� 
//		if(i!=k){
//			t=a[k];a[k]=a[i];a[i]=t;		//����λ�� 
//		}
//	}
//	for(i=0;i<10;i++)
//	 printf("%4d",a[i]);				//���10�������� 
//	return 0;
//}

//int main()
//{
//	int i,j,k,t,a[6];
//	printf("����6����:\n");
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
//	printf("�����������:\n");
//	for(i=0;i,i<6;i++)
//	printf("%4d",a[i]);
//	return 0;
//}

//ð������ 
//#define n 6
//int main()
//{
//	int i,j,t,a[n];
//	printf("����n����:\n");
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
//		printf("�����������:\n");
//		for(i=0;i<n;i++)
//		printf("%d ",&a[i]);
//	return 0;
//}



//���뷨���� 
//int main()
//{
//	int a[6]={1,3,5,7,9},i,n,j;
//	printf("����ǰ������:\n");
//	for(i=0;i<5;i++)
//	printf("%3d",a[i]);
//	printf("������Ҫ�������:\n");
//	scanf("%d",&n);
//	printf("\n");
//	for(i=4;i>=0;i--)
//	if(a[i]<n)				//�ж�����������������һ�����Ĵ�С 
//	{
//		a[i+1]=n;			//���뵽����a�У�������ѭ�� 
//		break;
//	}
//		else
//			a[i+1]=a[i];	//��n���������Ųһλ 
//	if(i<0)
//		a[0]=n;
//		printf("�����Ժ������:");
//		for(i=0;i<6;i++)
//		printf("%3d",a[i]);		//������������� 
//	return 0;
//}



//������ 
//int main()
//{
//	int i,j,n=0,a[10];
//	printf("����10����:\n");
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);									//����10���� 
//	printf("����Ҫ���ҵ���:\n");						
//	scanf("%d",&j);										//����Ҫ���ҵ��� 
//	for(i=0;i<10;i++){
//	if(a[i]==j){
//		printf("�ҵ���,��%d����\n",i+1);				//���λ�� 
//		n++;
//	}
//	}
//	if(n==0)
//	printf("û���ҵ�\n");								//û���ҵ�������� 
//	return 0;
//}


//�۰���ҷ� 
//int main()
//{
//	int a[12]={3,5,8,9,14,17,19,21,23,26,28,32};						//���岢��ʼ������a 
//	int x,i,top,bot,mid,find;
//	scanf("%d",&x);														//����Ҫ���ҵ��� 
//	top=0;																//ȷ���״β��ҵ��Ͻ� 
//	bot=11;																//ȷ���״β��ҵ��½� 
//	find=0;																//��ʼ����־ 
//	do
//	{
//		mid=(top+bot)/2;												//ȷ�����ҷ�Χ���м�� 
//		if(x==a[mid]){													//���ҵ����������� 
//			printf("found:%d,it is a[%d].\n",x,mid);					
//			find=1;														//����־��Ϊ1����ʾ���ҵ� 
//			break;														//�˳�ѭ�� �����ҽ��� 
//		}
//		else if(x<a[mid])												
//			bot=mid-1;													//xС���м������޸Ĳ��ҷ�Χ���½� 
//		else
//		top=mid+1;														//x�����м������޸Ĳ��ҷ�Χ���Ͻ� 
//	}while(top<=bot);													//�Ͻ�С���½��Ǽ������� 
//	if(!find)															//ѭ������������־Ϊ0��˵��δ�ҵ� 
//	printf("%d not found.\n",x);
//	return 0;
//}




//��ά����
// int main()
// {
// 	int a[2][3];
// 	int i;
// 	for(i=0;i<2;i++){
// 		printf("����a[%d][0],a[%d][1],a[%d][2]\n",i,i,i);
// 		//��ʾ����3������
//		 scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
//		 //����3������ 
//	 }
//	 for(i=0;i<2;i++){
//	 	printf("a[%d][0]=%d,addr=%x\n",i,a[i][0],&a[i][0]);
//	 	//���ÿ�е�һ�����ݼ���ַ
//		printf("a[%d][1]=%d,addr=%x\n",i,a[i][1],&a[i][1]);
//		//���ÿ�еڶ������ݼ���ַ 
//		printf("a[%d][2]=%d,addr=%x\n",i,a[i][2],&a[i][2]);
//		//���ÿ�е��������ݼ���ַ 
//	 }
// 	return 0;
// }


/*��ά�����ʼ��														������  ������ [����][����] ={��ֵ��}
 	(1)���и���ά���鸳ֵ												int a[2][3]={{1,2,3},{4,5,6}}; 
 	(2)���Խ��������ݷ���һ���������ڣ�������Ԫ�������˳�򸳳�ֵ		int a[2][3]={1,2,3,4,5,6};
	(3)���ԶԶ�ά����Ĳ���Ԫ�ظ���ֵ									int a[2][3]={{1},{2,3,4}}; 
	(4)�ڶ�������ʱ������ʡ������������ʡ������ 	 					int a[][3]={{1,2,3},{4,5,6}};
*/	
	

//С��ţ�� 
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


//������� 
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


//����Խ���֮�ͼ��� 
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
//	printf("�Խ���֮�͵���:%d",sum);
//	return 0;
//}



//�������ɱ 
//int main()
//{
//	int i,j,a[11][11];														//����0��0�� 
//	for(i=1;i<11;i++)
//	{	a[i][1]=a[i][i]=1;									 				//�涨��һ�кͶԽ���Ϊһ 
//		for(j=2;j<=i-1;j++)													//ÿһ�дӵڶ���Ԫ�ؿ�ʼ 
//		a[i][j]=a[i-1][j-1]+a[i-1][j];										//����ÿ��Ԫ�ص�ֵ 
//		
//	}
//		printf("\n");
//	for(i=1;i<11;i++){
//		for(j=1;j<=i;j++)
//		printf("%4d",a[i][j]);													//���ÿ��Ԫ�ص�ֵ 
//		printf("\n");
//	}
//	return 0;
//}



//�������л���
//int main()
//{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},b[4][3],i,j;
//	for(i=0;i<3;i++){
//	for(j=0;j<4;j++)
//	printf("%-4d",a[i][j]);													//�������a 
//	printf("\n");
//}
//	for(i=0;i<4;i++)
//	for(j=0;j<3;j++)
//	b[i][j]=a[j][i];														//a����ת�ó�b���� 
//	printf("�������b:\n");
//	for(i=0;i<4;i++){
//	for(j=0;j<3;j++)
//	printf("%-4d",b[i][j]);													//���b���� 
//	printf("\n");}
//	return 0;
// } 


//����һ�����ڣ��жϸ������ǵ���ڼ��� 
//int main()
//{
//	int year,month,day,i,leap;
//	int tab[2][13]={{0,31,28,31,30,31,30,31,30,31,30,31},{0,31,29,31,30,31,30,31,30,31,30,31}};			//�����ʼ��Ϊÿ�µ�����
//	printf("��������-��-��:");
//	scanf("%d-%d-%d",&year,&month,&day); 
//	leap=(year%4==0&&year%100!=0||year%400==0);															//leap����1�����꣬leap=0�Ƿ�����
//	for(i=1;i<month;i++)																				//��������
//		day=day+tab[leap][i];
//	printf("�ǵ����%d��\n",day); 
//	return 0;
//}



/*�ַ�����
			һά����		char ������[�������ʽ]
			��ά����		char ������[�������ʽ1][�������ʽ2] 
			
			
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
//	printf("����һϵ���ַ�:\n");
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


//���ֱ�׼����������� 
//һ��scanf()��printf ()
/*int main()
{
	int i;
	char ccc[11];
	printf("����10���ַ�:\n");
	for(i=0;i<10;i++)
	scanf("%c",&ccc[i]);
	ccc[i]='\n';
	for(i=0;ccc[i]!='\n';i++)
	printf("%c",ccc[i]);
	return 0;
}*/


//��������ַ���ʱ���� &����Ϊ���������ǵ�ַ 
//int main()
//{
//	char a[10];
//	scanf("%s",a);
//	printf("%s",a);
//	return 0;
//}


//���뺬�пո���ַ���ʱ��Ҫ�ö������ 
//int main()
//{
//	char str[10],a[10],b[10];
//	scanf("%s%s%s",str,a,b);
//	printf("%s %s %s",str,a,b);
//	return 0;
//}

//����gets()��puts()���������������һ�е��ַ������ֲ���scanf()����������������ո���ַ����Ĳ��� 
//int main()
//{
//	char a[80];
//	gets(a);
//	puts(a);
//	return 0;
//}



//�ַ���������

/*
1.�ַ������ƺ���  strcpy()
	һ����ø�ʽΪ��	strcpy(�ַ���1���ַ���2) 
	���ܣ����ַ���2���Ƶ��ַ���1 
	ע�⣻
			�ַ���2�������ַ�������Ҳ�������ַ������������ַ���1�������ַ���������
			�ַ���1�ռ�����㹻װ���ַ���2.
			����ʱ�����ַ���2�еġ�\0��Ϊֹ�� 
*/
//#include<string.h>
//int main()
//{
//	char a[]="jdhdujd";
//	strcpy(a,"hello");
//	puts(a);
//	return 0;
//}


//strncpy�������ָ���
//strncpy(�ַ���1���ַ���2��n)    nΪҪ���Ƶ�ǰn���ַ� 
//չʾ
//#include<string.h>
//int main()
//{
//	char a[]="jishfaihfuafiu15156554";
//	char b[]="jahfhuva1255555";
//	strncpy(a,b,10);
//	puts(a);
//	return 0;
// } 


/*�ַ������Ӻ���strcat()
	��ʽ��		strcat(�ַ���1���ַ���2��
	���ܣ����������ַ���
	ע�⣻�ַ���2���׸��ַ������ַ���1�Ľ�����־\0��ϵͳ���µ��ַ�����β�Զ���һ���ַ���������־\0.
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


//�ַ����ȽϺ���strcmp()
/* 	��ʽ��strcmp(�ַ���1���ַ���2��
	���ܣ��Ƚ������ַ����Ĵ�С��
	�����ķ���ֵΪһ������������
	1.���ַ���1<�ַ���2ʱ������ֵ<0
	2		   >         ,       >0
	3		   =         ,       =0
	
	�ַ����ȽϵĹ���:�������ַ��������ַ���ʼ�����αȽ϶�Ӧ�ַ���ASCII�룬ֱ�����ֲ�ͬ���ַ���\0Ϊֹ��
	������е��ַ�����ͬ������0;�����Ե�һ������ͬ�ַ��ıȽϽ��Ϊ׼�������������ַ��Ĳ
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


//���ַ����Ⱥ���strlen()
/*	��ʽ��		strlen(�ַ�����
	���ܣ������ַ������ȣ�������������־\0��
	ע��strlen()������sizeof()����������strlen()������ֵ�ǲ�����\0����sizeof()������ֵ�ǰ���\0��.
*/

//
//#include<string.h>
//int main()
//{
//	char ab[]="gugygyyfj3455";
//	printf("%d %d\n",strlen(ab),sizeof(ab));
//	return 0;
// } 


//��Сд��ĸת������
/*��תСд    strlwr(�ַ�����
  Сת��д 	  strupr(�ַ�����
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
//	printf("������Ҫɾ�����ַ�:\n");
//	scanf("%c",&n);
//	for(i=0;jsh[i]!='\0';i++)
//		if(jsh[i]!=n)
//			jsh[j++]=jsh[i],								//���ҵ����ַ���i�Ǵ���j�� �� �� jsh[i]��ֵ��jsh[i-1] 
//			printf("%s  j=%d i=%d\n",jsh,j,i);
//	jsh[j]='\0';
//	printf("%s\n",jsh);
//	return 0;
//}


//�����ַ� 
//#include<string.h>
//int main()
//{
//	int i,n=0;
//	char a[20],ch;
//	for(i=0;(a[i]=getchar())!='\n';i++)
//		;
//	//a[i]='\0';
//	printf("����һ���ַ�:\n");
//	ch=getchar();
//	for(i=0;a[i]!='\0';i++)
//		if(ch==a[i])
//			n++;
//	printf("n=%d\n",n);
//	puts(a);
//	return 0;
//}



//�жϻ��� 
//#include<string.h>
//int main()
//{
//	char jsh[20];
//	int i,j,n;
//	printf("����һ���ַ���:\n");
//	gets(jsh);
//	n=strlen(jsh);
//	for(i=0,j=n-1;i<j;i++,j--)
//		if(jsh[i]!=jsh[j])
//			break;
//	printf("i=%d j=%d\n",i,j); 
//	if(i>=j)
//		printf("�ǻ���\n");
//	else 
//		printf("���ǻ���\n");
//	return 0;
//}


/*#include<string.h>
int main()
{
	char j1[80],j2[20];
	printf("�����һ���ַ���:");
	gets(j1);
	printf("����ڶ����ַ���:");
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
	printf("���ֵ:%d\n",m);
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
	printf("����x��ֵ:");
	scanf("%lf",&x);
	item=x;
	while(fabs(item)>=0.00001)
	{	s=s+item;
		i++;
		item=pow(x,i)/fact(i);
	}
	printf("����:%lf\n",s);
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
//	printf("������������:");
//	scanf("%d%d",&a,&b);
//	c=gcd(a,b);
//	printf("%d��%d�����Լ����:%d\n",a,b,c);
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

//n������������ 
//void input(int a[],int n);
//void choose(int a[],int n);
//void print(int a[],int n);
//int main(void)
//{
//	int n,a[10];
//	printf("�������n��ֵ:(n<=10)");
//	scanf("%d",&n);
//	printf("����%d������Ԫ��:",n);
//	input(a,n);
//	choose(a,n);
//	printf("����֮��:",n);
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
//����������� 
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

//�ݹ麯��:�����Լ������Լ� 
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
//		printf("���ݴ���!\n");
//	else
//		printf("%d!=%d\n",n,fac(n));
//		return 0;
//}

//쳲��������� 
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

//�������ֵ�˳�� 
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

//�������ֵ�˳�� 
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

//�ж��Ƿ�Ϊ������ 
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
//�����ҿ� 
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

//��ά���������ֵ 
//int max_val(int a[][4]);
//int main()
//{	int a[3][4]={{1,7,8,10},{21,23,45,33},{24,53,29,42}};
//	printf("���Ԫ��:%d\n",max_val(a));
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

//�ֲ�������ȫ�ֱ���
//�ֲ�����: 
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

//ȫ�ֱ���:
//void num()
//{
//	extern int x,y;							//�ⲿ�������� 
//	int a=8,b=7;
//	x+=a-b;
//	y-=a+b;
//}
//int x,y;									//����ȫ�ֱ��� 
//int main()
//{
//	int a=7,b=8;
//	x=a+b;
//	y=a-b;
//	num();									//�������� 
//	printf("%d,%d\n",x,y);
//	return 0;
//}


//������ʹ��ȫ�ֱ��� 
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


//100~~1000��Χ�ڵĻ������� 
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
//	scanf("%d,%d",pa,pb);				/*����������ݴ洢��pa��pbָ��ı�����*/ 
//	if(pa[0]<pb[0])						/*�ȼ���if(a<b)��if(*pa<*pb)*/ 
//	{
//		pc=pa;							/*����pa��pb�����ݣ��˳���δ����ָ����ָ�����ֵ*/ 
//		pa=pb;
//		pb=pc;
//	}
//	printf("���ֵΪ:%d,��СֵΪ:%d,����:%d\n",pa[0],pb[0],pa[0]+pb[0]);
//	return 0;
//}

//void changeA(int *);						/*��������*/ 
//int main()
//{
//	int a=10,*pa=&a;						
//	printf("����ǰ:pa=%x,a=%d\n",pa,a);
//	changeA(pa);							/*��������*/ 
//	printf("���ú�:pa=%x,a=%d\n",pa,a); 
//	return 0;
//}
//void changeA(int *p)						/*��������*/ 
//{
//	int b;
//	*p=*p+*p;								/*����p��ָ��ı���*/ //*p��a��ֵ���ı� 
//	p=&b;									/*pָ��b*/ 
//	printf("�ں�����:p=%x\n",p);
//}

//#include<stdio.h>
//void swap(int *p1,int *p2)									/*�������β�Ϊָ������*/
//{
//	int t;
//	printf("p1=%x,p2=%x\n",p1,p2);
//	t=*p1;													/*����ָ����ָ�������ֵ*/ 
//	*p1=*p2;
//	*p2=t;
//	printf("�ں�����:*p1=%d,*p2=%d\n",*p1,*p2);
//	printf("p1=%x,p2=%x\n",p1,p2);
//}
//int main()
//{
//	int a=10,b=20;
//	int *pa=&a,*pb=&b;										/*paָ��a,pbָ��b*/ 
//	printf("pa=%x,pb=%x\n",pa,pb);
//	printf("���ú���֮ǰ:a=%d,b=%d\n",a,b);
//	swap(pa,pb);											/*���ú���,ʵ��Ϊָ�����*/ 
//	printf("���ú���֮��:a=%d,b=%d\n",a,b);
//	return 0;
// } 

//int main()
//{
//	int *p;
//	int *max(int n);								/*����ָ�뺯��*/ 
//	p=max(8);										/*max()�����������ֵ�ĵ�ַ*/ 
//	printf("���ֵ��:%d\n",*p);						/*������ֵ*/ 
//	return 0;
//}
//int *max(int n)										/*����ָ�뺯��*/ 
//{
//	static int a[]={13,24,38,27,11,9,36,18};		/*���岢��ʼ������*/ 
//	int i,m=0;
//	for(i=0;i<n;i++)								/*�ҳ����ֵ*/ 
//	if(a[m]<a[i])
//	m=i;											/*mΪ���ֵԪ�ص��±�*/ 
//	return &a[m];									/*������ֵԪ�صĵ�ַ*/ 
//}

//int max(int a,int b)							//���������ֵ���� 
//{
//	return a>b?a:b;
//}
//int min(int a,int b)							//��������Сֵ���� 
//{
//	return a>b?b:a;
//}
//int ave(int a,int b)							//������ƽ��ֵ���� 
//{
//	return (a+b)/2;
//}
//int main()
//{
//	int a=10,b=15,c;
//	int (*pc)(int ,int);						//����ָ������ָ��pc,�޶�pc���º������������κ��� 
//	int (*p[2])(int ,int);						//����ָ����������p,���޶����º�����Ĳ��� 
//	pc=ave;										//pcָ����ave 
//	p[0]=max;									//p[0]ָ����max 
//	p[1]=min;									//p[1]ָ����min 
//	c=(*pc)(a,b);								//����pc��ָ����ave,����������ʵ�� 
//	printf("ƽ��ֵ��:%d\n",c);
//	c=(*p[0])(a,b);								//����p[0]��ָ����max������������ʵ�� 
//	printf("���ֵ��:%d\n",c);
//	c=(*p[1])(a,b);								//����p[1]��ָ����min������������ʵ�� 
//	printf("��Сֵ��:%d\n",c);
//	
//}

//ָ������ָ�������Ϊ�����Ĳ���������:	double root(double a,double b,double(*f)(double))


//ָ���һά����

//int a[5]={1,2,3,4,5},*p;
//p=a;
//�ȼ���
//int a[5]={1,2,3,4,5},*p;
//p=&a[0]; 


//int main()
//{
//	int i,a[5]={1,2,3,4,5},*p=&a[0];
//	printf("\na[i] : ");
//	for(i=0;i<5;i++)							//�����±귨��������Ԫ�� 
//	printf("%3d",a[i]);
//	printf("\n*(a+i) : ");
//	for(i=0;i<5;i++)							//��������Ϊָ���������Ԫ�� 
//	printf("%3d",*(a+i));
//	printf("\np[i] : ");
//	for(i=0;i<5;i++)							//ָ������±귨��������Ԫ�� 
//	printf("%3d",p[i]);
//	printf("\n*(p+i): ");
//	for(i=0;i<5;i++)							//ʹ��ָ���������������Ԫ�� 
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
//	printf("*(*(a+1)+1)=%d\n",*(*(a+1)+2));					/*  a[1][2]�ȼ���*(a[1]+2)�ȼ���*(*(a+1)+2) 
//	return 0;												����a[1]��*(a+1)��ʾ��һ��*/ 
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
//								//*pΪָ���ά����Ԫ�ص�ָ�룬�����滻Ϊp=*a��p=a[0] 
//	for(i=0;i<row;i++)			//��ʼ����ά����Ԫ�� 
//	for(j=0;j<col;j++)
//	a[i][j]=i*10+j;
//	for(i=0;i<row*col;i++)		//row*col���������Ԫ�ظ��� 
//	printf("%3d",*(p+i));		//һά����ķ�ʽ���ʣ�*p(+i)�ȼ���p[i] 
//	return 0;
//}


//#define row 3
//#define col 4
//int main()
//{
//	int a[row][col]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int (*p)[col]=a;				//������ָ��p,��ָ������a 
//	int i,j;
//	for(i=0;i<row;i++)
//	for(j=0;j<col;j++)
//	printf("%3d",*(*(p+i)+j));		//�����ڴ˴��滻����a[i][j]��ʽ 
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
//	p=a;								//��ָ��ָ���ά����ĵ�һ�� 
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		printf("%3d",*(*p+j));			//�ȼ���*(*(p+i)+j) ������p��ָ�������Ԫ�� 
//		p=p+1;							//pָ����һ�� 
//	}
//	printf("\n");
//	return 0;
// } 


//average(int student[5][6])
//{
//	int i,j;
//	printf("ѧ��        ��ѧ       Ӣ��       �����       �ܷ�       ƽ����\n");
//	for(i=0;i<5;i++)
//	{
//		student[i][4]=student[i][1]+student[i][2]+student[i][3];			//���ܷ�
//		
//		student[i][5]=student[i][4]/3; 										//��ƽ���� 
//	}
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<6;j++)
//		printf("%-12d",student[i][j]);										//��ӡ�����Ԫ�� 
//		printf("\n");
//	}
//	
//}
//search(int (*p1)[6],int n)										//���ҳɼ����ϸ�ѧ������ 
//{
//	int i,j,flag;
//	printf("\n�ɼ���һ�����Ͽγ̲������ѧ������:\n");
//	for(i=0;i<n;i++)										//n=5,�����ѧ��3�ſν��в��� 
//	{
//		flag=0;												//��flag����ǣ����ɼ�<60��flag=1 
//		for(j=1;j<4;j++)
//		if(*(*(p1+i)+j)<60)				
//		flag=1;											//*(*(p1+i)+j)�ȼ���score[i][j] 
//		if(flag==1)
//		for(j=0;j<6;j++)									//��ѭ���������6���� 
//		printf("%-12d",*(*(p1+i)+j));						//*(*(p1+i)+j)�ȼ���score[i][j] 
//		printf("\n");
//	}
//}
//int main()
//{
//	int score[5][6]={{201101,78,93,82},{201102,67,83,72},{201103,55,83,62},{201104,65,59,70},{201105,80,78,90}};
//	average(score);											//������ƽ�������� 
//	search(score,5);										//���ò��Ҳ�����в�����ѧ���ɼ��ĺ��� 
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


//ָ��-ָ��=����ָ��֮���ж��ٸ��ַ�
//int main()
//{
//	char *str1,*str2;
//	str1="abcdefghijklmnopqrstuvwxyz";
//	for(str2=str1;str2<str1+26;str2++)
//	{
//		printf("%c",*str2);
//		if((str2-str1+1)%10==0)						//str2-str1����str2��str1֮���ж��ٸ��ַ� 
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

//����ָ��
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
//	printf("%s\n",*(q+k));				//q�ȼ���s,ָ�������������Ͼ���һ������ָ�� 
//	return 0;
//}


//main�����Ĳ���
/*		main(int argc,char *argv[])
	����,argc��argvΪmain()�������β�,argc��ʾmain()�����ܵĲ����������ַ�ָ������*argv[]ָ���������еĳ������Ͳ����ַ���,
	main()�����Ĳ�����Ҫ���������и��� 
	*/
	
//int main(int argc,char *argv[])
//{
//	int i;
//	printf("argument number is %d \n",argc);
//	for(i=0;i<argc;i++)
//	printf("%s\n",argv[i]);
//}
