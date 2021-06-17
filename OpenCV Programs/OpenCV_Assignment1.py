'''
This code does something in openCV. There have been lines blanked out asking to fill. 
Fill them and send output accordingly. This is Assignment 1. The blanked out lines are commented telling you what it must do.
It has questions hinting on what the program does. Answer only what program does with output.
'''
import cv2 
import numpy as np 

#Below this comment must a line which inputs a jpg file in the same folder as your python file. The jpg file is named "shapes.jpg". Fill it accordingly. Name it whatever.
img = cv2.imread("shapes.jpg",-1)
cv2.waitKey(0) 

#Convert the above input image to grayscale and name it whatever
#_____
grayimg = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
#Perform canny method on the grayscale image to do something. What does canny output?? What is it for?
#_____Canny Edge Detection is used to detect the edges in an image. It accepts a gray scale image as input and it uses a multistage algorithm.

canny = cv2.Canny(grayimg,5,100)
cv2.waitKey(0) 

#Find contours of the "canny"ed image using a certain function. Find out what function and how to use.
#_____'
contours, hierarchy = cv2.findContours(canny,cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

#Display "canny"ed image with appropriate title
#_____
cv2.imshow("Canny",canny)
cv2.waitKey(0) 

#Draw all contours found above on the input image using a certain function.
#_____
cv2.drawContours(img,contours,-1,(0,255,0),3)
#Display new image with contours drawn. I don't care what colour the contours are.
#_____
cv2.imshow("new",img)
cv2.waitKey(0) 
cv2.destroyAllWindows() 
