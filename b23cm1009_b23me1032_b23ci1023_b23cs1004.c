#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#define PI 3.14
#define WIDTH 80
#define HEIGHT 20

void printCircle() {
    printf("  *****  \n");
    printf("*       *\n");
    printf("*       *\n");
    printf("  *****  \n");
}

void printRectangle() {
    printf("*********\n");
    printf("*       *\n");
    printf("*********\n");
}

void printSquare() {
    printf("*******\n");
    printf("*     *\n");
    printf("*******\n");
}

void printTriangle() {
    printf("   /\\\n");
    printf("  /  \\\n");
    printf(" /____\\\n");
}

void printParallelogram() {
   printf( "    *****\n");
   printf( "   *****\n");
   printf( "  *****\n");
   printf( " *****\n");
   printf( "*****\n");

}

void printTrapezoid() {
    printf("   /######\\\n");
    printf(" /          \\\n");
    printf("/____________\\\n");
}

void printEllipse() {
    printf("  *******\n");
    printf(" *       *\n");
    printf("  *******\n");
}
void printcone() {
    printf("    __/\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf(" /______\\\n");
    printf("/        \\\n");
}
void printCone() {
    printf("    __/\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf(" /______\\\n");
    printf("////####\\\\n");
}
int circle(char a[])
{
    int k=0;
    char cir[]="circle";
    char CIR[]="CIRCLE";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(cir + i)||*(a+i)==*(CIR + i))
            {
                k++;
            }
            
        }
    if (k==strlen(cir))
    {
       return k;
    }
    else
    {
        return 0;
    }
        
}
int square(char a[])
{
    int k=0;
    char squ[]="square";
    char SQU[]="SQUARE";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(squ + i)||*(a+i)==*(SQU + i))
            {
                k++;
            }
            
        }
    if (k==strlen(squ))
    {
       return k;
    }
    else
    {
        return 0;
    }
}
int rectangle(char a[])
{
    int k=0;
    char rec[]="rectangle";
    char REC[]="RECTANGLE";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(rec + i)||*(a+i)==*(REC + i))
            {
                k++;
            }
            
        }
    if (k==strlen(REC))
    {
       return k;
    }
    else
    {
        return 0;
    }
}
int trapezium(char a[])
{
    int k=0;
    char tra[]="trapezium";
    char TRA[]="TRAPEZIUM";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(tra + i)||*(a+i)==*(TRA + i))
            {
                k++;
            }
            
        }
    if (k==strlen(tra))
    {
       return k;
    }
    else
    {
        return 0;
    }
}
int triangle(char a[])
{
    int k=0;
    char tri[]="triangle";
    char TRI[]="TRIANGLE";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(tri + i)||*(a+i)==*(TRI + i))
            {
                k++;
            }
            
        }
    if (k==strlen(tri))
    {
       return k;
    }
    else
    {
        return 0;
    }
}
int parallelogram(char a[])
{
    int k=0;
    char par[]="parallelogram";
    char PAR[]="PARALLELOGRAM";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(PAR + i)||*(a+i)==*(par + i))
            {
                k++;
            }
            
        }
    if (k==strlen(par))
    {
       return k;
    }
    else
    {
        return 0;
    }
}
int cone(char a[])
{
    int k=0;
    char con[]="cone";
    char CON[]="CONE";
    
    for (int i = 0; i < strlen(a); i++)
        {
            if (*(a+i)==*(CON + i)||*(a+i)==*(con + i))
            {
                k++;
            }
            
        }
    if (k==strlen(con))
    {
       return k;
    }
    else
    {
        return 0;
    }
}
int i;

double functionkonsa(double x) {

    switch (i) {
        case 1:
            return sin(x);
        case 2:
            return cos(x);
        case 3:
            return pow(2.71828, x);
        case 4:
            return x;
        case 5:
            return x * x;
        case 6:
            return x * x * x;
        case 7:
            return tan(x);
        default:
            printf("Invalid input for function\n");
            return 0;
    }
}

double functiongetter(double x) {
    double y = functionkonsa(x);
    return y;
}

