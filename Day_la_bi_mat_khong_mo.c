#include<stdio.h>
#include <time.h>
#include <string.h>
#include<windows.h>

// void SetWindowSize(LONG width, LONG height)
// {
// 	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	
// 	SMALL_RECT WindowSize;
// 	WindowSize.Top = 0;
// 	WindowSize.Left = 0;
// 	WindowSize.Right = width;
// 	WindowSize.Bottom = height;
	
// 	SetConsoleWindowInfo(hStdout, 1, &WindowSize);
// }

void delay(float number_of_seconds)
{
    // Converting time into milli_seconds
    float milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void image(){
    int i=0,hang, cot;
    char n;
    char str1[90][102]; //hang =90, cot = 102
    FILE *f1;
    f1 = fopen("banner.txt", "r");
    while(!feof(f1))
    {
        fread(&str1, sizeof(char), 1, f1);
        
        printf("%s", str1);
        
        delay(0.0000000001);
        

    }
    fclose(f1);
}

int main()
{
	//SetWindowSize(200000, 200000);
    char pass[30], pass1[30];
    printf("Em co yeu anh khong? (co/khong): ");
    fflush(stdin);
    gets(pass1);
    while (strcmp(pass1, "co") != 0)
    {
        printf("\n\n");
        printf("TRA LOI SAIIII. \n");
        printf("NHAP LAI: ");
        fflush(stdin);
        gets(pass1);
    }
    
    printf("\tNhap ngay sinh (ngay/thang/nam): ");
    fflush(stdin);
    gets(pass);

    while(strcmp(pass, "day/month/year") != 0)
    {
        printf("\n\n");
        
        printf("\tNgay sinh cua minh ma cung nhap sai a !!!\n");
        printf("\tNhap lai ngay sinh diii (ngay/thang/nam): ");
        fflush(stdin);
        gets(pass);

    } 
    if(strcmp(pass, "day/month/year2") == 0)
    {
        image();
    }
    
    system("pause");
    return 0;
}
