 int main(){

  //ստեղծել զանգված։ Արժեքավորել պատահական գեներացնող թվերով։Դասակարգել աճման կարգով։
  const int  n = 10;
  int x[n];
  for(int i = 0; i < n; i++){
    x[i] = rand() % 51;
    cout << x[i] << " ";
  }
  cout << endl;
  for(int j = 1; j <= n; j++){
    bool k = true;
      for(int i = 0; i < n - j; i++){
        if(x[i] > x[i + 1]){
          int temp = x[i];
          x[i] = x[i + 1];
          x[i + 1] = temp;
          k = false;
          
          }
        }
            if(k){
              break;
              }
  }
  cout << endl;
 for(int i = 0; i < n; i++){
  cout << x[i] << " ";
 }
  return 0;
}
