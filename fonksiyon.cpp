using namespace std;

int main(){
  setlocale(LC_ALL,"Turkish");
  int t;
  cout<<"Bir sayı Girin:";
  cin>>t;


switch (t<0) {
  case 1:
  for ( i = 0; i < 4; i++) {
    i=1;
    break;
  }

  case 2:
  i=t;
  break;

  default:
  std::cout << "Fonksiyon'daki i değeri" << i;
}


}
