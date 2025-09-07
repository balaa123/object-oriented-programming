#include<stdio.h>
struct details{
    char str[50];
    int rollno;
    float marks;
};
void updatemarks(struct details *s){
    s->marks=95.5;
    printf("\n%d",s->rollno);
    printf("\n%f",s->marks);

}
int main(){
    struct details s1={"sai",89,90};
    printf("%s %d %f",s1.str,s1.rollno,s1.marks);
    updatemarks(&s1);
    s1.marks=81;

    return 0;
}
