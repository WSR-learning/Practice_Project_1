#include <stdio.h>
#include <math.h>
int main() {
    printf("Hello World!\n");
    printf("C\\user\\D:\\VScode");
    int Mike_score=89;
    int John_score=98;
    int Third_score=0;
    Third_score=John_score;
    John_score=Mike_score;
    Mike_score=Third_score;
    printf("\n John'score is %d",John_score);
    printf("\n Mike's score is %d",Mike_score);
    int int_1=80;
    char char_1='A';
    printf("\n int_1's value:%d \n char_1's value:%c",int_1,char_1);
    char char_2=int_1;
    printf("\n char_2's value:%c",char_2);
    printf("\n char_2's ASCII:%d",char_2);
    printf("\n %zu",sizeof(int_1));
    float float_1=1.23;
    float float_2=3.1415926535;
    printf("\n float_1's value:%f\n float_2's value:%f",float_1,float_2);
    double double_1=3.1415926535;
    printf("\n double_1's value:%.10lf\n float_2's value:%.10f",double_1,float_2);
    int result_1=1+2/5*7;
    double result_2=1+2/5.0*7;
    printf("\n result_1= %d",result_1);
    printf("\n result_2= %.1f",result_2);
    double result_first=0;
    double result_second=0;
    double a=1.2;
    double b=24.0;
    double c=3.6;
    result_first=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    result_second=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("\n result_first= %lf \n result_second= %lf",result_first,result_second);
    const float PI=3.14;
    double round_1=1.23;
    double round_2=2.34;
    double circle_square_1=PI*pow(round_1,2);
    double circle_square_2=PI*pow(round_2,2);
    printf("\n circle_1's square is %.2lf \n circle_2's square is %.2lf",circle_square_1,circle_square_2);
    double delta_value=a-b;
    double other_delta_value=b-a;
    if(delta_value>=0){
        printf("\n delta value between a and b is %lf",delta_value);
    }
    else{
        printf("\n delta value between a and b is %lf",other_delta_value);
    }
    int user_type=2;  //"1" refers to usual user,"2" refers to unusual user
    double item_price=180;
    double final_price_1=item_price*0.95;
    double final_price_2_1=item_price*0.9;
    double final_price_2_2=item_price*0.97;
    if(user_type==1){
        if(item_price>100){
            printf("\n Final price of items is %.2lf",final_price_1);
        }
        else{
            printf("\n Final price of items is %.2lf",item_price);
        }
    }
    else if(user_type==2){
        if(item_price>200){
            printf("\n Final price of items is %.2lf",final_price_2_1);
        }
        else{
            printf("\n Final price of items is %.2lf",final_price_2_2);
        }
    }
    else{
        printf("\n Please input available \"user_type\"");
    }
    char category;
    float product_price;
    scanf(" %c %f",&category,&product_price);//"1" refers to electronic product,"2" refers to cloth,and the value of "product_price" need to be larger than 0.
    float payment;
    switch(category){
        case '1':
        if(product_price<500){
            printf("\n Price of electronic product is low,there is no rewards for the product.");
            payment=product_price;
        }
        else if(500<=product_price<=1000){
            printf("\n Final price of electronic product can be the 95 percent of initial price.");
            payment=product_price*0.95;
        }
        else{
            printf("\n Final price of electronic product can be the 90 percent of initial price.");
            payment=product_price*0.90;
        }
        printf("\n Final price of product is %f.",payment);
        break;
        case '2':
        if(product_price<200){
            printf("\n Price of cloth is low,there is no rewards for the product.");
            payment=product_price;
        }
        else if(200<=product_price<=500){
            printf("\n Final price of cloth is the 92 percent of initial price.");
            payment=product_price*0.92;
        }
        else{
            printf("\n Final price of cloth is the 85 percent of initial price.");
            payment=product_price*0.85;
        }
        printf("\n Final price of product is %f.",payment);
        break;
        default:
        printf("\n There is no result concerning your choice about the category,please input available category.");
        break;
    }
    double year_number=2025;
    int examination_result=1;
    double judgement_result_1=(int)year_number%4;
    double judgement_result_2=(int)year_number%100;
    double judgement_result_3=(int)year_number%400;
    if(floor(year_number)!=year_number){
        examination_result=0;
    }
    else{
        examination_result=1;
    }
    switch(examination_result){
    case 0:
    printf("\n Please input available type of \"year_number\".");
    break;
    case 1:
    if(judgement_result_1==0 && judgement_result_2!=0 || judgement_result_3==0){
        printf("\n %d is Leap year.",(int)year_number);
    } 
    else {
        printf("\n %d is Common year.",(int)year_number);
    }
    break;
    }
    int final_value_1=100;
    int process_value_1=0;
    int sum_number_1=0;
    while(process_value_1<final_value_1){
        process_value_1=process_value_1+1;
        if(process_value_1%2==0){
            sum_number_1=sum_number_1+process_value_1;
        };
    };
    printf("\n Final result equals to %d",sum_number_1);
    int process_value_2=0;
    int sum_number_2=0;
    int final_value_2=100;
    do{process_value_2=process_value_2+2;
        sum_number_2=sum_number_2+process_value_2;
    }while(process_value_2<final_value_2);
    printf("\n Final result equals to %d",sum_number_2);
    int initial_value=1;
    for(int initial_value=1;initial_value<=50;initial_value=initial_value+1){
        if(initial_value%3==0){
            continue;
        }
        else if(initial_value>40){
            break;
        }
        else if(initial_value%2==0){
            printf("\n %d",initial_value);
        }
    }
    // double first_number;
    // double second_number;
    // double third_number;
    // double fourth_number;
    // double fifth_number;
    // int arrangement[5];
    // printf("\n");
    // scanf(" %lf %lf %lf %lf %lf",&first_number,&second_number,&third_number,&fourth_number,&fifth_number);
    // if(first_number!=(int)first_number || second_number!=(int)second_number || third_number!=(int)third_number || fourth_number!=(int)fourth_number || fifth_number!=(int)fifth_number){
    //     printf("\n Please input proper type of \"int\"");
    // }
    // else{
    //     arrangement[0]=(int)first_number;
    //     arrangement[1]=(int)second_number;
    //     arrangement[2]=(int)third_number;
    //     arrangement[3]=(int)fourth_number;
    //     arrangement[4]=(int)fifth_number;
    //     for(int initial_value=0;initial_value<5;initial_value=initial_value+1){
    //         printf(" %d",arrangement[initial_value]);
    //     }
    // }
    double arrangement[5];
    printf("\n");
    initial_value=0;
    int initial_number=-1;
    for(int  initial_value=0;initial_value<5;initial_value=initial_value+1){
        scanf("%lf",&arrangement[initial_value]);
        initial_number=initial_number+1;
        if(arrangement[initial_value]!=(int)arrangement[initial_value]){
            printf("\n Please input proper type of \"int\"");
            break;
        }
    }
    initial_value=initial_number;
    printf("\n");
    if(arrangement[initial_value]!=(int)arrangement[initial_value]){
    }
    else{
        initial_value=0;
        while(initial_value<5){
            printf("%d ",(int)arrangement[initial_value]);
            initial_value=initial_value+1;
        }
    }
    double person_number;
    initial_number=0;
    scanf(" %lf",&person_number);
    if(person_number!=(int)person_number){
        printf("\n Please input proper type of \"int\".");
    }
    else{
        char string_list[20];
        for(int initial_number=0;initial_number<person_number;initial_number=initial_number+1){
            scanf(" %s",string_list);
            printf("\n Hello,%s",string_list);
        }
        printf("\n You greet all persons.");
    }
    char char_first='A';
    char* char_pointer_first=&char_first;
    printf("\n The initial value is %c.",*char_pointer_first);
    *char_pointer_first='a';
    printf("\n The final value is %c.",*char_pointer_first);
    return 0;
}