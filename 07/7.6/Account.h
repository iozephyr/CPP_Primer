#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account {
  public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
  private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate;
};
void Account::rate(double nweRate) { interestRate = newRate; }
#endif //ACCOUNT_H