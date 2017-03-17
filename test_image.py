#import necessary packages
from picamera.array import PiRGBArray
from picamera import PiCamera
import time
import cv2

#init the camera and grab a reference to a raw cam capture
camera = PiCamera()
rawCapture = PiRGBArray(camera)

#camera warmup
time.sleep(0.1)

#grab image from camera
camera.capture(rawCapture, format = "bgr")
image = rawCapture.array

#display image on screen and wait for a KeyboardInterrupt
cv2.imshow("Image", image)
cv2.waitKey(0)
