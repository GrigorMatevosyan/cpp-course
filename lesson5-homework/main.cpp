int main(){
//վերագրումները փոխարինել ավելի կաճ տարբերակով
int a = 1, b = 2;
 a += 10;
 b /= 2;
 a += b;
 b *= a;
return 0;
}

int main(){
//Մտածել խնդիր որում կօգտագործեք % ( տոկոս)օպերատորը, նաեւ կօգտվեք cin եւcoutօպերատորներից
int num;
cout << "Enter numeral = ";
cin >> num;
if(num % 2 ==1){
    cout << "Your Entered numeral is odd numeral";
    } else{
        cout << "Your entered numeral is even numeral";
        }
  return 0;
}

int main(){
//Գրել ծրագիր, որը կտպի 0 եթե օգտվողը cin-ի միջոցով գրել է զույգ թիվ, եւ 1, եթե օգտվողը cin-ի միջոցով գրել է կենտ թիվint num;
int num;
bool find = false;
cout << "Enter numeral = ";
cin >> num;
if(num % 2 == 0){
    find = true;
    cout << find;
    } else{
        find = false;
        cout << find;
        }
  return 0;
}

int main(){
//Ունենք հետեւյալ մաթեմատիկական բանաձեւը՝ (a+b)2+(a−b)2−3ab։Բանաձեւը գրել C++-ով։
int a, b, total;
cout << "a= "; cin >> a;
cout << "b= "; cin >> b;
total = (a + b) ^ 2 + (a - b) ^ 2 - 3*a*b;
cout << "Total= " << total << endl;
  return 0;
}

int main(){
//Փորձեք գրել ծրագիր որը կհաշվի քառանիշ թվի թվանշանների գումարը։
int num,firstn,secondn,thirdn,forthn, sum;
cout << "Enter Numeral= "; cin>> num;
firstn = num / 1000;
secondn = num / 100 % 10 ;
thirdn = num / 10 % 10;
forthn = num % 10;
sum = firstn + secondn + thirdn + forthn;
cout << "sum = " << sum << endl;
return 0;
}

//Գրեք ծրագիր որում օգտագործողը(user) գրում է պարզ մաթեմատիկական մի գործողություն, օրինակ՝ 5 + 7, կամ 10 –2, կամ 3 * 7, կամ 27 / 3 , այսինքնկարող է օգտագործել4 գործողություն(+,-,*,/) ցանկացած թվի հետ, իսկ դուք 
//պիտի ըստ մուտքագրված տվյալների հասկանաք գործողության նշանը, եւ կատարեք գործողությունը։(թվի եւ նշանի միջեւկա բացատ)
 int main(){
int num1, num2, result;
char op;
cin >> num1 >> op >> num2;
switch (op){
  case '+' : result = num1 + num2; break;
  case '-' : result = num1 - num2; break;
  case '*' : result = num1 * num2; break;
  case '/' : result = num1 / num2; break;
  default: cout << "invalid operator" << endl;
}
cout << result;
return 0;
}
