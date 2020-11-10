#include<stdio.h>
main()
{
    float d10, d4;
    char dchu;
    printf("Nhap vao diem cua mot mon hoc theo thang diem 10: ");
    scanf("%f", &d10);
    if ((d10>=9) && (d10<=10))
        {
            d4=4.0;
            dchu='A';
        }
    else
        if (d10>=8)
        {
            d4=3.5;
            dchu='a';
        }
        else
            if (d10>=7)
            {
                d4=3;
                dchu='B';
            }
        else
             if (d10>=6)
             {
                 d4=2.5;
                 dchu='b';
             }
             else
                 if (d10>=5)
                 {
                     d4=2;
                     dchu='C';
                 }
                 else
                     if (d10>=4)
                     {
                         d4=1.5;
                         dchu='D';
                     }
                     else 
                     {
                         d4=1;
                         dchu='F';
                     }
    printf("Diem mon hoc theo diem 4 la: %.1f, theo thang diem chu la: %c", d4,dchu);
    return 0;
}