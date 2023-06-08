# Bank_app
This is an application that perfoms basic bank operations like sending/transfering money, withdrawing cash, checking the balance and also depositing money into the account.
It is developed using C programming language.

## Prerequisites
- To run the bank application you have to install the C compiler in your computer.

## Getting Started

Follow the steps below to get started with MyBank:

1. Clone the repository or download the source code:

```
git clone https://github.com/your-username/Bank_app.git
```

2. Compile the code using a C compiler:

```
gcc *.c -o bank
```

3. Run the executable:

```
./bank
```

## Usage

1. Upon running the program, you will be prompted to create an account by entering your first and last names.

2. Enter your password. The program will validate the password by asking you to re-enter it. You have three attempts to enter the correct password.

3. Once your password is validated, you will be welcomed to MyBank, and your initial account balance of $0.00 will be displayed.

4. The following options are available in the menu:

   - **a. Transfer Money**: Transfer a specified amount from your account to another recipient's account. Enter the recipient's account name, account number, bank name, and the transfer amount. You will also be prompted for a password of which you will input and hit enter to proceed. If the transfer amount exceeds your account balance, an insufficient balance message will be displayed.

   - **b. Deposit Money**: Deposit a specified amount into your account. Enter the deposit amount. You will also be prompted for a password of which you will input and hit enter to proceed. If the deposit amount is invalid (less than or equal to zero), an error message will be displayed.

   - **c. Withdraw Cash**: Withdraw a specified amount from your account. Enter the withdraw amount. You will also be prompted for a password of which you will input and hit enter to proceed. If the withdraw amount is invalid (less than or equal to zero), an error message will be displayed.

   - **d. My Account**: THis option directs you to another list of options to choose from which are:
      - **1. Check Balance**: This checks the balance of your account. You will be prompted to input your password to proceed.

      - **2. Mini Statement**: This prints the receipts of your transactions. You will also be prompted to input password to proceed.

   - **e. Quit the Program**: Exit the program.

5. After each transaction, a transaction receipt will be generated and saved in a file named "receipt.txt". The receipt contains details such as the transaction type, account name, account number, bank name, transaction amount, previous balance, current balance, and the date and time of the transaction.

## Collaboration

Contributions to MyBank are welcome! If you would like to collaborate on this project, please follow these steps:

1. Fork the repository on GitHub.
2. Create a new branch with a descriptive name:
```
git checkout -b feature/my-new-feature
```
3. Make your modifications and write tests if necessary.
4. Commit your changes:
```
git commit -am 'Add some feature'
```
5. Push the branch to your forked repository:
```
git push origin feature/my-new-feature
```
6. Submit a pull request detailing the changes you made.


## Author
- This app is developed and maintained by [Alex Kinyua](https://github.com/Aleki001)

## Support
- For any help concerning the application you can reach me via alexkinyua001alx@gmail.com.