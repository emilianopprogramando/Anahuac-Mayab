import random

class Termometro:

    # Constructor
    def __init__(self, temperatura=None):
        
        if temperatura is None:
            self.temperatura = random.randint(0, 100)
        else:
            self.temperatura = temperatura

    # Métodos
    def temperaturaC(self):
        return self.temperatura

    def temperaturaF(self):
        return (self.temperatura * 9 / 5) + 32

    def temperaturaK(self):
        return self.temperatura + 273.15

    def mostrarTemperaturas(self):
        print("Celsius:", self.temperaturaC())
        print("Fahrenheit:", self.temperaturaF())
        print("Kelvin:", self.temperaturaK())
