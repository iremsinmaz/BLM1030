#include <stdio.h>

int main ()
{
  char str [80];
  int i;

  printf ("Soyadinizi Giriniz: ");
  scanf ("%79s",str);
  printf ("Yaşınızı Giriniz: ");
  scanf ("%d",&i);
  printf ("Sayin %s , %d yasinizdasiniz.\n",str,i);
  printf ("Bir hexadecimal sayi giriniz: ");
  scanf ("%x",&i);
  printf ("Girmis oldugunuz sayi %#x (%d).\n",i,i);

  return 0;
}