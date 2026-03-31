from empleado import Empleado

class TrabajadorPiezas(Empleado):
    def __init__(self, nombre, apellido, nss, salario, piezas):
        super().__init__(nombre, apellido, nss)
        self.establecerSalario(salario)
        self.establecerPiezas(piezas)

    def establecerSalario(self, salario):
        if float(salario) < 0.0:
            self.salario = 0.0
        else:
            self.salario = float(salario)

    def obtenerSalario(self):
        return self.salario

    def establecerPiezas(self, piezas):
        if int(piezas) < 0:
            self.piezas = 0
        else:
            self.piezas = int(piezas)

    def obtenerPiezas(self):
        return self.piezas

    def ingresos(self):
        return self.obtenerSalario() * self.obtenerPiezas()

    def __str__(self):
        return f"trabajador por piezas: {super().__str__()}\nsalario por pieza: ${self.obtenerSalario()}; piezas producidas: {self.obtenerPiezas()}"
