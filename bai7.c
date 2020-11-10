#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,p,S;
    printf("Nhap vao ba so thuc: ");
    scanf(" %f%f%f ", &a, &b, &c);
    if ((a+b<=c) && (b+c<=a) && (c+a<=b))
        printf("Khong phai tam giac");
    else 
        {
        p= (a+b+c)/2;
        S= sqrt(p*(p-a)*(p-b)*(p-c));
        printf("S=%.3f\n",S);  
        if ((a==b) && (b==c)) 
            printf("Tam giac deu");
        else
            if (((a==b) && (c*c==a*a+b*b)) || ((a==c) && (b*b==a*a+c*c)) || ((b==c) && (a*a==b*b+c*c))) 
                 printf("Tam giac vuong can");
            else
                if ((a==b) || (b==c) || (a==c))
                    printf("Tam giac can"); 
                else
                    if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a))
                        printf("Tam giac vuong");
                    else
                        printf("Tam giac thuong");
        }            
    return 0;
}