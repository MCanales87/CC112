#include <iostream>
//~ #include <cstdlib>

using namespace std;
int ack_nonrecursive(int m, int n) {
    int value[n];
    size_t size = 0;

    for (;;) {
        if (m == 0) {
            n++;
            if (size-- == 0) {
                break;
            }
            m = value[size];
            continue;
        }

        if (n == 0) {
            m--;
            n = 1;
            continue;
        }

        size_t index = size++;
        value[index] = m - 1;
        n--;
    }

    return n;
}
int Ackerman(int m, int n)
{
    if(m==0)
      return n+1;
    else
    {
        if(n==0)
           return Ackerman(m-1, 1);
        else
           return Ackerman(m-1, Ackerman(m, n-1));
    }
}
int main()
{
    int m, n, num,num2 ;

    cout<<"\n         FUNCION DE ACKERMAN \n\n";

    cout<<"Ingrese <m>: ";
    cin>> m ;
    cout<<"Ingrese <n>: ";
    cin>> n ;
    
    num = Ackerman(m,n);
    num2 = ack_nonrecursive(m,n);
    
    cout<<"\nEl numero es: "<< num << "," <<num2<<endl;
    
    return 0;
}
