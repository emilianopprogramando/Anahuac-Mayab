from empleado import Empleado

class EmpleadoAsalariado(Empleado):
    def __init__(self, nombre, apellido, nss, salario):
        super().__init__(nombre, apellido, nss)
        self.establecerSalarioSemanal(salario)

    def establecerSalarioSemanal(self, salario):
        if salario < 0.0:
            self.salarioSemanal = 0.0
        else:
            self.salarioSemanal = salario

    def obtenerSalarioSemanal(self):
        return self.salarioSemanal

    def ingresos(self):
        return self.obtenerSalarioSemanal()

    def __str__(self):
        return f"empleado asalariado: {super().__str__()}\nsalario semanal: ${self.obtenerSalarioSemanal()}"
