#include<stdio.h>
int main()
{
    int a [] = {2,7,6,3,5,10};
    int n=6;// number of element in the array
    int number_find =3;//number to find
    int i;
    int found=0;//flag to indicate the element is found
      

      for (i=0; i<n;i++)
{
    if (a[i]==number_find){
        printf("element  %d found at index %d .\n", number_find , i );
        found=1;
        break; //exit loop once element is found
    }
}
  if (!found)
   {
    printf("element %d not found in the array.\n ", number_find);

  }
  return 0;

}