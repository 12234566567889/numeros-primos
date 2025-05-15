// numeros primos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int n, num; // n es la cantidad de numeros a verificar y num es el numero a verificar si es primo o no
	std::cout << "Ingrese cantidad de numeros que quirasaber si son primos: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) // bucle para verificar los n numeros
	{
		std::cout << "Ingrese el numero a verificar: ";
		std::cin >> num; // se pide el numero a verificar
		bool primo = true; // se asume que el numero es primo
		if (num < 2) // si el numero es menor que 2 no es primo
		{
			primo = false;
		}
		else
		{
			for (int j = 2; j <= num / 2; j++) // bucle para verificar si el numero es primo
			{
				if (num % j == 0) // si el numero es divisible por j no es primo
				{
					primo = false;
					break; // se sale del bucle si se encuentra un divisor
				}
			}
		}
		if (primo) // si el numero es primo se imprime un mensaje
			std::cout << num << " es primo" << std::endl;
		else // si el numero no es primo se imprime un mensaje
			std::cout << num << " no es primo" << std::endl;
	}
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
