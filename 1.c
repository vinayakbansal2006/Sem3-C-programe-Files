#include<stdio.h>
int decimaltobinary(int decimal){
    int binary=0,rem=0,base=1;
    while(decimal>0){
        rem=decimal%2;
        binary=binary+rem*base;
        decimal=decimal/2;
        base=base*10;
    }
    return binary;
}
int decimaltooctal(int decimal){
    int octal=0,rem=0,base=1;
    while(decimal>0){
        rem=decimal%8;
        octal=octal+rem*base;
        decimal=decimal/8;
        base=base*10;
    }
    return octal;
}
int decimaltohexadecimal(int decimal){
    int hexNum = 0, base = 1, rem;
    char hex[100];
    int i = 0;
    int temp = decimal;
    while (temp > 0) {
        rem = temp % 16;
        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';
        temp /= 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
    while (decimal > 0) {
        rem = decimal % 16;
        hexNum = hexNum + rem * base;
        decimal /= 16;
        base *= 100;
    }
    return hexNum;
}

int binarytodecimal(long long binary){
    int decimal=0,rem=0,base=1;
    while (binary > 0){
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    return decimal;
}
int octaltodecimal(int octal){
    int decimal=0,rem=0,base=1;
    while (octal > 0){
        rem=octal%10;
        decimal=decimal+rem*base;
        octal=octal/8;
        base=base*8;
    }
    return decimal;
}
int hexadecimaltodecimal(char hex[]) {
    int decimal = 0, base = 1;
    int i = 0;
    while (hex[i] != '\0') {
        i++;
    }
    i--;
    for (; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') { 
            decimal += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }
    return decimal;
}

int main(){
    int choice,cont,decimal,octal,answer;
    char hexadecimal[10];
    long long binary;
    do{
    printf("MENU\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Octal to Decimal\n");
    printf("6. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("Enter the number ");
            scanf("%d",&decimal);
            answer = decimaltobinary(decimal);
            printf("%d",answer);
            break;
        case 2:
            printf("Enter the number ");
            scanf("%d",&decimal);
            answer = decimaltooctal(decimal);
            printf("%d",answer);
            break;
        case 3:
            printf("enter the number");
            scanf("%d",&decimal);
            answer = decimaltohexadecimal(decimal);
            printf("%d",answer);
            break;
        case 4:
            printf("Enter the number ");
            scanf("%lld",&binary);
            answer = binarytodecimal(binary);
            printf("%d",answer);
            break;
        case 5:
            printf("Enter the number ");
            scanf("%d",&octal);
            answer = octaltodecimal(octal);
            printf("%d",answer);
            break;
        case 6:
            printf("Enter the number ");
            scanf("%s",&hexadecimal);
            answer = hexadecimaltodecimal(hexadecimal);
            printf("%d",answer);
            break;
        default:
            printf("Invalid option");
            break;
    }

    printf("\nDo u want to continue(yes-1/no-2) ");
    scanf("%d",&cont);
    }while (cont==1);

    return 0;

}