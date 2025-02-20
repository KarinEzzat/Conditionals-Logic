   #include <iostream>

int main() {
  int year;
  std::cout<<"Enter the year :";
  std::cin>>year;
  if(year<1000){
    std::cout<<"invalid number";
  }
  else{
     if(year%4==0&&year%100!=0){
      std::cout<<year<<" is a leap year";
    }
    else if(year%400==0){
      std::cout<<year<<" is a leap year";
    }
    else{
      std::cout<<year<<" is not a leap year";
    }
  }
}