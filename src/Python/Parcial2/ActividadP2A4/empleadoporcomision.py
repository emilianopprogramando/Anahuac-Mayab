from empleado import Empleado

class EmpleadoPorComision(Empleado):
    def __init__(self, nombre, apellido, nss, ventas, tarifa):
        super().__init__(nombre, apellido, nss)
        self.establecerVentasBrutas(ventas)
        self.establecerTarifaComision(tarifa)

    def establecerTarifaComision(self, tarifa):
        if tarifa > 0.0 and tarifa < 1.0:
            self.tarifaComision = tarifa
        else:
            self.tarifaComision = 0.0

    def obtenerTarifaComision(self):
        return self.tarifaComision

    def establecerVentasBrutas(self, ventas):
        if ventas < 0.0:
            self.ventasBrutas = 0.0
        else:
            self.ventasBrutas = ventas

    def obtenerVentasBrutas(self):
        return self.ventasBrutas

    def ingresos(self):
        return self.obtenerTarifaComision() * self.obtenerVentasBrutas()

    def __str__(self):
        return f"empleado por comision: {super().__str__()}\nventas brutas: ${self.obtenerVentasBrutas()}; tarifa de comision: {self.obtenerTarifaComision()}"
