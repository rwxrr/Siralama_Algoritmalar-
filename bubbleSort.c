/* Bubble Sort */

void bubbleSort(int dizi[], int elemanSayisi)
{
     int temp;
     int i, j;
 
     for (i=1; i<elemanSayisi; i++)
     {
         for (j=0; j<elemanSayisi-i; j++)
         {
             if(dizi[j] > dizi[j+1])
             {
                        temp = dizi [j];
                        dizi [j] = dizi [j+1];
                        dizi [j+1] = temp;
             }
         }
     }
}
