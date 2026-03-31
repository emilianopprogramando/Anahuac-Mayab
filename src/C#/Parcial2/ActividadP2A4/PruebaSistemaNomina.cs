using System;

class PruebaSistemaNomina
{
    public static void Main(string[] args)
    {
        EmpleadoAsalariado empleadoAsalariado = 
            new EmpleadoAsalariado("John", "Smith", "111-11-1111", 800.00);
        EmpleadoPorHoras empleadoPorHoras = 
            new EmpleadoPorHoras("Karen", "Price", "222-22-2222", 16.75, 40);
        EmpleadoPorComision empleadoPorComision = 
            new EmpleadoPorComision("Sue", "Jones", "333-33-3333", 10000, 0.06);
        EmpleadoBaseMasComision empleadoBaseMasComision = 
            new EmpleadoBaseMasComision("Bob", "Lewis", "444-44-4444", 5000, 0.04, 300);
        TrabajadorPiezas trabajadorPiezas = 
            new TrabajadorPiezas("Steve", "Jobs", "555-55-5555", 2.50, 200);

        Console.WriteLine("Empleados procesados por separado:\n");

        Console.WriteLine(empleadoAsalariado + "\ningresos: $" + empleadoAsalariado.Ingresos() + "\n");
        Console.WriteLine(empleadoPorHoras + "\ningresos: $" + empleadoPorHoras.Ingresos() + "\n");
        Console.WriteLine(empleadoPorComision + "\ningresos: $" + empleadoPorComision.Ingresos() + "\n");
        Console.WriteLine(empleadoBaseMasComision + "\ningresos: $" + empleadoBaseMasComision.Ingresos() + "\n");
        Console.WriteLine(trabajadorPiezas + "\ningresos: $" + trabajadorPiezas.Ingresos() + "\n");

        Empleado[] empleados = new Empleado[5];
        empleados[0] = empleadoAsalariado;
        empleados[1] = empleadoPorHoras;
        empleados[2] = empleadoPorComision;
        empleados[3] = empleadoBaseMasComision;
        empleados[4] = trabajadorPiezas;

        Console.WriteLine("Empleados procesados en forma polimorfica:\n");

        foreach (Empleado empleadoActual in empleados)
        {
            Console.WriteLine(empleadoActual); 

            if (empleadoActual is EmpleadoBaseMasComision)
            {
                EmpleadoBaseMasComision empleado = (EmpleadoBaseMasComision) empleadoActual;
                double salarioBaseAnterior = empleado.ObtenerSalarioBase();
                empleado.EstablecerSalarioBase(1.10 * salarioBaseAnterior);
                Console.WriteLine("el nuevo salario base con 10% de aumento es : $" + empleado.ObtenerSalarioBase());
            }

            Console.WriteLine("ingresos $" + empleadoActual.Ingresos() + "\n");
        }

        for (int j = 0; j < empleados.Length; j++)
        {
            Console.WriteLine("El empleado " + j + " es un " + empleados[j].GetType().Name);
        }
    }
}
