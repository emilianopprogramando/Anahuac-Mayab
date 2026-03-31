from abc import ABC, abstractmethod

class Empleado(ABC):
    def __init__(self, nombre, apellido, nss):
        self.primerNombre = nombre
        self.apellidoPaterno = apellido
        self.numeroSeguroSocial = nss

    def establecerPrimerNombre(self, nombre):
        self.primerNombre = nombre

    def obtenerPrimerNombre(self):
        return self.primerNombre

    def establecerApellidoPaterno(self, apellido):
        self.apellidoPaterno = apellido

    def obtenerApellidoPaterno(self):
        return self.apellidoPaterno

    def establecerNumeroSeguroSocial(self, nss):
        self.numeroSeguroSocial = nss

    def obtenerNumeroSeguroSocial(self):
        return self.numeroSeguroSocial

    def __str__(self):
        return f"{self.obtenerPrimerNombre()} {self.obtenerApellidoPaterno()}\nnumero de seguro social: {self.obtenerNumeroSeguroSocial()}"

    @abstractmethod
    def ingresos(self):
        pass
