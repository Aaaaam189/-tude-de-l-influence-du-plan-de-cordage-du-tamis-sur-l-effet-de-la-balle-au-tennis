from pylab import *

x = array([0, 3.324, 4.986, 5.817, 6.648])
y = array([0, 5, 6.2, 6.5, 7])

coefficients = polyfit(x, y, 1)
polynomial = poly1d(coefficients)
xpred = linspace(min(x), max(x), 11)
ypred = polynomial(xpred)
plot(x, y, 'k+')
plot(xpred, ypred, 'b')
text(0.2, 24, f'pente={coefficients[0]:.5f}', color='b')
plt.title('Raquette 16 x 19')
plt.xlabel('La masse appliquée (en Kg)')
plt.ylabel('La déformation du tamis (en mm)')

grid()
show()
