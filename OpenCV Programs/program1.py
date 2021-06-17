# -*- coding: utf-8 -*-
"""
Created on Mon Jun 22 18:09:33 2020

@author: Zaid
"""

import cv2


imgpath = "C:\\Users\\Zaid\\Downloads\\x4.png"
img = cv2.imread(imgpath)

cv2.imshow('NOOB', img)
cv2.waitKey(0)
cv2.destroyAllWindows()

