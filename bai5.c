#include<stdio.h>
main()
{
    float cc, qt, ck, diemMH;
    printf("Nhap vao diem chuyen can, diem qua trinh, diem cuoi ky: ");
    scanf("%f %f %f", &cc, &qt, &ck);
    diemMH= cc*0.1 + qt*0.4 + ck*0.5;
    if (diemMH>=4.0)
        printf("Dat");
    else
        printf("Khong dat");
    return 0;
}