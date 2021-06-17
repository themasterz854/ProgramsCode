'''
This is Ambu Karthik, bothering you again with an assignment. If you are actually opening this, I am sure you are the few in that group who is considering the assignments fun!
If you consider it fun, I am really happy to present to you below.. my code xD I wrote the below code with reference and then a lot of debugging. This is only the function
which makes my code work well to make a robot move according to stimuli from camera. Fill in the below blanks according to my comments to get the logic perfectly right. 
This, is Assignment 3
'''
import cv2
import numpy as np
import imutils #please do install this by running "sudo -H pip install imutils" in linux or "pip install imutils" in windows

#Main function which does the logic. It takes a parameter image and returns a string or integer (python lmfao)
def colour_detect(image):

        #Convert image to HSV colour
        #____

        #Below code is very very identical and are basically processing of 3 different features of an image
        
        #Here are 6 arrays. These represent the lower and upper bound regions of pixels in HSV. 
        #Using HSV colour scheme, figure out which range is for which prominent colour range.
        #Write below as variable names or comments about which colour each range covers.
        lower_1 = np.array([100,100,100])
        upper_1 = np.array([140,255,255])

        lower_2 = np.array([140,100,100])
        upper_2 = np.array([180,255,255])

        lower_3 = np.array([60,100,100])
        upper_3 = np.array([100,255,255])

        #For the above defined ranges, make 3 masks using a cv2 function given image, lower bound and upper bound
        #What are masks and how are they useful?
        #____
        #____
        #____
        
        #Eh. hsv was the variable of hsv format of image which was obtained above. Change below variable name if used differently lol
        (w,h,c)=hsv.shape
        image_area = w*h

        #3 area variables initialised. Used later.
        area_1 = 0
        area_2 = 0
        area_3 = 0

        #Write 6 lines. 3 sets. 2 lines of each set basically do this :-
        #First line does a bitwise operation between the obtained image (parameter) and the mask we got.
        #This operation is done so we can see what part of the image is being detected. Which operation and how?
        #____
        #____

        #____
        #____

        #____
        #____ (feel free to copy paste xD I did too)
        
        #Find contours of every mask to find areas of
        #____
        #____
        #____
        
        #Sum up areas of all contours in found earlier using basic coding. (All three of them pls)
        #Use the variables initalised above
        #___...___
        #___...___
        #___...___
        #(___...___) implies that the code spans for multiple lines
        
        #Find ratio of total area of each of the masks to the total area of image found above
        #____
        #____
        #____

        '''
        Use an appropriate code to do this below :-
        Out of the three ratios found, check for the maximum of them. 
        With the maximum found, check if the max is greater than 0.2 (tells that the range of colour filled 20% of the image)
        Compared the maximum number with each ratio, and if it is equal to any, return the name of the colour. 
        If any of the above conditions do not satisfy, print whatever you want (-1, null, None, nothing, nimcompoop, enchiladas, whatever!)
        '''

#Main function which calls the functions
if __name__=='__main__':
    #The below has been written for your convenience. This is a basic video capture code which takes code until escape is pressed.
    #Read more about it if required. It takes the image and gives it individually frame by frame.
    cap = cv2.VideoCapture(0);
    while(True):
                ret, image = cap.read()
                if cv2.waitKey(1) != 27:
                    print(colour_detect(image))
                else:
                    exit()
