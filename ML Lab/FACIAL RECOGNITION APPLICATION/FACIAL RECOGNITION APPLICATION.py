import cv2

# Path to the Haar Cascade XML file for frontal face detection
# Adjust this path according to your actual file location
face_cascade_path = 'C:\\Users\\Admin\\AppData\\Local\\Programs\\Python\\Python310\\Lib\\site-packages\\cv2\\data\\haarcascade_frontalface_default.xml'

# Load the Haar Cascade classifier for face detection
face_cascade = cv2.CascadeClassifier(face_cascade_path)

# Load the image
img_path = 'C:\\Users\\Admin\\Desktop\\New notes\\LAB\\kalam.png'
img = cv2.imread(img_path)

# Convert image to grayscale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Detect faces in the image
faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5)

# Draw rectangles around the detected faces
for (x, y, w, h) in faces:
    cv2.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 2)

# Display the image with rectangles around faces
cv2.imshow('img', img)

# Wait for any key to be pressed
cv2.waitKey(0)

# Close all OpenCV windows
cv2.destroyAllWindows()
