from empleadoasalariado import EmpleadoAsalariado
from empleadoporhoras import EmpleadoPorHoras
from empleadoporcomision import EmpleadoPorComision
from empleadobasemascomision import EmpleadoBaseMasComision
from trabajadorpiezas import TrabajadorPiezas

def main():
    empleadoAsalariado = EmpleadoAsalariado("John", "Smith", "111-11-1111", 800.00)
    empleadoPorHoras = EmpleadoPorHoras("Karen", "Price", "222-22-2222", 16.75, 40)
    empleadoPorComision = EmpleadoPorComision("Sue", "Jones", "333-33-3333", 10000, 0.06)
    empleadoBaseMasComision = EmpleadoBaseMasComision("Bob", "Lewis", "444-44-4444", 5000, 0.04, 300)
    trabajadorPiezas = TrabajadorPiezas("Steve", "Jobs", "555-55-5555", 2.50, 200)

    print("Empleados procesados por separado:\n")

    print(f"{empleadoAsalariado}\ningresos: ${empleadoAsalariado.ingresos()}\n")
    print(f"{empleadoPorHoras}\ningresos: ${empleadoPorHoras.ingresos()}\n")
    print(f"{empleadoPorComision}\ningresos: ${empleadoPorComision.ingresos()}\n")
    print(f"{empleadoBaseMasComision}\ningresos: ${empleadoBaseMasComision.ingresos()}\n")
    print(f"{trabajadorPiezas}\ningresos: ${trabajadorPiezas.ingresos()}\n")

    empleados = [
        empleadoAsalariado,
        empleadoPorHoras,
        empleadoPorComision,
        empleadoBaseMasComision,
        trabajadorPiezas
    ]

    print("Empleados procesados en forma polimorfica:\n")

    for empleadoActual in empleados:
        print(empleadoActual)
        
        if isinstance(empleadoActual, EmpleadoBaseMasComision):
            salarioBaseAnterior = empleadoActual.obtenerSalarioBase()
            empleadoActual.establecerSalarioBase(1.10 * salarioBaseAnterior)
            print(f"el nuevo salario base con 10% de aumento es : ${empleadoActual.obtenerSalarioBase()}")
            
        print(f"ingresos ${empleadoActual.ingresos()}\n")
        
    for j, emp in enumerate(empleados):
        print(f"El empleado {j} es un {emp.__class__.__name__}")

main()
