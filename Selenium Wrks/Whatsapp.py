from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time

# Replace with the name of your contact
contact_name = "Appa"
# Replace with the message you want to send
message = "Hello, this is an automated message sent using Python!"

# Start a new browser instance
browser = webdriver.Chrome()
browser.maximize_window()

# Open WhatsApp web
browser.get('https://web.whatsapp.com/')

# Wait for the user to scan the QR code and log in
input("Scan the QR code and press any key to continue...")

# Search for the contact
search_box = browser.find_element(By.XPATH, '//div[@class="_3FRCZ copyable-text selectable-text"][@contenteditable="true"][@data-tab="3"]')
search_box.send_keys(contact_name)
time.sleep(1)
search_box.submit()

# Wait for the chat to load
time.sleep(2)

# Type the message and send it
input_box = browser.find_element(By.XPATH,'//div[@class="_3FRCZ copyable-text selectable-text"][@contenteditable="true"][@data-tab="6"]')
input_box.send_keys(message)
time.sleep(1)
send_button = browser.find_element(By.XPATH,'//span[@data-testid="send"]')
send_button.click()

# Close the browser
browser.quit()
