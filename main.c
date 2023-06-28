#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 1) Suponga que un individuo desea invertir su capital en un banco
   //y desea saber cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.
   //CODIGO:

   /* float capital;
   float multi;
   float div;

   printf("Ingrese su capital a invertir: \n ");
   scanf("%f", &capital);

   multi = capital * 2;
   div = multi / 100;

   printf("Su interes a ganar es de: %f", div);

   */

   // 2) Una tienda ofrece un descuento del 15% sobre el total de la compra
   // y un cliente desea saber cuánto deberá pagar finalmente por su compra.

   //CODIGO:

   /* float totalCompra;
   float multi;
   float div;
   float resultado;

   printf("Ingrese el total de la compra: \n" );
   scanf("%f", &totalCompra);

   multi = totalCompra * 15;

   div = multi / 100;

   resultado = totalCompra - div;

   printf("Su descuento es de: $ %f \n", div);

   printf("Usted debera pagar: $ %f \n", resultado);
   */

   //Un maestro desea saber qué porcentaje de hombres y que
   // porcentaje de mujeres hay en un grupo de estudiantes.

   //CODIGO:

  /* int mujeres, hombres, resta, suma;
   float multi, div;

   printf("Ingrese la cantidad de mujeres: \n");
   scanf("%i", &mujeres);

   printf("Ingrese la cantidad de hombres: \n");
   scanf("%i", &hombres);

   suma = mujeres + hombres;
   multi = mujeres * 100;
   div = multi / suma;

   printf("El porcentaje de mujeres es: %.0f \n", div); //%.0 sirve para que un real no te aparezcan los decimales.

   resta = 100 - div;

   printf("El porcentaje de hombres es: %i ", resta);
   */

   //Determinar si un alumno aprueba o reprueba un curso,
   //sabiendo que aprobará si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.

   //CODIGO:

  /* float nota1, nota2,nota3,suma, promedio;

   printf("Ingrese nota 1: \n");
   scanf("%f", &nota1);

   printf("Ingrese nota 2: \n");
   scanf("%f", &nota2);

   printf("Ingrese nota 3: \n");
   scanf("%f", &nota3);

suma = nota1 + nota2 + nota3;

promedio = suma / 3;

if(promedio >= 7){
    printf("Su promedio es: %.2f \n", promedio);
    printf("El alumno esta aprobado. \n");


}else{
printf("Su promedio es: %.2f \n", promedio);
printf("El alumno esta reprobado. \n");
}
*/


//En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5000
//¿Cuál será la cantidad que pagará una persona por su compra?

//CODIGO:

/* float total_Compra, descuento, total_Pagar;

printf("Ingrese el total de su compra: \n");
scanf("%f", &total_Compra);

if(total_Compra >= 5000){
    descuento = (total_Compra * 20) / 100;
    total_Pagar = total_Compra - descuento;
    printf("Su descuento es de: $ %f \n", descuento);
    printf("Su total a pagar: $ %f \n", total_Pagar);
}else{
    printf("Su compra es menor a $5000. No se aplica el descuento \n");
    printf("Su total a pagar es: $ %.2f ", total_Compra);
}
*/

//Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
//Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas se le paga $300
//por cada una de las primeras 40 horas y $400 por cada hora extra.

//CODIGO:

/*float hora, horas,totalDeHorasExtra, horaExtra, multi, suma, SalarioSemanal;

printf("Ingrese la cantidad de horas trabajadas: ");
scanf("%f", &horas);

hora = 300;
horaExtra = 400;

if(horas >= 40){
    totalDeHorasExtra = horas - 40;

    multi = totalDeHorasExtra * 400;
    suma = (40 * 300) + multi;

    printf("Su total de horas extras suman: $ %.2f \n", multi);
    printf("Su salario semanal total es de: $ %.2f \n ", suma);

}else{
    SalarioSemanal = horas * hora;
    printf("Su salario semanal es de: $ %.2f", SalarioSemanal);
    }
    */


//Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente

//CODIGO:

/* int num1, num2, i;

printf("Ingrese el primer numero: ");
scanf("%i", &num1);

printf("Ingrese el segundo numero: ");
scanf("%i", &num2);

if(num1 < num2){
    printf("%i - %i", num1, num2);
}else{
printf("%i - %i", num2, num1);
}
*/

//Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
//Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra y
//si son menos de tres camisas un descuento del 10%

