//FOR CYCLE
 
int main(){
for(int i = 1; i < 10; i++){
  cout << i << endl;
}
return 0;
}
// Հաշվել (0;50) ընկած հատվածում ընկած զույգ թվերի գումարը
//1-ին եղանակ
 int main(){
   int sum=0;
for(int i = 0; i <= 50; i++){
if(i % 2 == 0){
  sum += i;
}
}
cout << sum << endl;
return 0;
}
//2-րդ եղանակ
 int main(){
   int sum=0;
for(int i = 0; i <= 50; i+=2){
  sum += i;
  cout << i<< endl;
}
cout << sum << endl;
return 0;
}

// մինչէ n ընկած թվերի գումարը
 int main(){
   int n;
cin >> n;
int j=n;
int sum=0;
while(j){
sum+=j%10;
j/=10;
}
cout<<sum;
return 0;
}
