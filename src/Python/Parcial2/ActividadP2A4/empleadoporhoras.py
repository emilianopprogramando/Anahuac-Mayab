from empleado import Empleado

class EmpleadoPorHoras(Empleado):
    def __init__(self, nombre, apellido, nss, sueldoPorHoras, horasTrabajadas):
        super().__init__(nombre, apellido, nss)
        self.establecerSueldo(sueldoPorHoras)
        self.establecerHoras(horasTrabajadas)

    def establecerSueldo(self, sueldoPorHoras):
        if sueldoPorHoras < 0.0:
            self.sueldo = 0.0
        else:
            self.sueldo = sueldoPorHoras

    def obtenerSueldo(self):
        return self.sueldo

    def establecerHoras(self, horasTrabajadas):
        if horasTrabajadas >= 0.0 and horasTrabajadas <= 168.0:
            self.horas = horasTrabajadas
        else:
            self.horas = 0.0

    def obtenerHoras(self):
        return self.horas

    def ingresos(self):
        if self.obtenerHoras() <= 40:
            return self.obtenerSueldo() * self.obtenerHoras()
        else:
            return 40 * self.obtenerSueldo() + (self.obtenerHoras() - 40) * self.obtenerSueldo() * 1.5

    def __str__(self):
        return f"empleado por horas: {super().__str__()}\nsueldo por hora: ${self.obtenerSueldo()}; horas trabajadas: {self.obtenerHoras()}"
