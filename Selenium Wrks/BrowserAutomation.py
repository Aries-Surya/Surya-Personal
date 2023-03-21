from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.common import exceptions as ex
import time as t

Browser = webdriver.Chrome()
Browser.maximize_window()
Browser.get("https://www.google.com/")
search = Browser.find_element(By.NAME, "q").send_keys("surya informative"+Keys.RETURN)

while True:
    try:
        elem = Browser.find_element
        
        for ele in elem:
            if elem.get_attribute("href") == "https://www.youtube.com/@SuryaInformative":
                print("Found..!")
        
        Browser.find_element(By.ID("pnnext")).click()
    except ex.NoSuchElementException:
        print("sorry not found..!")
        break

Browser.quit()