from abc import ABC, abstractmethod

class Poligono(ABC):

    def __init__(self, numLados):
        self._numLados = numLados

    def setNumLados(self, numLados):
        self._numLados = numLados

    def getNumLados(self):
        return self._numLados

    @abstractmethod
    def calcularArea(self):
        pass

    @abstractmethod
    def calcularPerimetro(self):
        pass