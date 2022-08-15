#include <stdio.h>
#include <stdlib.h>
typedef struct Laptop{
    int id;
    char marka[100];
    double teglo;
    double cena;
}laptop;
typedef struct LAPTOPS_COUNT{
 laptop* laptop;
 int count;

}LAPTOPS_COUNT;

void LAPTOPS_COUNTING(LAPTOPS_COUNT *laps){
//cqlo unikalno 32 bitovo 4islo
//8-12 bukvi
//realno 4islo 0.025-10.00
//10.00 500.00
double min1=0.025;
double max1=10.00;
double min2=10.00;
double max2=500.00;

scanf("%d",&laps->count);
for(int i=0;i<laps->count;i++){
    int d=1;
((laps->laptop)+i)->id=rand();
if(d=1){
   d--;
}else{
    if(((laps->laptop)+i--)->id==((laps->laptop)+i)->id)
    {
        printf("syzdadeni sa dva edni i sy6ti id");
        exit(1);
    }
}

for(int i=0;i<8+rand()%5;i++){
((laps->laptop)+i)->marka[i]=26*rand()/RAND_MAX+1.0;

}
((laps->laptop)+i)->teglo=((double)rand() / (RAND_MAX/(max1 - min1)));
((laps->laptop)+i)->cena=((double)rand() / (RAND_MAX/(max2 - min2)));
}
}
double totalLaptopWeight(LAPTOPS_COUNT* laps){
    double weight=0;
    for(int i=0;i<laps->count;i++){
        weight=((laps->laptop)+i)->teglo+weight;
    }
return weight;
}
  int minPriceItem(LAPTOPS_COUNT*laps){
    int cheap=0;
   for(int i=0;i<laps->count;i++){
    if(((laps->laptop)+i)->cena < ((laps->laptop)+i++)->cena){
 cheap=((laps->laptop)+i)->cena;
    }else{
        cheap=((laps->laptop)+i++)->cena;
    }
    }
    if (cheap!=0){
    return cheap;
    }else return 0;
  }


int main(){
 
 
    return 0;
}