//Գրել Որը կստանա 1 թիվ որպես գնդի շառավիղ եւ կվերադարցնի գնդի ծավալը
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
double f(float r){
    float p = 3.14;
    int V = 4/3 * p * pow(r,3);
    cout << r << " " << V;
}
int main()
{
float r;
 cin>>r;
f(r);
return 0;
}

// Գրել ֆունկցիա, Եվ եթե այն փոքրատառ է վերադարցնում է դրա մեծատառը, հակառակ դեպքում վերադարձնում նույն սիմվոլը. օր՝ 'a' կդառնա 'A'
// Example program
// Example program
#include <iostream>
#include <string>
using namespace std;
char f(char sim){
    int num=sim;

      if(num >=97 && num <=122){
        sim = num -= 32;
  cout<<sim;
    } else{
        cout<<"dzer nermucac tar@ mecatar e" << " " << sim;
    }
}
int main()
{
    char sim;
 cin>>sim;
f(sim);
return 0;
}
