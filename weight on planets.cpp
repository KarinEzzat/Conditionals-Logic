  #include <iostream>
int main(){
  double weight;
  int planet;
  std::cout<<"what your earth weight is ";
  std::cin>>weight;
  std::cout<<"the number of planet ";
  std::cin>>planet;
  switch(planet){
    case 1:
    std::cout<<"Mercury\n";
    weight*=0.38;
    break;
    case 2:
    std::cout<<"Venus\n";
    weight*=0.91;
    break;
    case 3:
    std::cout<<"Mars\n";
    weight*=0.38;
    break;
    case 4:
    std::cout<<"Jupiter\n";
    weight*=2.34;
    break;
    case 5:
    std::cout<<"Saturn\n";
    weight*=1.06;
    break;
    case 6:
    std::cout<<"Uranus\n";
    weight*=0.92;
    break;
    case 7:
    std::cout<<"Neptune\n";
    weight*=1.19;
    break;
  }
  std::cout<<"your weight on"<<" the planet "<<"is "<<weight;
}