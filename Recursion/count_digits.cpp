#include<iostream>

using namespace std;

int cd(int num){
    if(num<=9){
        return 1;
    }
    return 1 + cd(num/10);
}
int main(void){
    int num = 9;

    printf("Digits in %d are %d\n",num,cd(num));


    return 0;
}