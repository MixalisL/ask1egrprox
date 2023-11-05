#include <stdio.h>
#define N 3
struct filmain
{
    int code;
    int year;
    char title;
};
struct filmain filmdata[N];
void add(){
    
    for(int i=0;i<=N;i++){
        int f_code;
        printf("givec code");
        scanf("%d",&f_code);
        if(f_code != filmdata[i].code){
            filmdata[i].code = f_code;
            if(filmdata[i].code=0){
                printf("give film name \n");
                scanf("%s", filmdata[0].title);
                printf("give year \n");
                scanf("%d",filmdata[0].year);
            }   
        }
    }
}
void read(){
    int s_code; 
    scanf("%d",&s_code);
    for(int i=0;i<=N;i++){
        if (s_code = filmdata[i].code){
            printf("%s\n %d",filmdata[i].title,filmdata[i].year);
            return;
        }
        else{
            if(i=N){
                printf("film doesn't exist");

            }   }    } 
}
void update(){
    int s_code;
    int n_year;
    scanf("%d",&s_code);
    for(int i=0;i<=N;i++){
        if (s_code = filmdata[i].code){
            printf("it's here, put new year");
            scanf("%d", filmdata[i].year);
        }
        else{
            if(i=N){
                printf("film doesn't exist");

            }
        }
}
}
void delete(){
    int s_code;
    scanf("%d",&s_code);
    for(int i=0;i<=N;i++){
        if (s_code = filmdata[i].code){
            filmdata[i].code=0;
            filmdata[i].year=0;
            filmdata[i].title =' ';//none
            printf("film deleted");
        }
        else{
            if(i=N){
                printf("film doesn't exist");

            }
        }
    }  
}
int main(){
    char entolh;
    printf("give order");
    scanf("%s",&entolh);
    if(entolh == 'a'){
        add();}
    else if (entolh =='r')
     {
        read();
    }
    else if(entolh=='u')
    { 
        update();
    }
    else if(entolh=='d'){
        delete();
    }  
    else{
        printf("This ordes doesn't exist");
    } 
    return 0;
}