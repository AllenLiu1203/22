#include<stdio.h>

struct Sertivor{
    char id[20];
    char name[20];
    unsigned int  wage;
    unsigned int  work_hours;
    unsigned int  pay;

};
int salc(struct Sertivor *);  
void show(struct Sertivor *); 
int main(void){

    int a;
    int x;

    struct Sertivor sertivor[4]; 

    printf("請問有幾個工讀生?");
    scanf("%d", &a);

    for(x=0;x<a;++x){
        printf("這是第%d筆資料\n\n", x+1);
        printf("pls entering employee id:");
        scanf("%s", sertivor[x].id);
        printf("pls entering employee name:");
        scanf("%s", sertivor[x].name);
        printf("pls entering employee wage: ");
        scanf("%d", &sertivor[x].wage);
        printf("pls entering employee work_hours:");
        scanf("%d", &sertivor[x].work_hours);

        salc(&sertivor[x]);
    }
    for(x=0;x<a;++x){
    	show(&sertivor[x]);
	}
	
	return 0;

}
int salc(struct Sertivor *ser){ 

    (ser->pay)=(ser->wage)*(ser->work_hours);

    return ser->pay;
}
void show(struct Sertivor *show){ 
    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->work_hours);
    printf("PAY:%d\n",show->pay);
    printf("-------------\n");
}
