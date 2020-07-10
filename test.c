 
    #include<stdio.h>
   
  int add(int n1 , int n2)
  {
     int result ;
     result = n1 + n2  ;
     return result ;
     
  }

  int div(int n1 , int n2)
  {
    int result ;
     result = n1 / n2  ;
     return result ;
  }


   int main()
   {
    int num1 = 10 , num2 = 5 ;
    int sum , divide ;
    sum = add(num1,num2);
    divide = div(num1,num2);
 
   printf("Sum = %d\n", sum);
   printf("Divide = %d", divide);
   return 0;
   }

