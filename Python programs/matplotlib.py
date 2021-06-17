from matplotlib import pyplot 
from matplotlib import style

x=[5,6,7,8]
y=[7,3,8,3]
print(style.available)
style.use('classic')
pyplot.title('line graph')
pyplot.ylabel('Y axis')
pyplot.xlabel('X axis')
pyplot.plot(x,y,'r',linewidth=6, label="Line 1")
pyplot.legend()
pyplot.show()

pyplot.title('scatter graph')
pyplot.ylabel('Y axis')
pyplot.xlabel('X axis')
pyplot.scatter(x,y,color='r')
pyplot.show()

pyplot.title('bar graph')
pyplot.ylabel('Y axis')
pyplot.xlabel('X axis')
pyplot.bar(x,y,align = 'center')
pyplot.show()