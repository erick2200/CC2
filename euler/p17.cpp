#include <iostream>
using namespace std;

// 1,2,6--3
// 4,5,9 --4
// 3,7,8 -- 5
// 11,12 -- 6
//15,16      --7
// 13,14,18,19   -- 8
//17    --9
// 10 --3
// 20 -- 6
// 30 -- 6
// 40 -- 5
// 50 -- 5
// 60-- 5
// 70 -- 7
// 80 -- 6
// 90--  6
// 100-- 7 +and 
// 1000 -- 8



int main()
{
    //1 al 9
    int UnoalNueve = 36;

    //10 al 19
    int DiezalDiesinueve = 70;
    
    //20 al 99
    int VeintealNuevenueve = UnoalNueve*8 + (6+6+5+5+5+7+6+6)*10;
    
    //1 al 99
    int UnoalNuevenuve = UnoalNueve+DiezalDiesinueve+VeintealNuevenueve;
    
    //100 al 200          //100    and  
    int CienalDoscientos = 10*100 + 3*99 + UnoalNuevenuve;
    
    //200 al 999                                       and     100    2,3,4,5,6,..
    int DoscientosalNuvecientos = UnoalNuevenuve*8 + 3*99*8 + 7*100*8 + (3+5+4+4+3+5+5+4)*100;

    //total                                                                               1000
    unsigned long long total = UnoalNuevenuve+ CienalDoscientos + DoscientosalNuvecientos +11;

    cout << total << endl;


}