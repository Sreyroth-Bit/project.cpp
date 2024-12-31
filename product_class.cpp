#include<iostream>
using namespace std;

class Product{
    private:
      int id;
      string pName;
      double pPrice;
      int pQty;
    public:
      void setId(int id){
        this->id=id;
      }
      int getId(){
        return this->id;
      }
      void setPName(string pName){
        this->pName=pName;
      }
      string getPName(){
        return this->pName;
      }
      void setPPrice(double pPrice){
        this->pPrice=pPrice;
      }
      double getPPrice(){
        return this->pPrice;
      }
      void setPQty(int pQty){
        this->pQty=pQty;
      }
      int getPQty(){
        return this->pQty;
      }
};
int main(){
    Product product1;
    product1.setId(1);
    product1.setPName("Koka");
    product1.setPPrice(12.2);
    product1.setPQty(2);
    cout<<"Product Id: "<<product1.getId()<<endl;
    cout<<"Product Name: "<<product1.getPName()<<endl;
    cout<<"Product Price: "<<product1.getPPrice()<<endl;
    cout<<"Product Qty: "<<product1.getPQty()<<endl;
    return 0;
}