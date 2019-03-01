 #include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    float y;
    scanf("%f",&y);
    if(x%5==0&&((float)x+0.5)<=y){
       float wd=y-((float)x+0.5);
        printf("%.2f",wd);
    }
    else{
        printf("%.2f",y);
    }
}
