#include<stdio.h>
int main(){
    float w,h,BMI;
    printf("Enter your weight (in Kg) = ");
    scanf("%f",&w);
    printf("enter your height (in Mts) = ");
    scanf("%f",&h);
    BMI= w /(h*h);
    if(BMI<15 && BMI>0){
        printf("STRAVATION %f\n",BMI);
    }else if(BMI>=15.1 && BMI<17.5){
        printf("ANOREXIC %f\n ",BMI);
    }else if(BMI>=17.6 && BMI<18.5){
        printf("UNDERWEIGHT %f\n",BMI);
    }else if(BMI>=18.6 && BMI<24.9){
        printf("IDEAL %f\n",BMI);
    }else if (BMI>=25 && BMI<29.9){
        printf("OVERWEIGHT %f\n",BMI);
    }
    else if(BMI>=30 && BMI<39.9){
        printf("OBSES %f\n",BMI);
    }else if(BMI>=40.0 && BMI<100.0){
        printf("MORBIDITY %f\n",BMI);
    }else {
        printf("NOT APPROPRIATE ");
    }
    return 0;

}