//CODIGO:

/* int camisas, precio;
float descuento20,total1, monto, descuento10, total2, monto2;

printf("Ingrese la cantidad de camisas: ");
scanf("%i", &camisas);

precio = 2000;

if(camisas >= 3){
        monto = camisas * precio;
    descuento20 = (monto * 20) / 100;
    total1 = (monto - descuento20);

    printf("El total con descuento del 20 es de: $%.0f \n", total1);
}else{
    monto2 = camisas * precio;
    descuento10 = (monto2 * 10) / 100;
    total2 = (monto2 - descuento10);
    printf("El total con descuento del 10 es de: $%.0f \n", total2);
}
*/

//Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume.
//CODIGO:

/* int num1, num2, multi, suma, resta;

printf("Ingrese un numero: ");
scanf("%i", &num1);

printf("Ingrese otro numero: ");
scanf("%i", &num2);

if(num1 == num2){
    multi = num1 * num2;
    printf("Resultado: %i \n", multi);
}
else if(num1 > num2){
    resta = num1 - num2;
    printf("Resultado: %i \n", resta);
}
else {
    suma = num1 + num2;
    printf("Resultado: %i \n", suma);
}
*/

//Leer tres números diferentes e imprimir el número mayor de los tres.
//CODIGO:

/* int num1, num2, num3;

printf("Ingrese un numero: ");
scanf("%i", &num1);

printf("Ingrese otro numero: ");
scanf("%i", &num2);

printf("Ingrese otro numero: ");
scanf("%i", &num3);

if((num1 < num2) && (num2 < num3)){

    printf("El mayor es: %i", num3);
}
else if(num1 < num2){
    printf("El mayor es: %i", num2);
}
else{
    printf("El mayor es: %i", num1);
}
*/

//Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1
//CODIGO:

/* float promedio, cali, acumulador;
int i;
acumulador = 0;
for(i = 0; i <= 7; i++){
    printf("Ingrese la calificacion: ");
    scanf("%f", &cali);
    acumulador = acumulador + cali;
}
  promedio = acumulador / 7;

  printf("Su promedio es de: %.2f", promedio);
*/

//Leer 10 números y obtener su cubo y su cuarta.
/* int num, i, cubo, cuarta;



for(i = 0; i < 10; i++){
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    cubo = num * num * num ;
    cuarta = num * num * num * num ;

    printf("El cubo es: %i \n", cubo);
    printf("Su cuarta es: %i \n", cuarta);
}
*/


//Leer 10 numeros e imprimir solamente los numeros positivos

/* int i, num;

for(i = 0; i < 10; i++){
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if(num > 0){
        printf("Numero positivo: %i \n", num);
    }else{
        printf("No se aceptan numeros negativos \n");
    }
}
*/


//Leer 10 numeros negativos y convertirlos en positivo e imprimir dichos numeros.

/* int i;
float num, operacion;


for(i = 0; i < 15; i++){
    printf("Ingrese un numero negativo: ");
    scanf("%f", &num);
    operacion = num * -1;
    printf("Numero: %.0f \n", operacion);
}
*/

//Suponga que tiene un conjunto de calificaciones de un grupo de 40 alumnos.
//Realizar un algoritmo para calcular la calificacion promedio y la calificacionh mas baja del grupo.
/*
int contador, nota, notaMasBaja, acumulador;
float promedio;

contador = 1;
acumulador = 0;

while(contador <= 5){
    printf("Ingrese la calificacion: \n");
    scanf("%i", &nota);
    printf("\n");

    notaMasBaja = nota;

if(nota <= 10){
   contador = contador + 1;

    acumulador = acumulador + nota;

    promedio = acumulador / 3;
}else{
    printf("Nota no valida \n");
    printf("\n");
 }
}

printf("El promedio es: %.2f \n", promedio);

if(nota <= 10){
    printf("La nota mas baja es: %i \n" , notaMasBaja);
}

*/




//Calcular e imprimir la tabla de multiplicar de un numero cualquiera. Imprimir el multiplicando, el multiplicador y el producto.

/* int i, num, resultado;
i = 1;
printf("Ingrese el multiplicando: \n");
scanf("%i",&num);
printf("\n");

for(i = 1; i <= 10; i++){

resultado = num * i;

printf(" %i x %i = %i \n", num, i, resultado);

}
*/






}
