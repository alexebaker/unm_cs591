#include<stdio.h>

int check_password(const char* password){
  if(password[0] != 'g')
    return 0;
  if(password[1] != 'i')
    return 0;
  if(password[2] != 'm')
    return 0;
  if(password[3] != 'm')
    return 0;
  if(password[4] != 'e')
    return 0;
  if(password[5] != '!')
    return 0;
  return 1;
}
int main(){
  char passwd[64];
  int i=0;
  for(i=0; i<3; i++){
    printf("Enter password: ");
    fflush(stdout);
    fgets(passwd,64,stdin);
    if(check_password(passwd)){
      printf("Access granted.\n");
      printf("Press Enter to exit");
      fflush(stdout);
      fgets(passwd,64,stdin);
      return 0;
    } else {
      printf("Access denied.\n");
    }
  }
  return 0;
}
