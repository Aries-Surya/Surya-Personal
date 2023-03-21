from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys

# Create a new browser instance
browser = webdriver.Chrome()

# Navigate to the Google homepage
browser.get("https://www.google.com")

# Search for an element using its XPath
#search_box = browser.find_element_by_xpath("//input[@name='q']")
search_box = browser.find_element(By.NAME, "q").send_keys("python"+Keys.RETURN)

# Type a search query into the search box
search_box.send_keys("Python")

# Submit the search query
search_box.submit()

# Wait for the search results to load
results = browser.find_elements_by_xpath("//h3[@class='LC20lb DKV0Md']")

# Print the titles of the search results
for result in results:
    print(result.text)

# Close the browser
browser.quit()
