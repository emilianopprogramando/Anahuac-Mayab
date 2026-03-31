from empleadoporcomision import EmpleadoPorComision

class EmpleadoBaseMasComision(EmpleadoPorComision):
    def __init__(self, nombre, apellido, nss, ventas, tarifa, salario):
        super().__init__(nombre, apellido, nss, ventas, tarifa)
        self.establecerSalarioBase(salario)

    def establecerSalarioBase(self, salario):
        if salario < 0.0:
            self.salarioBase = 0.0
        else:
            self.salarioBase = salario

    def obtenerSalarioBase(self):
        return self.salarioBase

    def ingresos(self):
        return self.obtenerSalarioBase() + super().ingresos()

    def __str__(self):
        return f"con salario base {super().__str__()}\nsalario base: ${self.obtenerSalarioBase()}"
