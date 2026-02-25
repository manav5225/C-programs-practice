//=======================================================GEOMATRIC CALCULATOR============================================================
#include<stdio.h>
#define PI 3.14159
int main (){

    int ch;
    float radius;//circle
    int base,height;//triangle
    int perimeter;
    int perirect,width,area,length;


    menu:
    printf("\n1:Area of Circle\n2:Circumference of Circle\n3:Radius of Circle\n4:Area of Triangle\n5:Side of Triangle\n6:Area of Square\n7:Perimeter of Square\n8:Length of Rectangle\n9:Breadth of Rectangle\n10:Area of Rectangle\n11:Perimeter of Rectangle\n12:Exit\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:{
        printf("For Area of circile Enter Radius of the circle\n");
        scanf("%f",&radius);
        float areac=PI*(radius*radius);
        printf("Area of a Circle is : %f\n",areac);
        
        break;
    }
    
    case 2:{
        printf("\nFor Circumference of Circle Enter Radius of the circle\n");
        scanf("%f",&radius);
        float circumference=(2*PI*radius);
        printf("Circumference of the circle is :%f",circumference);
        
        
        break;
    }
        
    case 3:{
        float circumference,r;
        printf("\nFor Radius of Circle Enter Circumference of the circle\n");
        scanf("%f",&circumference);
        r=(circumference/(2*PI));
        printf("Radius of Circle is : %f",r);
        
        break;
    }
    case 4:{
        printf("Enter base of Triangle\nEnter Height of Triangle\n");
        scanf("%d %d",&base,&height);
        float areat=(base*height)/2.0;
        printf("Area of Triangle is %f",areat);
          
        break;
    }
    case 5:{
        int a,b,c;
        printf("\nEnter side 1 of Triangle\nEnter side 2 of Triangle\nEnter side 3 of Triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        int peritriangle=a+b+c;
        printf("Perimeter of Triangle is : %d",peritriangle);
        break;
    }
    case 6:{
        int side;
        printf("Enter Side of the Square : \n");
        scanf("%d",&side);
        area=side*side;
        printf("Area of square is : %d",area);
        break;
    }
    case 7:{
        int side;
        printf("Enter Side of the Square : \n");
        scanf("%d",&side);
        perimeter=4*side;
        printf("Perimeter of square is : %d",perimeter);
        
        break;
    }
    case 8:{
        printf("Enter Perimeter and width of rectangle to find out length of Rectangle\n");
        scanf("%d %d",&perirect,&width);
        length=(perirect/2)-width;
        printf("Length of Rectangle is : %d",length);
        break;
    }
    case 9:{
        printf("Enter Perimeter and Length of rectangle to find out Width of Rectangle\n");
        scanf("%d %d",&perirect,&length);
        width=(perirect/2)-length;
        printf("Width of Rectangle is : %d",width);
        break;
        
        
        break;
    }
    case 10:{
        printf("Enter Length and Width for Area of rectangle\n");
        scanf("%d %d",&length,&width);
        area=width*length;
        printf("Area of Rectangle is : %d",area);
        
        
        break;
    }
    case 11:{
        printf("Enter Length and Width for perimeter of rectangle\n");
        scanf("%d %d",&length,&width);
        perirect=2*(length+width);
        printf("Perimeter of Rectangle is : %d",perirect);
        
        
        break;
    }
    case 12:{
        printf("Thank You!!");
        return 0;
        break;
    }
        
        
    
    default:{
        printf("Invalid Entry");
        break;
    }
    }
    goto menu;

    return 0;

}
