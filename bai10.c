#include<stdio.h>
main()
{
    float so1, so2, so3, tg, kq;
    char pt1, pt2;
    printf("Nhap vao bieu thuc gom ba so thuc va hai phep toan: ");
    scanf("%f %c %f %c %f", &so1, &pt1, &so2, &pt2, &so3);
    if ((pt2=='*' || pt2=='/') && (pt1=='+' || pt1=='-'))
    {
        if (pt2=='*')
            tg=so2*so3;
        else
            if (so3!=0)
                tg=so2/so3;
            else
            {
                printf("Loi");
                return 0;
            }
        if (pt1=='+')
            kq=so1+tg;
        else
            kq=so1-tg;         
    }
    else    
    {
        switch (pt1) 
        {
            case '+': tg=so1+so2;break;
            case '-': tg=so1-so2;break;
            case '*': tg=so1*so2;break;
            default:
                if (so2!=0) 
                    tg=so1/so2;
                else
                {
                    printf("Loi");
                    return 0;
                }
        }    
        switch (pt2) 
        {
            case '+': kq=tg+so3;break;
            case '-': kq=tg-so3;break;
            case '*': kq=tg*so3;break;
            default:
                if (so3!=0) 
                    kq=tg/so3;
                else
                {
                    printf("Loi");
                    return 0;       
                } 
        } 
    }
    printf("Ket qua la: %.3f", kq);                  
    return 0;
}