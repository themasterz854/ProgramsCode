'''
This code does something in openCV. There have been lines blanked out asking to fill. 
Fill them and send output accordingly. This is Assignment 2. The blanked out lines are commented telling you what it must do.
It has questions hinting on what the program does. Answer only what program does with output.
'''
import cv2
import numpy as np

#Below this comment must a line which inputs two jpg files in the same folder as your python file. The jpg files are named as "road.jpg" and "car.jpg" respectively. Fill it accordingly. Name it whatever.
car = cv2.imread("car.jpg",-1)
road = cv2.imread("road.jpg",-1)
alpha = 0.5
beta = 1.0-alpha
#Perform the addWeighted operation on the above two images
addimg = cv2.addWeighted(car,alpha,road,beta,1)

#Display the added image with appropriate title
cv2.imshow("addedimage",addimg)
cv2.waitKey(0) 

#Convert the above input image named "car.jpg" to grayscale and name it whatever
graycar = cv2.cvtColor(car,cv2.COLOR_BGR2GRAY)

#Perform binary thresholding on the grayscaled image
ret,thresh = cv2.threshold(graycar,127,255,cv2.THRESH_BINARY)

#Perform adaptive thresholding on the grayscaled image
adpthres = cv2.adaptiveThreshold(graycar,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,11,2)

#Display the grayscaled image with appropriate title
cv2.imshow("graycar",graycar)
cv2.waitKey(0) 

#Display the binary threshold image with appropriate title
cv2.imshow("thresh",thresh)
cv2.waitKey(0) 

#Display the adaptive threshold image with appropriate title
cv2.imshow("adaptive thresh",adpthres)
cv2.waitKey(0) 

#Perform Image blurring operation i.e. averaging
roadblur = cv2.blur(road,(5,5))

#Perform Image blurring operation i.e. GaussianBlur
roadGblur = cv2.GaussianBlur(road,(5,5),0)

#Perform Image blurring operation i.e. medianBlur
roadMblur = cv2.medianBlur(road,5)

#Display the averaging image with appropriate title
cv2.imshow("roadaverageblur",roadblur)
cv2.waitKey(0) 

#Display the GaussianBlur image with appropriate title
cv2.imshow("roadGaussianblur",roadGblur)
cv2.waitKey(0) 

#Display the medianBlur image with appropriate title
cv2.imshow("roadMedianblur",roadMblur)

cv2.waitKey(0)

cv2.destroyAllWindows()





















