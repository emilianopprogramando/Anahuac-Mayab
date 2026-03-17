import math
from poligono import Poligono

class Circunferencia(Poligono):

    def __init__(self, numLados, radio):
        super().__init__(numLados)
        self._radio = radio

    def calcularArea(self):
        return math.pi * self._radio ** 2

    def calcularPerimetro(self):
        return 2 * math.pi * self._radio