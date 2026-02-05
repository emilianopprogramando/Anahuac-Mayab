using System;

class testEmpleado
{
    static void Main()
    {
        // Objeto con constructor vacío
        Empleado objeto1 = new Empleado();
        Console.WriteLine(objeto1.ToString());
        Console.WriteLine("Salario anual: " + objeto1.calcularSalario());

        Console.WriteLine();

        // Objeto con constructor con parámetros
        Empleado objeto2 = new Empleado("Donald Trump", 2025, 400000.99);
        Console.WriteLine(objeto2.ToString());
        Console.WriteLine("Salario anual: " + objeto2.calcularSalario());

        Console.WriteLine();

        /*** Parte 2 - Solicitar datos al usuario ***/
        string nombre;
        int anioContratacion;
        double salario;

        Console.WriteLine("Ingresa el nombre del empleado:");
        nombre = Console.ReadLine();

        Console.WriteLine("Ingrese el año de contratacion:");
        anioContratacion = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Ingrese el salario:");
        salario = Convert.ToDouble(Console.ReadLine());

        Empleado objeto3 = new Empleado(nombre, anioContratacion, salario);
        Console.WriteLine(objeto3.ToString());
        Console.WriteLine("Salario anual: " + objeto3.calcularSalario());
    }
}
