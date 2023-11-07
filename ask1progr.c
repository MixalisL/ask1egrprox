#include <stdio.h>
#define N 3
int x=0, metr=0;
struct filmain{
    int code;
    int year;
    char title[25];
};
struct filmain filmdata[N];

//void arxikop();
void existance(int f_code,int r_value,int place); 
void add();
void read();
void delete();
void update();
int main(void){
    if(metr == 0){
        metr++;
        //arxikop();
    }    
    char entolh;
    printf("\ngive order ");
    scanf("%s",&entolh);
    if(entolh == 'a'){
        if(x<N){
            x++;
            add(x);}
        else{
            printf("the list is full");
        }}
    else if (entolh =='r')
     {
        read();
    }
    else if(entolh=='u')
    { 
        update();
    }
    else if(entolh=='d'){
        if(x>=0){
        delete(x);
        }
        else{
            printf("there is no film code");
        }
    } 
    else if(entolh=='q'){
    } 
    else{
        printf("This ordes doesn't exist try again");
        main();
    } 
    return 0;
}
/*void arxikop(){
    for ( int i = 0; i <=N; i++)
    {
        filmdata[i].code=0;
    }
    printf("test arxikopoiish");   
}*/

void existance(int f_code,int r_value,int place){
    printf("test existance:%s\n ",filmdata[0].title);
    for (int i = 0; i <= N; i++)
    {
        if(filmdata[i].code==f_code  && r_value==0){
             r_value=1;
             printf("%d\n", r_value);
             place =i;
        }
    }   
}
void add(){
    int place=0;
    int r_value=0;
    printf("test add\n");
    int f_code;
    printf("give a code ");
    scanf("%d",&f_code);
    existance( f_code,r_value,place);
    if(r_value == 0){      
                printf("give film name ");
                scanf("%s",filmdata[x].title);
                printf("give year ");
                scanf("%d",&filmdata[x].year);
            }   
    else if (r_value==1)
    {
        printf("this file exist");
        place = 0;
    }
   main();
}
void read(){
    for(int i=0;i<=N;i++){
            printf("%s%5d\n",filmdata[i].title,filmdata[i].year);
        }     
            }   

void update(){
    int s_code;
    scanf("%d",&s_code);
    for(int i=0;i<=N;i++){
        if (s_code == filmdata[i].code){
            printf("it's here, put new year ");
            scanf("%d", &filmdata[i].year);
        }
        else{
            if(i==N){
                printf("film doesn't exist");
            }
        }
    }
}
void delete(){
    int s_code;
    int r_value=0;
    int place=0;
    scanf("%d",&s_code);
    existance(s_code,r_value,place);
        if(r_value==1){
        filmdata[place].code=0;
        filmdata[place].year=0;
        printf("film deleted");
        }   
        else if(r_value ==0){
            printf("film doesn't exist");
        }
}