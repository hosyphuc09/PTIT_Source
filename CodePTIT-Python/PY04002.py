class Rectangle:
    def __init__(self, cd, cr, color):
        self.cd = cd
        self.cr = cr
        self._color = color

    def perimeter(self):
        return (self.cd + self.cr) * 2

    def area(self):
        return self.cd * self.cr

    def color(self):
        return self._color.capitalize()

