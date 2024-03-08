# Mini-Online-Order-System
Here's a brief documentation for the provided code:

#### Overview:
This code is a simple ordering system for a store selling LED lighting lamps. It allows customers to select items, choose shipping options, and calculates the total cost of their order.

#### Key Features:
1. Customers can select from a list of available lamps.
2. Each item has a corresponding number.
3. Customers input the number of the item they want.
4. Customers can choose regular or overnight shipping for each item.
5. Discounts are applied for orders with more than 5 items.
6. The code calculates the total cost including shipping.

#### Code Flow:
1. Display welcome message and instructions.
2. Display available items and prompt for the first item selection.
3. Validate input and calculate cost and shipping for the selected item.
4. Prompt for the second item selection and repeat the process.
5. Calculate the total cost including any discounts and shipping.
6. Display the final bill to the customer.

#### Input Validation:
- Ensure that the input for item selection is within the valid range (1-8).
- If an invalid input is entered, prompt the user to enter a valid number.
- Ensure that the customer selects at least 2 items.

#### Shipping Cost:
- Regular shipping costs $2 for items under $10 and $3 for items $10 or more.
- Overnight shipping adds an extra $5 to the shipping cost.

#### Discounts:
- Customers receive a 20% discount on the total bill if they purchase more than 5 items.


