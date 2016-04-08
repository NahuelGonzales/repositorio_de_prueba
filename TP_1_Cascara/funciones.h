#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED

/** \brief Permite sumar dos valores de tipo float
 *
 * \param   x, y valores a sumar
 * \param   result variable para guardar el resultado de la suma
 * \return  devuelve el valor de la suma.
 *
 */
int suma(float x, float y)
{
    float result;
    result=x+y;
    return result;
}


/** \brief Permite restar dos valores de tipo float
 *
 * \param   x, y valores a restar
 * \param   result variable para guardar el resultado de la resta
 * \return  devuelve el valor de la resta
 *
 */
int resta(float x, float y)
{
    float result;
    result=x-y;
    return result;
}


/** \brief Permite la division de dos valores de tipo float
 *
 * \param   x, y valores a ser divididos
 * \param   result variable para guardar el resultado de la division
 * \return  devuelve el valor de la division
 *
 */
int division(float x, float y)
{
    float result;
    result=x/y;
    return result;
}


/** \brief Permite multiplicar dos valores de tipo float
 *
 * \param   x, y valores a ser multiplicados
 * \param   result variable para guardar el resultado de la multiplicacion
 * \return  devuelve el valor de la multiplicacion
 *
 */
int multiplicacion(float x, float y)
{
    float result;
    result=x*y;
    return result;
}


int factorial(int x)
{
    int resp;
    if(x==1)
    {
       resp=1;
    }
        else
        {
            resp=x*factorial(x-1);
        }

return (resp);
}
