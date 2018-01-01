#include <iostream>
using namespace std
int main ()
{
   float p_Amount,n_Year,i_Rate,int_Amount;3
   cout<<"Enter the principal amount in Rupees:;
   cin>>p_Amount;
   cout<<"Enter the number of years of deposit:";
   cin>>n_Year;
   cout<<"Enter the rate of interest in percentage:"
   cin>>i_Rate;
   int_Amount=p_Amount*n_Year*i_Rate/100;
   cout <<"Simple interest for the principal amount
   <<p_Amount
   <<"Rupees for a period of"<<n_Year
   <<"years at the rate of interest"<<i_Rate
   <<"is"<<int_Amount<<"Rupees";
   return 0;
}  