#ifndef EJERCICIO3_H_INCLUDED
#define EJERCICIO3_H_INCLUDED

int esprimo(int x)
{
    int primo=0, divs=0;

    for(divs=2; divs<x-1 && primo==0;divs++)
        {
            if(x%divs==0)
                primo=1;
        }

    return primo;
}

#endif // EJERCICIO3_H_INCLUDED
