#include <stdio.h>
#define N 3

struct filmain {
    int code;
    int year;
    char title[25];
};

struct filmain filmdata[N];
int x = 0;

void existance(int f_code, int *r_value, int *place);
void add();
void read();
void update();
void delete();

int main(void) {
    char entolh;

    while (1) {
        printf("\ngive order:");
        scanf(" %c", &entolh);

        if (entolh == 'a') {
            if (x < N) {
                add();
            } else {
                printf("the list is full\n");
            }
        } 
        else if (entolh =='r') {
            read();
        } 
        else if (entolh =='u') {
            update();
        } 
        else if (entolh =='d') {
            delete();
        }
         else if (entolh =='q') {
            return 0 ;
        } 
        else {
            printf("This order doesn't exist try again.\n");
        }
    }

    return 0;
}

void existance(int f_code, int *r_value, int *place) {
    for (int i = 0; i < N; i++) {
        if (filmdata[i].code == f_code) {
            *r_value = 1;
            *place = i;
            break;
        }
    }
}
void add() {
    int place = 0;
    int r_value = 0;
    int f_code;
    printf("give a code: ");
    scanf("%d", &f_code);
    existance(f_code, &r_value, &place);

    if (r_value == 0) {
        filmdata[x].code = f_code;
        printf("give film name: ");
        scanf("%s", filmdata[x].title);
        printf("give year: ");
        scanf("%d", &filmdata[x].year);
        x= x+1;
    } else {
        printf("this film exists.\n");
    }
}

void read() {
    for (int i = 0; i < x; i++) {
        printf("%s   %d\n", filmdata[i].title, filmdata[i].year);
    }
}

void update(){
    int s_code;
    printf("enter code for update ");
    scanf("%d", &s_code);
    for (int i = 0; i < x; i++) {

        if (s_code == filmdata[i].code) {
            printf("film found, enter new year:");
            scanf("%d", &filmdata[i].year);
            printf("film updated.\n");
            return;
        }
    }
   printf("film doesn't found.\n");
}

void delete() {
    int s_code;
    int r_value = 0;
    int place = 0;

    printf("Enter code you want to delete: ");
    scanf("%d", &s_code);
    existance(s_code, &r_value, &place);

    if (r_value == 1) {
        filmdata[place].code = 0;
        filmdata[place].year = 0;
        printf("film deleted.\n");
    } 
    else {
        printf("film not found.\n");
    }
}