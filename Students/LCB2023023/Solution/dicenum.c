#include<stdio.h>



int main(){
int x,y;
int ali[] = {1,2,3,4,5,6};
int bob[] = {1,2,3,4,5,6};
printf("Enter score of alice between 1 to 6 : ");
scanf("%d %d %d",&ali[0],&ali[1],&ali[2]);

printf("Enter score of bob between 1 to 6 : ");
scanf("%d %d %d",&bob[0],&bob[1],&bob[2]);

x = ali[0]+ali[1]+ali[2];
y = bob[0]+bob[1]+bob[2];

if (x>y){
    printf("alice");
}
else if(x<y){
    printf("bob");
}
else{
    printf("tie");
}



    return 0;
}

