#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int roll;
    int submarks[4];
};
int main(void)
{
    int i,j;
struct student stuarr[3];
for(i=0;i<3;i++)
{
    printf("enter data for student %d\n",i+1);
    printf("enter name :");
    scanf("%s",stuarr[i].name);
     printf("enter rol no.");
    scanf("%d",stuarr[i].roll);
    for(j=0;j<4;j++)
    {
     printf("enter data for subject %d\n",j+1);
    scanf("%s",stuarr[i].submarks[j]);
    }
}

for(i=0;i<3;i++)
{
    printf("enter data for student %d\n",i+1);
    printf("NAME:%s,Roll no :%d\nmarks:",stuarr[i].name,stuarr[i].roll);
    for(j=0;j<4;j++)
        printf("%d",stuarr[i].submarks[j]);
    printf("\n");

}
return 0;
}
