#include <stdio.h>
// n elemanlı dizinin pozitif elemanlarını farklı diziye negatif elemanlarını farklı diziye sıfır olan elemanlarını farklı diziye gönder

int main() 

{
 
 int n;
 int PozitifSayac = 0 , NegatifSayac = 0 , SifirSayaci = 0;
 
 printf("dizinin eleman sayisini girin: ");
 scanf("%d",&n);
 printf("\n");
 
 int dizi[n];
 int PozitifDizi[n] , NegatifDizi[n] , SifirDizi[n];
 int i;    
 
 for(i = 0 ; i < n ; i++)
 {
  printf("dizi[%d]: ",i);
  scanf("%d",&dizi[i]);
 }
 
 for(i = 0 ; i < n ; i++)
 {
  if(dizi[i] > 0)
  {
   PozitifDizi[PozitifSayac] = dizi[i];
   PozitifSayac++;
  }
  
  else if(dizi[i] < 0)
  {
   NegatifDizi[NegatifSayac] = dizi[i];
   NegatifSayac++;
  }
  
  else
  {
   SifirDizi[SifirSayaci] = dizi[i];
   SifirSayaci++;
  }
 }
 printf("\n");
 
 for(i = 0 ; i < PozitifSayac ; i++)
 {
   printf("PozitifDizi[%d]: %d\n",i,PozitifDizi[i]); 
 }
 printf("\n");
 
 for(i = 0 ; i < NegatifSayac ; i++)
 {
   printf("NegatifDizi[%d]: %d\n",i,NegatifDizi[i]);
 }
  printf("\n");
  
 for(i = 0 ; i < SifirSayaci ; i++)
 {
   printf("SifirDizi[%d]: %d\n",i,SifirDizi[i]);
 }
  
 return 0;
  
}