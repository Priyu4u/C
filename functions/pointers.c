#include<stdio.h>
int main(){
    // Pointers : Kisi bhi variable ka address store karta hai.
    int a = 5;
    int* x = &a;
    printf("%p\n",x); // %p se address print hota hai 
    // pointers ka apna khud ka bhi ek address hota hai
    printf("%p\n",&x);
    printf("%d\n",*x); // *x se ham wapas 
    //us address pe jo number hai use print kara sakte hai 
    // dusri bhasha me , x ke andar jis variable ka address
    //store hai , us variable ko point karo aur uske andar jo
    // pada hai usko dikha do

    int p = 85;
    int* y = &p;
    *y = 9; // p is changed
    printf("%d\n",p); 
    // pointers ki help se kisi dusra dabba jiska hame keval
    // address pata hai , ham uske value ko change kar sakte hai 
    return 0;
}