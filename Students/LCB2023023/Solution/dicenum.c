#include<stdio.h>



int main(){
int x,y;
int t,v;
int ali[] = {1,2,3,4,5,6};
int bob[] = {1,2,3,4,5,6};
scanf("%d",&t);

while(v<t){

scanf("%d %d %d",&ali[0],&ali[1],&ali[2]);


scanf("%d %d %d",&bob[0],&bob[1],&bob[2]);

x = ali[0]+ali[1]+ali[2];
y = bob[0]+bob[1]+bob[2];

if (x>y){
    printf("alice\n");
}
else if(x<y){
    printf("bob\n");
}
else{
    printf("tie\n");
  }

v++;
}
    return 0;
}

