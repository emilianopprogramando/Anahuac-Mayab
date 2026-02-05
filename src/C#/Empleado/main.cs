using System;

class testEmpleado
{
    static void Main()
    {
        Empleado objeto1 = new Empleado();
        objeto1.imprimir();

        Empleado objeto2 = new Empleado("Donald Trump", 2025, 400000.99);
        objeto2.imprimir();

        /*** Parte 2 - Solicitar datos al usuario ***/
        string nom;
        int anio;
        double sal;

        Console.WriteLine("Ingresa el nombre del empleado:");
        nom = Console.ReadLine();

        Console.WriteLine("Ingrese el año de contratacion:");
        anio = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Ingrese el salario:");
        sal = Convert.ToDouble(Console.ReadLine());

        Empleado objeto3 = new Empleado(nom, anio, sal);
        objeto3.imprimir();
    }
}
