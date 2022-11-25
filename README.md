> # Practica 1
> 
> ### Manejo de tiendas
> 
> #### Desarrollo de Software para una tienda y bodegas

# Objetivos

### Generales:

+ Familiarizar a los compañeros con el lenguaje de programación C++.
+ Aplicar los conocimientos básicos de programación adquiridos a lo largo del curso.
+ Elaborar la lógica para presentar una solución a la propuesta planteada.

### Específicos:

+ Construir aplicaciones simples de consola.
+ Implementar sentencias de control: ciclos, vectores y arreglos.
+ Aplicar programación estructurada.
+ Aplicar conceptos de diagramas de flujo.

# Descripción General

### Definición:

La práctica consiste en el desarrollo de una aplicación de consola para el control de productos y administradores de una tienda y sus bodegas, carga de productos, traslados de productos entre bodegas, modificar el inventario, visualizar el inventario y reportes.

### Menú:

El administrador debe tener un menú donde se puedan tener las siguientes opciones: 

+ Login: al ingresar al sistema debe de ingresar su nombre de usuario y contraseña.
  + Administrador
    + Bodegas
      + Carga de productos
      + Modificar inventario
      + Ver inventario actual de la bodega
    + Traslado de productos entre bodegas
    + Agregar, modificar y eliminar administradores
    + Reportes
+ Salir

> Nota: Cada vez que el administrador ingrese a un submenú debe existir la opción de "regresar al menú anterior"

### Bodegas:

La tienda cuenta con 10 bodegas, cada bodega puede almacenar cualquier tipo de de producto y cada bodega podra contener solamente 25 productos distintos.

##### Traslado:

Las bodegas podrán trasladarse productos(con existencias) - explicado en la parte de Administrador.

##### Modificar inventario:

Se podrá modificar el stock de los productos - explicado en la parte de Administrador.

##### Producto:

De cada producto se desea almacenar lo siguiente:

+ Nombre del producto
+ Stock o existencia
+ Precio
+ Categoría

### Administrador:

De un administrador se desea guardar el nombre de usuario y la contraseña.

Deberá existir por defecto un administrador con el nombre de usuario: **admin** y contraseña: **admin**. Solo se podrán almacenar 30 administradores en el sistema.

+ Agregar, modificar y eliminar administradores.
  
  + **Agregar:** El administrador podrá agregar administradores y se podrá hacer de dos maneras:
    + **Pedir datos en consola:** el nombre de usuario y contraseña.
    + **Cadena de texto:** Se podrán cargar varios administradores por medio de una cadena de texto.
      + La cadena de texto contendrá lo siguiente: 
        + Nombre de usuario: string
        + Contraseña: string
        + **Estructura:** NombreUsuario,Contraseña@NombreUsuario2,Contraseña2
          + El caracter "," delimita el nombre de usuario y la contraseña y si se quieren agregar varios administradores se delimita con la arroba "@"
          + **Ejemplo:** Alejandro,123@Ale,1234@Jorge,Jorge
  + **Modificar:** El administrador podrá modificar los atributos del administrador
  + **Eliminar:** El administrador podrá eliminar a administradores.

+ Bodegas.
  
  + Carga de productos en las 10 bodegas
    
    + Se podrán cargar los productos a las 10 bodegas, se hará por medio de una cadena de texto y por solicitud de datos en consola.
    
    + La cadena de texto contendrá lo siguiente:
      
      + Número de bodega: int
      
      + Nombre del producto: string
      
      + Stock: int
      
      + Precio: float
      
      + Categoría: string
        
        > cada atributo estará separado por el carácter ";" y cada nuevo producto será separado por el carácter "$"
      
      + **Estructura:**
        
        + NúmeroBodega;NombreProducto;Stock;Precio;Categoría$NumeroBodega2;NombreProducto2;Stock2;Precio2;Categoría2
      
      + **Ejemplo:**
        
        + 1;Sueter;20;85.52;ropa\$Gelatina;13;9.85;alimentos$Mouse;3;95.99;electronicos
    
    + Solicitar datos de consola
      
      + Se podrá agregar un nuevo producto a una bodega específica, se deberá solicitar en consola los datos correspondientes para ingresar un nuevo producto.
  
  + Modificación de inventario
    
    + Se podrá solicitar el número de bodega a la cual se le desea modificar el inventario (se debe veríficar que el número de bodega exista y que no sea un número negativo, ni letra ni simbolos, ni espacios).
    + Seguido se ingresará un nombre de producto, seguido se ingresará la cantidad, la cual si es negativa se a va a restar del stock actual del producto, y si es postiva se va a sumar, se debe verificar que no se ingresen letras, espacios ni simbolos en esta sección por lo que debéra indicar un error y permitir ingresar la cantidad nuevamente.
    + **Ejemplo:**
      + Si el articulo tiene 10 en existencia y se ingresa un valor -100 debe indicar que no se puede realizar la operación.
  
  + Traslado de mercadería:
    
    + En esta sección se podrán trasladar productos entre bodegas, por lo que se solicitarán los siguientes datos: 
      + nombre bodega origen: string
      + nombre bodega destino: string
      + nombre artículo: string
      + cantidad: int
        se deberá validar que en cada uno de los datos que se piden solo se pueda ingresar el tipo correspondiente. Además, que se tendrá la restricción que si un artículo en la bodega origen no cuenta con 10 o mas existencias no se deberá mostrar un mensaje indicando que no puede realizarse el traslado. Al terminar el traslado se le preguntará al usuario si desea realizar un nuevo traslado. Si la respuesta es negativa se enviará al menú principal del administrador.
  
  + Ver inventario actual de cada bodega
    
    + El administrador podrá ver el inventario actual de cada bodega, pero puede elegir de que bodega quiere visualizar su inventario.
    + El inventario se debe mostrar de la siguiente forma: 
      **Bodega1**

