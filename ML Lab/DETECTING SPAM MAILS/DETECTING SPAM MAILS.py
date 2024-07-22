import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.feature_extraction.text import CountVectorizer
from sklearn import svm
from tkinter import *

# Load data
spam = pd.read_csv('data.csv')

# Split data into training and testing sets
z = spam['EmailText']
y = spam['Label']
z_train, z_test, y_train, y_test = train_test_split(z, y, test_size=0.2)

# Vectorize the text data
cv = CountVectorizer()
features_train = cv.fit_transform(z_train)
features_test = cv.transform(z_test)

# Train SVM model
model = svm.SVC()
model.fit(features_train, y_train)

# Function to check if text is spam or not
def check_spam():
    text = spam_text_Entry.get()
    text_vectorized = cv.transform([text])
    prediction = model.predict(text_vectorized)
    if prediction[0] == 1:
        result = "Result: Text is spam"
    else:
        result = "Result: Text not spam"
    my_string_var.set(result)
    print(result)

# GUI setup
win = Tk()
win.geometry("400x300")
win.configure(background="cyan")
win.title("Email Spam Detector")

title = Label(win, text="Email Spam Detector", bg="gray", width=30, height=2, fg="white", font=("Calibri", 20, "bold", "italic", "underline"))
title.pack()

spam_text_label = Label(win, text="Enter your Text:", bg="cyan", font=("Verdana", 12))
spam_text_label.place(x=20, y=80)

spam_text_Entry = Entry(win, width=30)
spam_text_Entry.place(x=170, y=85)

my_string_var = StringVar()
my_string_var.set("Result: ")
result_label = Label(win, textvariable=my_string_var, bg="cyan", font=("Verdana", 12))
result_label.place(x=20, y=150)

submit_button = Button(win, text="Submit", width=12, height=1, activebackground="red", bg="Pink", command=check_spam, font=("Verdana", 12))
submit_button.place(x=20, y=120)

win.mainloop()
