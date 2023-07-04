#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13

using namespace std;

void menu_principal();
void menu_arrays();
void menu_pilas();
void menu_colas();
void menu_arboles();
void gotoxy(int x, int y){
 
 HANDLE hcon;
 hcon=GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;
 dwPos.X = x;
 dwPos.Y= y;
 SetConsoleCursorPosition(hcon,dwPos);
}

int menu(const char *titulo, const char *opciones[], int n);

int main ()
{
	system ("color 12");
	menu_principal();
	cin.get();
	cin.get();
	return 0;
}
void menu_principal()
{
	bool repite = true;
	int opcion;
	
	//titulo y opciones menu principal
	const char *titulo = "MENU PRINCIPAL";
	const char *opciones[] = {"Arrays", "Pilas", "Colas", "Arboles", "Salir"};
	int n = 5;
	do {
		opcion = menu(titulo, opciones, n);
		
		// Alternativa
		switch (opcion){
			
			case 1:
				menu_arrays();
				break;
			
			case 2:
				menu_pilas();
				break;
				
			case 3:
				menu_colas();
				break;
				
			case 4:
				menu_arboles();
				break;
				
			case 5:
				repite = false;
				break;
		}
	} while (repite);
}

void menu_arrays()
{
	bool repite = true;
	int opcion;
	
	const char *titulo = "MENU ARRAYS";
	const char *opciones[] = {"Introduccion", "Conceptos fundamentales", "Operaciones y funcionalidades", "Implementacion", "Ejemplos practicos", "Casos de uso", "Usos de Arrays en diferentes propositos", "Rendimiento y complejidad", "Regresar"};
	int n = 9;
	do {
		opcion = menu(titulo, opciones, n);
		
		// Alternativa
		system("cls");
		switch (opcion){
			
			case 1:
				cout << "Los Arrays, tambien conocidos como arreglos o matrices, son una estructura fundamental en programacion y manejo de datos. Representan una coleccion ordenada de elementos del mismo tipo, que se almacenan en una secuencia contigua en la memoria. Los Arrays proporcionan una forma eficiente de almacenar y acceder a multiples valores relacionados, lo que los convierte en una herramienta fundamental en el desarrollo de aplicaciones y algoritmos." << endl << endl << endl;
				system ("pause");
				break;
			
			case 2:
				cout << "DEFINICION: Un Array es una estructura de datos que permite almacenar y organizar una coleccion de elementos del mismo tipo en una secuencia contigua en la memoria. Cada elemento en el Array se identifica mediante un indice numerico, que indica su posicion relativa dentro de la secuencia." << endl << endl;
				cout << "CARACTERISTICAS: " << endl;
				cout << "1. Tamano y longitud:"<< endl << "El tamano de un Array se refiere al numero total de elementos que puede almacenar. La longitud de un Array es la cantidad actual de elementos que contiene en un momento dado. El tamano de un Array generalmente se establece durante su creacion y no puede modificarse posteriormente." << endl << endl;
				cout << "2. Tipos de Datos:"<< endl << "Los elementos de un Array deben ser del mismo tipo de datos, es decir, todos los elementos deben ser del mismo tipo, como enteros, caracteres, booleanos, etc. Esto asegura la homogeneidad de los datos almacenados en el Array." << endl << endl;
				cout << "3. Indices y Acceso a los Elementos:"<< endl << "Los elementos de un Array se acceden mediante un indice numerico. El indice comienza en cero para el primer elemento y se incrementa secuencialmente hasta el ultimo elemento del Array. Por ejemplo, el primer elemento se accede con el indice 0, el segundo con el indice 1, y asi sucesivamente." << endl << endl;
				cout << "4. Operaciones Basicas:"<< endl << "Insercion: Permite agregar un nuevo elemento al Array en una posicion especifica" << endl << "Eliminacion: Permite eliminar un elemento existente del Array." << endl << "Busqueda: Permite buscar un elemento del Array y determinar su posicion o si esta presente en el Array." << endl << "Actualizacion: Permite modificar el valor de un elemento existente en el Array." << endl << endl;
				cout << "VENTAJAS: " << endl;
				cout << "Las ventajas de los Arrays incluyen un acceso directo a los elementos mediante indices, almacenamiento contiguo en memoria para un acceso eficiente, eficiencia en el acceso a los elementos en tiempo constante, tamaño fijo que proporciona una estructura predecible y eficiencia espacial en el uso de memoria." << endl << endl;
				cout << "DESVENTAJAS: " << endl;
				cout << "Las desventajas de los Arrays son su tamaño fijo, lo que impide su crecimiento o reducción dinamica, la costosa insercion y eliminacion de elementos en posiciones intermedias, el posible desperdicio de memoria cuando el tamano del Array es mayor de lo necesario, la falta de flexibilidad para adaptarse a cambios en el tamano o cantidad de elementos y su limitado uso en estructuras de datos mas complejas." << endl << endl;
				system ("pause");
				break;
				
			case 3:
				cout << "OPERACIONES BASICAS: "<< endl;
				cout << "- Declaracion y Creacion: Se define el tipo de datos y se crea un Array con un tamano especifico."<< endl;
				cout << "- Declaracion y Creacion: Se define el tipo de datos y se crea un Array con un tamano especifico." << endl;
				cout << "- Acceso a los Elementos: Los elementos del Array se acceden utilizando indices numericos." << endl;
				cout << "- Modificacion de los Elementos: Se pueden modificar los valores de los elementos existentes en el Array." << endl;
				cout << "- Obtencion del Tamano y Longitud: Se puede obtener el tamano del Array, que es el numero total de elementos que puede almacenar, y la longitud del Array, que es la cantidad actual de elementos que contiene." << endl;
				cout << "- Recorrido del Array: Se puede iterar a traves de los elementos del Array utilizando bucles, como un bucle for o while. " << endl;
				cout << "- Busqueda de Elementos: Se puede buscar un valor especifico en el Array comparando cada elemento con el valor buscado." << endl;
				cout << "- Insercion de Elementos: Se pueden insertar nuevos elementos en posiciones especificas del Array, desplazando los elementos existentes." << endl;
				cout << "- Eliminacion de Elementos: Se pueden eliminar elementos del Array, ya sea eliminando un elemento especifico o desplazando los elementos restantes." << endl;
				cout << "- Copia de Arrays: Se pueden copiar los elementos de un Array a otro Array, ya sea completamente o solo una parte especifica." << endl;
				cout << "FUNCIONALIDADES AVANZADAS: "<< endl;
				cout << "- Ordenamiento de Elementos: Se pueden aplicar algoritmos de ordenamiento, como el algoritmo de ordenamiento de burbuja o el de ordenamiento rapido, para reorganizar los elementos del Array en un orden especifico" << endl;
				cout << "- Busqueda y Recuperacion Eficiente: Se pueden utilizar algoritmos de busqueda mas eficientes, como la busqueda binaria, para encontrar elementos en Arrays ordenados." << endl;
				cout << "- Operaciones matematicas: Se pueden realizar operaciones matematicas en los elementos del Array, como sumar todos los elementos, calcular el promedio, encontrar el maximo o minimo, entre otros." << endl;
				cout << "- Manejo de Matrices Multidimensionales: Los Arrays pueden tener mas de una dimension, lo que permite trabajar con matrices multidimensionales, como matrices bidimensionales (tablas) o matrices tridimensionales." << endl;
				cout << "- Almacenamiento de Datos Complejos: Los Arrays pueden almacenar tipos de datos complejos, como estructuras o clases, lo que permite una mayor flexibilidad y capacidad para almacenar y manipular informacion mas compleja." << endl;
				cout << "-  Redimensionamiento Dinamico: En algunos lenguajes de programacion, como C++ y Java, se pueden utilizar estructuras de datos como los ArrayList o los Vectores, que proporcionan un redimensionamiento dinamico de los Arrays, lo que permite agregar o eliminar elementos sin tener que preocuparse por el tamano fijo del Array." << endl;
				cout << "- Operaciones de Agregacion y Transformacion: Se pueden aplicar operaciones de agregacion, como la suma total de los elementos o el calculo del producto, asi como operaciones de transformacion, como la aplicacion de una funcion a cada elemento del Array." << endl;
				cout << "- Analisis de Datos: Los Arrays pueden utilizarse para el analisis de datos, como la generacion de histogramas, el calculo de estadisticas descriptivas o la aplicacion de algoritmos de aprendizaje automatico." << endl;
				system ("pause");
				break;
				
			case 4:
				cout << "IMPLEMENTACION: "<< endl;
				cout << "Descripcion del enfoque general para implementar la estructura de datos: " << endl;
				cout << "El enfoque general para implementar la estructura de datos de los Arrays se basa en la utilizacion de variables estaticas o dinamicas en el lenguaje de programacion elegido. Dependiendo del lenguaje y de los requisitos del proyecto, se pueden seguir diferentes pasos para llevar a cabo la implementacion de los Arrays." << endl << endl << "Algoritmos y estructuras relacionadas: Los algoritmos y estructuras de datos relacionadas con los Arrays son fundamentales para su manipulacion y optimizacion en diversos contextos." << endl << endl << "Algoritmos de busqueda: Se utilizan para buscar un elemento especifico dentro de un Array. Los algoritmos de busqueda lineal y busqueda binaria son dos ejemplos populares. La busqueda lineal recorre secuencialmente el Array hasta encontrar el elemento deseado, mientras que la busqueda binaria se aplica solo en Arrays ordenados, dividiendo el espacio de busqueda por la mitad en cada iteracion." << endl << endl << "b. Algoritmos de ordenamiento: Se utilizan para reorganizar los elementos de un Array en un orden especifico. Algunos algoritmos de ordenamiento comunes son el ordenamiento de burbuja, el ordenamiento por insercion, el ordenamiento por seleccion y el ordenamiento rapido. Estos algoritmos permiten organizar los elementos del Array de manera ascendente o descendente segun un criterio determinado." << endl;
				system ("pause");
				break;
			case 5:
				cout << "A continuacion se abrira el IDE Dev-C++"<< endl;
				cout << "Abajo tienes las instrucciones para crear tu primer ejercicio de Arrays"<< endl;
				cout << "2. Haz clic en \"Archivo\" en la barra de menu superior." << endl;
    			cout << "3. Selecciona \"Nuevo\" en el menu desplegable." << endl;
    			cout << "4. Aparecera un submenu con varias opciones. Elige \"Archivo de codigo fuente de C++\"." << endl;
  				cout << "5. Se abrira una nueva ventana o pestaña en el editor de Dev-C++. Aqui es donde puedes comenzar a escribir tu codigo." << endl;
    			cout << "6. Escribe #include <iostream> en la parte superior del archivo. Esta linea de codigo incluye la libreria `iostream`, que permite imprimir y leer datos desde la consola." << endl;
    			cout << "7. A continuacion, escribe `#include <array>` en una nueva línea. Esta línea de código incluirá la librería `array`, necesaria para trabajar con arrays en C++." << endl;
    			cout << "8. Ahora puedes comenzar a escribir el codigo para tu ejercicio basico de arrays. Puedes declarar un array utilizando la sintaxis *array<tipo, tamaño> nombreArray;*." << endl;
    			cout << "9. Luego, puedes asignar valores a los elementos del array utilizando la sintaxis `nombreArray[posicion] = valor;`." << endl;
    			cout << "10. Utiliza la funcion COUT para imprimir los elementos del array y otros mensajes en la consola." << endl;
    			cout << "11. Una vez que hayas terminado de escribir tu codigo, puedes guardarlo haciendo clic en \"Archivo\" en la barra de menu y luego seleccionando \"Guardar\" o \"Guardar como\"." << endl;
    			cout << "12. Se abrira una ventana de dialogo para que puedas elegir la ubicación y el nombre del archivo." << endl;
    			cout << "13. Haz clic en \"Guardar\" para guardar el archivo en la ubicacion seleccionada." << endl;
    			cout << "14. Ahora puedes compilar y ejecutar tu programa para ver los resultados." << endl << endl << endl;
				cout << "Resuelve los siguientes ejercicios: " << endl << endl << endl;
				cout << "Escriba un programa que acepte un arreglo, imprima los datos tal y como fueron ingresados y luego en orden inverso." << endl;
				cout << "Escriba un programa que acepte dos arreglos unidimensionales, los sume y el resultado debe almacenarse en un tercer arreglo. (A=B+C)." << endl;
				cout << "Escriba un programa que cuente la cantidad de elementos positivos de un arreglo e imprima dicho valor.	" << endl;			
				system("C:\\Users\\Jafet\\Desktop\\Dev-C++.lnk");
				system ("pause<nul");
				break;
			case 6:
				cout << "Los Arrays tienen diversas aplicaciones en areas como el procesamiento de imagenes, analisis de datos y estadisticas, juegos y graficos por computadora, aplicaciones cientificas y matematicas, y programacion de bajo nivel. Beneficios incluyen acceso rapido a datos, manipulacion eficiente, representacion eficiente de objetos y datos numericos, y acceso directo a datos en entornos de programacion de bajo nivel." << endl;
				system("pause");
				break;
			case 7:
				cout << "Los Arrays tienen varios usos en diferentes propositos, como sistemas de gestion de tareas, gestores de contactos, sistemas de correo electronico, editores de texto y aplicaciones de redes sociales. Proporcionan acceso rapido a los elementos, pero pueden tener un rendimiento suboptimo en busquedas lineales o inserciones y eliminaciones arbitrarias." << endl;
				system("pause");
				break;
			case 8:
				cout << "Los Arrays ofrecen un acceso rapido y eficiente a los elementos y son ideales cuando se necesita un acceso directo a traves de indices. Sin embargo, la busqueda lineal, la insercion y eliminacion en posiciones arbitrarias pueden tener un rendimiento suboptimo. Ademas, se debe tener cuidado con el uso de memoria y considerar el tamaño maximo del Array. Siempre es importante evaluar las necesidades especificas del problema y seleccionar la estructura de datos mas adecuada en terminos de rendimiento y complejidad." << endl;
				system("pause");
				break;
			case 9:
				repite = false;
				break;
		}
	} while (repite);	
}
void menu_pilas()
{
	bool repite = true;
	int opcion;
	
	const char *titulo = "MENU PILAS";
	const char *opciones[] = {"Introduccion", "Conceptos fundamentales", "Operaciones y funcionalidades", "Implementacion", "Ejemplos practicos", "Casos de uso", "Usos de Pilas en diferentes propositos", "Rendimiento y complejidad", "Regresar"};
	int n = 9;
	do {
		opcion = menu(titulo, opciones, n);
		
		// Alternativa
		system("cls");
		switch (opcion){
			
			case 1:
				cout << "En C++, una pila es una estructura de datos que funciona segun el principio Ultimo en Entrar, Primero en Salir (LIFO). Esto significa que el ultimo elemento que se inserta en la pila es el primero en ser eliminado. Se puede imaginar una pila de platos como una pila, donde los nuevos platos se agregan en la parte superior y solo se puede quitar el plato superior. No se puede quitar un plato que esta debajo de otros platos sin quitar el plato superior." << endl;
				system("pause");
				break;
			
			case 2:
				cout << "DEFINICION: Una pila es una estructura de datos que consta de una serie de datos, en la cual las inserciones y eximiciones se hacen por un extremo, llamada cima, de la pila.  " << endl << endl;
				cout << "CARACTERISTICAS: " << endl;
				cout << " Una pila se puede implementar utilizando la clase STACK que se encuentra en la biblioteca estandar." << endl << "Las operaciones fundamentales de una pila son la insercion y eliminacion de elementos, que se realiza en la parte superior de la pila, tambien conocida como cima o top."<< endl << "El ultimo elemento que se inserta en la pila es el primero en ser eliminado. "<< endl << "Las pilas se utilizan comunmente en la programacion para realizar tareas como la reversión de una cadena, la evaluacion de expresiones aritmeticas y la implementacion de algoritmos de busqueda y ordenamiento. "<< endl << "Las pilas se pueden implementar utilizando arreglos o listas enlazadas, lo cual proporciona una interfaz facil de usar para trabajar con pilas." << endl << endl;
				cout << "VENTAJAS: " << endl;
				cout << "Las pilas son una estructura de datos simple y facil de entender." << endl;
				cout << "Son utiles para realizar tareas como la revision de una cadena, la evaluacion de expresiones aritmeticas y la implementacion de algoritmos de busqueda y ordenamiento. " << endl;
				cout << "Son eficientes en terminos de tiempo y espacio, ya que solo se realizan operaciones en la parte superior de la pila." << endl;
				cout << "DESVENTAJAS: " << endl;
				cout << "La creacion de demasiados objetos en la pila puede aumentar el riesgo de debordamiento de la pila. " << endl;
				cout << "El accesoa aleatorio no es posible en una pila. " << endl;
				cout << "Las pilas implementadas con arreglos tienen un tamaño fijo, lo que puede ser una limitacion en algunos casos." << endl;
				cout << "Las pilas pueden ser menos eficientes que otras estructuras de datos en ciertos casos de uso. " << endl;
				system("pause");
				break;
				
			case 3:
				cout << "ELEMENTOS MAS COMUNES: " << endl;
				cout << "Insercion PUSH: Se refiere a la accion de agregar un elemento a la pila. El nuevo elemento se coloca en la parte superior de la pila." << endl;
				cout << "Eliminacion POP: Hace referencia a la accion de quitar el elemento superior de la pila. El elemento eliminado es aquel que se agrego mas recientemente." << endl;
				cout << "Tope TOP: Es el elemento que se encuentra en la parte superior de la pila. Es el elemento al que se accede cuando se realiza una operacion de lectura en la pila sin eliminarlo." << endl;
				cout << "Vacio EMPTY: Se refiere a la condicion en la que la pila no contiene ningun elemento. Es comun verificar si una pila esta vacia antes de realizar una operacion de eliminacion." << endl;
				system ("pause");
				break;
				
			case 4:
				cout << "IMPLEMENTACION: " << endl;
				cout << "- LIFO: La caracteristica principal de una pila es que sigue el principio LIFO, lo que significa que el ultimo elemento agregado sera el primero en ser eliminado. " << endl;
				cout << "-En C++, la implementacion de una pila se puede realizar utilizando la clase stack de la libreria estandar. La clase stack proporciona metodos y funciones integradas para realizar operaciones comunes en pilas." << endl;
				cout << "-Para utilizar una pila, primero debes incluir la libreria <stack>. Luego, puedes declarar una instancia de stack especificando el tipo de datos que deseas almacenar en la pila." << endl;
				system ("pause");
				break;
				
			case 5:
				cout << "A continuacion se abrira el IDE Dev-C++"<< endl;
				cout << "Abajo tienes las instrucciones para crear tu primer ejercicio de Pilas"<< endl;
				cout << "2. Haz clic en \"Archivo\" en la barra de menu superior." << endl;
    			cout << "3. Selecciona \"Nuevo\" en el menu desplegable." << endl;
    			cout << "4. Aparecera un submenu con varias opciones. Elige \"Archivo de codigo fuente de C++\"." << endl;
  				cout << "5. Se abrira una nueva ventana o pestaña en el editor de Dev-C++. Aqui es donde puedes comenzar a escribir tu codigo." << endl;
    			cout << "6. Escribe #include <iostream> en la parte superior del archivo. Esta linea de codigo incluye la libreria `iostream`, que permite imprimir y leer datos desde la consola." << endl;
    			cout << "7. A continuacion, escribe `#include <stack>` en una nueva línea. Esta línea de código incluirá la librería `stack`, necesaria para trabajar con pilas en C++." << endl;
    			cout << "8. Ahora puedes comenzar a escribir el codigo para tu ejercicio basico de pilas. Puedes declarar una pila utilizando la sintaxis *stack<tipo, tamaño> nombrePila;*." << endl;
    			cout << "9. Luego, puedes asignar valores a los elementos de la pila utilizando la sintaxis `nombrePila[posicion] = valor;`." << endl;
    			cout << "10. Utiliza la funcion COUT para imprimir los elementos de la pila y otros mensajes en la consola." << endl;
    			cout << "11. Una vez que hayas terminado de escribir tu codigo, puedes guardarlo haciendo clic en \"Archivo\" en la barra de menu y luego seleccionando \"Guardar\" o \"Guardar como\"." << endl;
    			cout << "12. Se abrira una ventana de dialogo para que puedas elegir la ubicación y el nombre del archivo." << endl;
    			cout << "13. Haz clic en \"Guardar\" para guardar el archivo en la ubicacion seleccionada." << endl;
    			cout << "14. Ahora puedes compilar y ejecutar tu programa para ver los resultados." << endl << endl << endl;
    			cout << "Resuelve los siguientes ejercicios: " << endl << endl << endl;
    			cout << "Escribe un programa que utilice una pila para revertir una cadena de caracteres. Por ejemplo, dada la cadena HOLA, el programa debería imprimir ALOH."<< endl;
    			cout << "Implementa un programa que utilice una pila para verificar si una palabra o frase es un palindromo. Un palindromo es una palabra o frase que se lee igual de adelante hacia atras y de atras hacia adelante. Por ejemplo, RADAR y ANITA LAVA LA TINA son palindromos." << endl;
				system("C:\\Users\\Jafet\\Desktop\\Dev-C++.lnk");
				system("pause<nul");
				break;
				
			case 6:
				cout<< "CASOS DE USO: " << endl;
				cout<< "Las pilas en C++ tienen diversos casos de uso, como la evaluacion de expresiones matematicas, la administracion de llamadas a funciones, la navegacion en arboles y grafos, la implementacion de deshacer y rehacer, la validacion de parentesis y equilibrio de simbolos, y la transformacion de algoritmos recursivos en iterativos. Estos casos de uso demuestran la versatilidad de las pilas como una estructura de datos fundamental en la programacion." << endl;
				system ("pause");
				break;
			case 7:
				cout << "Las pilas se utilizan en una variedad de programas conocidos, como navegadores web, editores de texto, sistemas operativos, calculadoras y sistemas de navegacion GPS. En los navegadores web, se usan para almacenar el historial de navegacion, mientras que en los editores de texto permiten deshacer y rehacer acciones. En sistemas operativos, se utilizan para gestionar llamadas a funciones del sistema, y en calculadoras, para evaluar expresiones matematicas. En sistemas de navegacion GPS, las pilas se emplean para almacenar ubicaciones y rutas. Estos ejemplos destacan la versatilidad y utilidad de las pilas como estructura de datos en diferentes aplicaciones."<< endl;
				system ("pause");
				break;
			case 8:
				cout << "Las pilas en C++ ofrecen un rendimiento eficiente con operaciones de tiempo constante para insertar, eliminar y acceder al elemento superior de la pila. En cuanto a la complejidad, la cantidad de memoria utilizada por una pila es proporcional al número de elementos almacenados. Además, la complejidad temporal depende del contexto de uso y de las operaciones aplicadas a la pila. En general, las pilas son una estructura de datos versátil y de bajo costo en términos de rendimiento y complejidad, lo que las hace adecuadas para una amplia gama de aplicaciones." << endl;
				system ("pause");
				break;
			case 9:
				repite = false;
				break;
		}
	} while (repite);	
}
void menu_colas()
{
	bool repite = true;
	int opcion;
	
	const char *titulo = "MENU COLAS";
	const char *opciones[] = {"Introduccion", "Conceptos fundamentales", "Operaciones y funcionalidades", "Implementacion", "Ejemplos practicos", "Casos de uso", "Usos de Colas en diferentes propositos", "Rendimiento y complejidad", "Regresar"};
	int n = 9;
	do {
		opcion = menu(titulo, opciones, n);
		
		// Alternativa
		system("cls");
		switch (opcion){
			
			case 1:
				cout << "Las colas son una estructura de datos fundamental en programación que sigue el principio de PRIMERO EN ENTRAR, PRIMERO EN SALIR (FIFO, POR SUS SIGLAS EN INGLES). Imagina una fila de personas esperando en un supermercado: la primera persona en llegar es la primera en ser atendida y salir de la fila, mientras que las personas que llegan después se agregan al final de la fila y deben esperar su turno." << endl;
				system ("pause");
				break;
			
			case 2:
				cout << "DEFINICION : Una cola es una estructura de datos que sigue una politica de Primero en Entrar, Primero en Salir (FIFO). Es similar a una fila de personas esperando su turno, donde la persona en llegar es la primera en ser atendida y salir de la fila. Los elementos se agregan al final de la cola y se eliminan desde el frente de la misma." << endl;
				cout << "CARACTERÍSTICAS : "<< endl;
				cout << "Se organizan en una secuencia lineal donde los elementos se insertan al final y se eliminan del frente. Las operaciones básicas son la insercion y eliminacion, y solo se puede acceder al elemento frontal. Las colas tienen un tamaño dinamico, utilizan eficientemente la memoria y se aplican en situaciones que requieren un orden secuencial, como la planificacion de tareas y el manejo de solicitudes."<< endl;
				cout << "VENTAJAS : " << endl;
				cout << "El uso de colas en programacion ofrece varias ventajas significativas. Primero, las colas siguen el principio FIFO, lo que las hace ideales para situaciones en las que el orden de llegada de los elementos es crucial. Ademas, las colas son eficientes para la insercion y eliminacion de elementos tanto en el frente como en la parte trasera de la cola, con una complejidad constante. Esto las convierte en una opcion eficiente para el procesamiento de tareas en paralelo y la gestion de eventos en tiempo real. Ademas, las colas pueden tener tamanos dinamicos, lo que las hace flexibles para adaptarse a diferentes necesidades." << endl;
				cout << "DESVENTAJAS : " << endl;
				cout << "El acceso limitado a elementos no frontales, la posible limitacion de tamano y capacidad, y la ineficiencia en operaciones de busqueda y insercion intermedia son algunas de las desventajas mas comunes. Ademas, puede requerir el uso de estructuras de datos adicionales y pueden no ser la mejor opcion para casos que requieren acceso rapido a elementos en posiciones especificas. Es importante evaluar cuidadosamente las necesidades del problema y considerar otras estructuras de datos si las desventajas de las colas son limitantes."<< endl;
				system ("pause");
				break;
				
			case 3:
				cout << "ELEMENTOS MAS COMUNES: " << endl;
				cout << "Insercion PUSH: Se refiere a la accion de agregar un elemento a la cola. El nuevo elemento se coloca en la parte frontal de la cola." << endl;
				cout << "Eliminacion POP: Hace referencia a la accion de quitar el elemento frontal de la cola. El elemento eliminado es aquel que se agrego mas recientemente." << endl;
				cout << "Frente FRONT: Es el elemento que se encuentra en la parte frontal de la cola. Es el elemento al que se accede cuando se realiza una operacion de lectura en la cola sin eliminarlo." << endl;
				cout << "Vacio EMPTY: Se refiere a la condicion en la que la cola no contiene ningun elemento. Es comun verificar si una cola esta vacia antes de realizar una operacion de eliminacion." << endl;
				system ("pause");
				break;
				
			case 4:
				cout << "IMPLEMENTACION : "<< endl;
				cout << "- FIFO: La caracteristica principal de una cola es que sigue el principio FIFO, lo que significa que el primer elemento agregado sera el primero en ser eliminado. " << endl;
				cout << "-En C++, la implementacion de una cola se puede realizar utilizando la clase queue de la libreria estandar. La clase queue proporciona metodos y funciones integradas para realizar operaciones comunes en colas." << endl;
				cout << "-Para utilizar una cola, primero debes incluir la libreria <queue>. Luego, puedes declarar una instancia de queue especificando el tipo de datos que deseas almacenar en la pila." << endl;
				system ("pause");
				break;
				
			case 5:
				cout << "A continuacion se abrira el IDE Dev-C++"<< endl;
				cout << "Abajo tienes las instrucciones para crear tu primer ejercicio de Colas"<< endl;
				cout << "2. Haz clic en \"Archivo\" en la barra de menu superior." << endl;
    			cout << "3. Selecciona \"Nuevo\" en el menu desplegable." << endl;
    			cout << "4. Aparecera un submenu con varias opciones. Elige \"Archivo de codigo fuente de C++\"." << endl;
  				cout << "5. Se abrira una nueva ventana o pestaña en el editor de Dev-C++. Aqui es donde puedes comenzar a escribir tu codigo." << endl;
    			cout << "6. Escribe #include <iostream> en la parte superior del archivo. Esta linea de codigo incluye la libreria `iostream`, que permite imprimir y leer datos desde la consola." << endl;
    			cout << "7. A continuacion, escribe `#include <queue>` en una nueva línea. Esta línea de código incluirá la librería `queue`, necesaria para trabajar con Colas en C++." << endl;
    			cout << "8. Ahora puedes comenzar a escribir el codigo para tu ejercicio basico de Colas. Puedes declarar un array utilizando la sintaxis *queue<tipo, tamaño> nombreCola;*." << endl;
    			cout << "9. Luego, puedes asignar valores a los elementos de las colas utilizando la sintaxis `nombreArray[posicion] = valor;`." << endl;
    			cout << "10. Utiliza la funcion COUT para imprimir los elementos de la cola y otros mensajes en la consola." << endl;
    			cout << "11. Una vez que hayas terminado de escribir tu codigo, puedes guardarlo haciendo clic en \"Archivo\" en la barra de menu y luego seleccionando \"Guardar\" o \"Guardar como\"." << endl;
    			cout << "12. Se abrira una ventana de dialogo para que puedas elegir la ubicación y el nombre del archivo." << endl;
    			cout << "13. Haz clic en \"Guardar\" para guardar el archivo en la ubicacion seleccionada." << endl;
    			cout << "14. Ahora puedes compilar y ejecutar tu programa para ver los resultados." << endl << endl << endl;
				cout << "Resuelve los siguientes ejercicios: " << endl << endl << endl;
				
				system ("pause<nul");
				break;
				
			case 6:
				cout << "CASOS DE USO : "<< endl;
				cout << "Las colas en C++ se utilizan en una variedad de casos, como el procesamiento de tareas en paralelo, sistemas de mensajes, programacion de eventos, algoritmos de busqueda en grafos, gestion de solicitudes de servicio y manejo de impresiones. Estos casos de uso demuestran la versatilidad de las colas como una estructura de datos que garantiza el orden y la secuencialidad en diferentes aplicaciones." << endl;
				system ("pause");
				break;
			case 7:
				cout << "Las colas se utilizan en una variedad de programas conocidos para gestionar recursos, solicitudes de usuarios y comunicacion de datos. En sistemas operativos, las colas son utilizadas para administrar solicitudes de procesos y recursos. En servidores web y aplicaciones de mensajeria, las colas se utilizan para manejar solicitudes y entregar mensajes en el orden en que se reciben. En sistemas de gestion de impresion y enrutamiento de redes, las colas se utilizan para administrar y priorizar trabajos de impresion y paquetes de datos. Estos ejemplos destacan como las colas desempeñan un papel fundamental en garantizar el orden y la eficiencia en diversos programas y sistemas conocidos."<< endl;
				system ("pause");
				break;
			case 8:
				cout << "Las colas en C++ ofrecen un rendimiento eficiente con operaciones básicas de tiempo constante, como encolar y desencolar. Sin embargo, el rendimiento puede verse afectado por la implementación y las operaciones adicionales realizadas sobre la cola. En cuanto a la complejidad, ocupan una cantidad de memoria proporcional al número de elementos en la cola y tienen complejidad temporal constante para las operaciones básicas. Sin embargo, algunas operaciones más avanzadas pueden tener complejidad lineal. En general, las colas proporcionan un rendimiento razonable y son una estructura de datos útil en una amplia gama de situaciones."<< endl;
				system ("pause");
				break;
			case 9:
				repite = false;
				break;
		}
	} while (repite);	
}
void menu_arboles()
{
	bool repite = true;
	int opcion;
	
	const char *titulo = "MENU ARBOLES";
	const char *opciones[] = {"Introduccion", "Conceptos fundamentales", "Operaciones y funcionalidades", "Implementacion", "Ejemplos practicos", "Casos de uso", "Usos de Arboles en diferentes propositos", "Rendimiento y complejidad", "Regresar"};
	int n = 9;
	do {
		opcion = menu(titulo, opciones, n);
		
		// Alternativa
		system("cls");
		switch (opcion){
			
			case 1:
				
				system ("pause");
				break;
			
			case 2:
				
				system ("pause");
				break;
				
			case 3:
				
				system ("pause");
				break;
				
			case 4:
				
				system ("pause");
				break;
				
			case 5:
				cout << "1. Abre Dev-C++ en tu computadora." << endl;
    			cout << "2. Crea un nuevo archivo de código fuente haciendo clic en \"Archivo\" en la barra de menú y seleccionando \"Nuevo\"." << endl;
    			cout << "3. Selecciona \"Archivo de código fuente de C++\" y haz clic en \"Aceptar\"." << endl;
    			cout << "4. Incluye las librerías necesarias como <iostream>." << endl;
    			cout << "5. Define una estructura para representar un nodo del árbol." << endl;
    			cout << "6. Implementa funciones para realizar operaciones básicas en el árbol, como insertar, buscar y eliminar nodos." << endl;
    			cout << "7. Escribe el código para realizar ejercicios básicos utilizando las funciones y operaciones definidas." << endl;
    			cout << "8. Guarda el archivo de código fuente." << endl;
    			cout << "9. Compila y ejecuta el programa para verificar su funcionamiento." << endl;
    			cout << "10. Prueba diferentes ejercicios y funcionalidades del árbol para asegurarte de su precisión." << endl;
				cout << "Resuelve los siguientes ejercicios: " << endl << endl << endl;
				system ("pause");
				break;
				
			case 6:
				
				system ("pause");
				break;
			case 7:
				
				system ("pause");
				break;
			case 8:
				
				system ("pause");
				break;
			case 9:
				repite = false;
				break;
		}
	} while (repite);	
}
int menu(const char *titulo, const char *opciones[], int n)
{
	int opcionSeleccionada = 1;
	int tecla;
	bool repite = true;
	
	do {
		system ("cls");
		
		gotoxy(5, 3 + opcionSeleccionada); cout << "==>";
		
		//imprime el titulo
		gotoxy(15,2); cout << titulo;
		
		//imprime las opciones
		for (int i = 0; i < n; i++){
			gotoxy (10, 4 + i); cout << i + 1 << ") " << opciones [i];
		}
		
		do {
			tecla = getch();
		} while (tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);
		
		switch (tecla) {
			case TECLA_ARRIBA:
				opcionSeleccionada--;
				
				if (opcionSeleccionada == 0){
					opcionSeleccionada = n;
				}
				break;
			case TECLA_ABAJO:
				opcionSeleccionada++;
				if (opcionSeleccionada > n){
					opcionSeleccionada = 1;
				}
				break;
				break;
			case ENTER:
				repite = false;
				break;
		}
	} while (repite);
	
	
	return opcionSeleccionada;
}
