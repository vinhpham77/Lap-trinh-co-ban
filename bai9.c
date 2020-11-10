#include<stdio.h>
main()
{
    int tien1, tien2, tien3, tien4, tien5;
    float chiso1, chiso2, tien, kWh;
    printf("Nhap chi so dien thang truoc va chi so dien thang nay: ");
    scanf("%f %f", &chiso1, &chiso2);
    kWh= chiso2-chiso1;
    tien1= 100*1418;
    tien2= 50*1622;
    tien3= 50*2044;
    tien4= 100*2210;
    tien5= 100*2361;
    if ((kWh>=0) && (kWh<=100)) 
        tien=kWh*1418;
    else
        if (kWh<=150)
            tien= tien1 + (kWh-100)*1622;
        else
            if (kWh<=200)
                tien= tien1 + tien2 + (kWh-150)*2044;
            else  
                if (kWh<=300)
                    tien= tien1 + tien2 + tien3 + (kWh-200)*2210;          
                else      
                    if (kWh<=400)
                        tien= tien1 + tien2 + tien3 + tien4 + (kWh-300)*2361;
                    else
                        tien= tien1 + tien2 + tien3 + tien4 + tien5 + (kWh-400)*2420;
    printf("So tien phai tra thang nay: %.3f VND", tien);
    return 0;
}