void irregularfigures(double a, double b, int n) {
    int choice;
    double gap = (b - a) / n;
    double left_sum = 0, right_sum = 0;
    double xmin,xmax,ymin,ymax;
    printf("Enter the minimum x domain for printing : ");
    scanf("%lf",&xmin);
    printf("Enter the maximum x domain for printing : ");
    scanf("%lf",&xmax);
    printf("Enter the minimum y range for printing : ");
    scanf("%lf",&ymin);
    printf("Enter the maximum y range for printing : ");
    scanf("%lf",&ymax);
    printf("Enter '1' for Right Riemann Sum or '2' For Left Riemann Sum: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // right Riemann sum
            for (int j = 1; j <= n; j++) {
                double x = a + j * gap;
                right_sum += functiongetter(x) * gap;
            }
            printf("Right Riemann Sum = %lf\n", right_sum);
            break;
        case 2: // left Riemann sum
            for (int j = 0; j < n; j++) {
                double x = a + j * gap;
                left_sum += functiongetter(x) * gap;
            }
            printf("Left Riemann Sum = %lf\n", left_sum);
            break;
        default:
            printf("Invalid Input\n");
            return;
    }


    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            double x = -(xmax + j * (xmin - xmax) / (WIDTH - 1));   // Since the loop indices start from 0, subtracting 1 ensures that the calculations cover the                                                        entire specified range without exceeding the boundaries.
            double y = ymax + i * (ymin - ymax) / (HEIGHT - 1);
            double functionValue = functiongetter(x);

            if (fabs(y - functionValue) < 0.1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(void)
{   char choice;
    printf("To Find Area of A function Press 'f' \n");
    printf("To Find Area of A Regular Shape Press 'r' \n");
    printf("Enter your choice : ");
    scanf("%c",&choice);
    
    if(choice=='f'){
        printf("Enter the following numbers according to function required: \n");
                printf("1 for sin(x)\n");
                printf("2 for cos(x)\n");
                printf("3 for pow(2.71828,x)\n");
                printf("4 for x\n");
                printf("5 for x*x\n");
                printf("6 for x*x*x\n");
                printf("7 for tanx\n");
          printf("Enter Here : ");
          scanf("%d", &i);
      
          double a, b;
          int n;
      
          printf("Enter the Lower Limit for which you want to calculate the area: ");
          scanf("%lf", &a);
          printf("Enter the Upper Limit for which you want to calculate the area: ");
          scanf("%lf", &b);
          printf("Enter the number of intervals: ");
          scanf("%d", &n);
      
          irregularfigures(a, b, n);
        return 0;
    } else if(choice=='r'){
        printf("Enter the name of the figure you want area of:\nEXAMPLE:\nCircle\nSquare\nRectangle\nTrapezium\nTriangle\nParallelogram\nCone\n");
        char a[20];
        printf("Enter here : ");
        scanf("%s",a);
        if (circle(a)==strlen(a))
        {
            printf("Enter the value of Radius : ");
            float r;
            scanf("%f",&r);
            float area=((3.14)*(r)*(r));
            printf("Hi! The value of the area of given circle is : %0.2f\n",area);
            printCircle();
        }
        else if (square(a)==strlen(a))
        {
            printf("Enter the value of side of a square : ");
            float side;
            scanf("%f",&side);
            float area=(side)*(side);
            printf("Hi! The area of given square is : %0.3f\n",area);
            printSquare();
        }
        else if (rectangle(a)==strlen(a))
        {
            printf("Enter the value of the smaller side of the rectangle : ");
            float short_side;
            scanf("%f",&short_side);
            printf("Enter the value of longer side : ");
            float long_side;
            scanf("%f",&long_side);
            float area=(short_side)*(long_side);
            printf("Hi! The area of given rectangle is : %0.3f\n",area);
            printRectangle();
        }
        else if (trapezium(a)==strlen(a))
        {
            printf("Enter the value of smaller parallel side of the trapezium : ");
            float short_side;
            scanf("%f",&short_side);
            printf("Enter the value of longer parallel side of the trapezium : ");
            float long_side;
            scanf("%f",&long_side);
            printf("Enter the value of it's height : ");
            float height;
            scanf("%f",&height);
            float area=(0.5)*(height)*((short_side)+(long_side));
            printf("Hi! The area of given trapezium is : %0.3f\n",area);
            printTrapezoid();
        }
        else if (triangle(a)==strlen(a))
        {
            printf("Enter the value of 1st side of the triangle : ");
            float p;
            scanf("%f",&p);
            printf("Enter the value of 2nd side of the triangle : ");
            float q;
            scanf("%f",&q);
            printf("Enter the value of 3rd side of the triangle : ");
            float r;
            scanf("%f",&r);
            if ((p+q) >r&&(p+r)>q&&(r+q)>p)
            {
                float s=(p+q+r)/2;
                float z = s*(s-p)*(s-q)*(s-r);
                float area= pow(z,0.5);
                printf("Hi! The area of given triangle is : %0.3f \n",area);
                printTriangle();
            }
            else
            {
                printf("The given dimensions are invalid for a triangle");
            }
        }
        else if (parallelogram(a)==strlen(a))
        {
            printf("Enter the value of base of a parallelogram : ");
            float short_side;
            scanf("%f",&short_side);
            printf("Enter the value of height of a parallelogram : ");
            float long_side;
            scanf("%f",&long_side);
            float area=(short_side)*(long_side);
            printf("Hi! The area of given parallelogram is : %0.3f\n",area);
            printParallelogram();
        }
        else if (cone(a)==strlen(a))
        {
            printf("What Do You Want to Find?\n");
            printf("PRESS--1\n if you want to find curved surface area of cone.\nPRESS--2\nif u want find total surface area of cone.\n");
            float choice;
            scanf("%f",&choice);
            if (choice==1)
            {
                printf("Enter the value of radius of cone : ");
                float radius;
                scanf("%f",&radius);
                printf("Enter the value of slant height of cone : ");
                float slant;
                scanf("%f",&slant);
                float csa;
                if(slant>radius)
                {
                    csa=3.14*radius*slant;
                    printf("The value of the curved surface area of a cone is : %0.3f\n",csa);
                    printcone();
                }
                else
                {
                    printf("Dimensions are wrong");
                }
            }
            
            else if (choice==2)
            {
                printf("Enter the value of radius of cone : ");
                float radius;
                scanf("%f",&radius);
                printf("Enter the value of slant height of cone : ");
                float slant;
                scanf("%f",&slant);
                float tsa;
                if(slant>radius)
                {
                    tsa=3.14*radius*(slant+radius);
                    printf("The value of the total surface area of a cone is :%0.3f\n",tsa);
                    printCone();
                }
                else
                {
                    printf("Dimensions are wrong");
                }
                
            }
            else
            {
                printf("ENTER THE RIGHT CHOICE");
            }
            
            
        }
        else
        {
            printf("Not found\n");
        }
        
    }else{
        printf("Invalid Input/n");
    }

}
