#include <stdio.h>
#define N 3


int x=0;
int main();
struct filmain
{
    int code;
    int year;
    char title[25];
};
struct filmain filmdata[N];

void add(){
    printf("test add");
    int f_code;
        printf("givec code ");
        scanf("%d",&f_code);
        if(f_code == filmdata[x].code){
            filmdata[x].code = f_code;
            if(filmdata[x].code==0){
                printf("give film name \n");
                scanf("%s", filmdata[0].title);
                printf("give year \n");
                scanf("%d",&filmdata[0].year);
            }   
        }
    main();
}
void read(){
    int s_code; 
    scanf("%d",&s_code);
    for(int i=0;i<=N;i++){
        if (s_code == filmdata[i].code){
            printf("%s%5d\n",filmdata[i].title,filmdata[i].year);
            return;
        }
        else{
            if(i==N){
                printf("film doesn't exist");

            }   }    } 
}
void update(){
    int s_code;
    ///int n_year= NULL;
    scanf("%d",&s_code);
    for(int i=0;i<=N;i++){
        if (s_code == filmdata[i].code){
            printf("it's here, put new year");
           /// scanf("%d", filmdata[i].year);
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
    scanf("%d",&s_code);
     if (s_code == filmdata[x].code){
        filmdata[x].code=0;
        filmdata[x].year=0;
        filmdata[x].title[25] = " ";
        printf("film deleted");
        }
    else{
        if(x==N){
            printf("film doesn't exist");
        }
    }
    main();
} 
int main(){
    for ( int i = 0; i <=N; i++)
    {
        filmdata[i].code=0;
    }
    
    char entolh;
    printf("\ngive order");
    scanf("%s\n",&entolh);
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