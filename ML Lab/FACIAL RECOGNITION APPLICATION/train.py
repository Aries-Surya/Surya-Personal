import cv2
import os
import numpy as np

# Function to collect training data from a directory
def collect_training_data(data_path):
    labels = []
    faces = []
    label_id = 0
    label_dict = {}

    for person_name in os.listdir(data_path):
        person_path = os.path.join(data_path, person_name)
        if not os.path.isdir(person_path):
            continue

        label_dict[label_id] = person_name

        for image_name in os.listdir(person_path):
            image_path = os.path.join(person_path, image_name)
            img = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)
            faces.append(img)
            labels.append(label_id)

        label_id += 1

    return np.array(faces), np.array(labels), label_dict

# Path to the dataset
data_path = 'path_to_your_dataset'

faces, labels, label_dict = collect_training_data(data_path)

# Create a face recognizer and train it
recognizer = cv2.face.LBPHFaceRecognizer_create()
recognizer.train(faces, labels)

# Save the trained model
recognizer.save('face_recognizer.yml')

# Save the label dictionary
np.save('labels.npy', label_dict)
