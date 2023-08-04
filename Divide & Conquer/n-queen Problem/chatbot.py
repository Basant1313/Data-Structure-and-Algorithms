import random

# Define a list of possible customer greetings
greetings = ["hi", "hello", "hey", "howdy"]

# Define a list of possible chatbot responses
responses = ["Hello! How can I assist you today?", "Hi there! How may I help you?", "Hey! How can I be of service?"]

# Function to generate a response to a customer message
def generate_response(message):
    # Convert the customer message to lowercase for easier handling
    message = message.lower()

    # Check if the customer greeting is present in the message
    if any(greeting in message for greeting in greetings):
        return random.choice(responses)
    else:
        return "I'm sorry, but I'm a basic chatbot and can't understand your request."

# Main loop to simulate customer interactions
while True:
    customer_message = input("Customer: ")
    response = generate_response(customer_message)
    print("Chatbot:", response)