| No  | Producto             | Stock | Precio | Categoría              |
| --- | -------------------- | ----- | ------ | ---------------------- |
| 1   | Suéter               | 20    | 85.52  | Ropa                   |
| 2   | Llantas de bicicleta | 3     | 99.99  | Repuestos de bicicleta |
| 3   | Coca cola            | 75    | 13     | Alimentos              |

+ Reportes: 
  1. **Productos con X stock o existencias:** Este reporte debe de pedir el número de stock que quiere ver, y debe mostrar todos los productos que tengan el número de stock ingresado.
  2. **Productos que se trasladaron por categoría:** Este reporte debe pedir la categoría que quiere ver y deberá mostrar todos los productos de esa categoría que se trasladaron.
  3. **Productos trasladados por administrador:** Este reporte deberá mostrar todos los administradores y mostrar cuantas veces trasladaron productos.
  4. **Bodega con menor cantidad de todos los productos:**
     + Ejemplo: "La bodega X tiene Y productos en total".
  5. **Bodega con mayor cantidad de productos:** 
     + Ejemplo: "La bodega X tiene Y productos en total".
  6. **Bodega con menor cantidad de productos (separados por cada artículo):**
     + Ejemplo: "El artículo X tiene Y unidades en la bodega Z".
  7. **Bodega con mayor cantidad de productos (separadas por cada artículo):**
     + Ejemplo: "El artículo X tiene Y unidades en la bodega Z".
  8. **Gráfico de distribución de artículos:** se ingresará el nombre del artículo y se creará una representación con el signo # separado por coma.
     **Ejemplo:**

| Bodega    | Suéter           |
| --------- | ---------------- |
| Bodega 1  | #, #, #, #       |
| Bodega 2  | #, #, #, #, #, # |
| Bodega 3  | #, #, #          |
| Bodega 4  | #, #, #, #       |
| Bodega 5  | #, #, #          |
| Bodega 6  |                  |
| Bodega 7  | #, #             |
| Bodega 8  | #, #, #, #       |
| Bodega 9  | #                |
| Bodega 10 |                  |

+ Regresar al menú principal: Regresará al menú principal (para logearse o salir).

# Requerimientos para el desarrollo de la práctica

### Documentación

+ Diagrama de flujo general del programa.
+ Manual Técnico (descipción de los metodos creados)
  + Introducción
  + Plataforma de ejecución
  + Diccionario de método usados
+ Manual de usuario: Describirá como funciona la aplicación y específicará que tipo de datos pueden ser ingresados y en que formato.

### Restricciones

+ La interacción entre el sistema y el usuario será por medio del teclado.
+ Para todas las entradas de teclado en la consola se debe validar lo siguiente:
  + Que no acepte dejarlo en blanco.
  + Solo debe aceptar el tipo de dato que se solicita, por ejemplo, si solicito algún número no se debería permitir ingresar letras.
+ Para poder acceder a los elementos de las matrices o arreglos **NO** se debe hacer con posiciones específicas (matriz[0][1] o matriz[2][3]). Se debe de recorrer la matriz o arreglo con cualquiera de los ciclos de programación: for, while, do-while.
+ Queda prohibido utilizar las librerías para vectores dinámicos en c++, todo vector y arreglo deberá ser implementado por usted.

### Entrega

El enunciado presente se irá realizando durante las clases, de mi parte solicitaré realizar ciertas funcionalidades para comprobar su concimiento y que ustedes puedan empezar a familiarizarse y entender el programa que se va realizando.
