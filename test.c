#include <stdio.h>
#include <ctype.h> 
typedef struct student{
  int age;
  char name[10];
}student;
 
int main(){
  student lynn = {23, {'l', 'y', 'n', 'n', '\0'}};
  student *one = &lynn;
  printf("%d \n", (*one).age);
  printf("%s \n", (*one).name);
  return 0;
}
