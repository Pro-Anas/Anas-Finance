# Anas Finance
#### Video Demo:  <https://youtu.be/hjDNPmfqjaE>
#### Description:
The Finance project is a comprehensive web application developed using the Flask framework, designed to simulate a real-world stock trading platform. This sophisticated application integrates various technologies and concepts, providing a rich learning experience in web development, database management, and financial operations.

### Overview
The application allows users to "buy" and "sell" stocks in real-time using simulated funds. It leverages IEX Cloud's API to fetch real-time stock prices and information, giving users an authentic experience of stock market operations. The project is structured to provide functionalities such as user registration and authentication, transaction handling, portfolio management, and displaying historical transaction data.

### Key Features

1. **User Authentication:**
   - Users can register for an account, providing a username and password. Passwords are securely hashed before storage, ensuring user security.
   - The login system authenticates users, allowing access to their individual portfolios and transaction capabilities.

2. **Real-Time Stock Prices:**
   - Utilizes IEX Cloud's API to fetch current stock prices and details.
   - Users can look up stock prices in real-time by entering stock symbols, providing an interactive and informative experience.

3. **Buying and Selling Stocks:**
   - Users can buy stocks using the funds in their account. They input the stock symbol and the number of shares to purchase.
   - Stocks are "sold" similarly, with the application checking if the user owns enough shares before processing the sale.
   - Transactions are recorded, and users' cash balances are updated accordingly.

4. **Portfolio Display:**
   - The application displays a user's current portfolio, including the stocks they own, the number of shares, current market price of each stock, and the total value of each holding.
   - Users can view their current cash balance and the total value of their portfolio.

5. **Transaction History:**
   - Users can view their transaction history, which includes details of all their buy and sell actions, providing a comprehensive view of their trading activities.

6. **Responsive UI:**
   - The application features a clean and responsive user interface, ensuring usability across various devices and screen sizes.
   - Interactive elements like forms, tables, and flash messages enhance user experience.

### Technologies Used

- **Flask Framework:** Serves as the backbone of the application, handling routing, session management, and rendering templates.
- **SQLite Database:** Stores user information, stock transactions, and portfolio data.
- **CS50 Library:** Used for simplifying database operations.
- **IEX Cloud API:** Provides real-time stock market data.
- **HTML, CSS, Bootstrap:** Used for building and styling the front-end.
- **Jinja2 Templating:** Dynamically generates HTML content based on server-side data.
- **Werkzeug:** For secure password hashing.

### Learning Outcomes

Developing this project provides invaluable insights into full-stack web development. Key learning aspects include backend development with Flask, frontend integration, working with APIs, database management, user authentication, and applying financial concepts in a software application.

The Finance project is not just a demonstration of technical skills but also an excellent example of how different technologies and frameworks can come together to create a functional, real-world application.
