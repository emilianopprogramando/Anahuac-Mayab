from poligono import Poligono

class Triangulo(Poligono):

    def __init__(self, numLados, base, altura):
        super().__init__(numLados)
        self._base = base
        self._altura = altura

    def calcularArea(self):
        return (self._base * self._altura) / 2

    def calcularPerimetro(self):
        return self._base * 3  # suponiendo triángulo equilátero