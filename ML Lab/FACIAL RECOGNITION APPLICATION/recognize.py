import cv2
import numpy as np

# Load the trained recognizer and labels
recognizer = cv2.face.LBPHFaceRecognizer_create()
recognizer.read('face_recognizer.yml')
label_dict = np.load('labels.npy', allow_pickle=True).item()

# Load the Haar Cascade for face detection
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Load the image where you want to recognize faces
img_path = 'path_to_your_test_image'
img = cv2.imread(img_path)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Detect faces in the image
faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5)

# Recognize each detected face
for (x, y, w, h) in faces:
    face = gray[y:y+h, x:x+w]
    label_id, confidence = recognizer.predict(face)
    name = label_dict[label_id]

    # Draw a rectangle around the face and put a label
    cv2.rectangle(img, (x, y), (x+w, y+h), (255, 0, 0), 2)
    cv2.putText(img, name, (x, y-10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (255, 0, 0), 2)

# Display the result
cv2.imshow('Face Recognition', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
