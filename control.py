import cv2
import numpy as np
import matplotlib.pyplot as plt
def canny(image):
    gray= cv2.cvtColor( image,cv2.COLOR_RGB2GRAY)
    blur= cv2.GaussianBlur(gray,(5,5),0)
    canny=cv2.Canny(blur,50,150)
    return canny


def region_of_interest(image):
    height = image.shape[0]
    polygons = np.array([
    [(0,height),(1200,height),(0,400)]
    ])
    mask = np.zeros_like(image)
    cv2.fillPoly(mask, polygons,255)
    return mask

image = cv2.imread('collegeroad1.jpeg')
lane_image = np.copy(image)
canny= canny(lane_image)
#gray= cv2.cvtColor( lane_image,cv2.COLOR_RGB2GRAY)#//function created above in canny
#blur= cv2.GaussianBlur(gray,(5,5),0)#//function created above in canny
#canny=cv2.Canny(blur,50,150)#//function created above in canny
plt.imshow(canny)#//pyplot image
plt.show()#//show pyplot image
#cv2.imshow("result",region_of_interest(canny))
#cv2.waitKey(0)
