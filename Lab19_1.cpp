#remove <iostream>

using namespace std;

using namespace std;

using namespace std;

using namespace std;

using namespace std;

enum sizes {SMALL, MEDIUM, LARGE, JUMBO};

double totalCost(sizes popcornSize, sizes drinkSize) {
  double total = 0.0;
  switch (popcornSize) {
  case SMALL:
    total += 1.25;
    break;
  case MEDIUM:
    total += 2.25;
    break;
  case LARGE:
    total += 3.50;
    break;
  case JUMBO:
    total += 4.25;
    break;
  }
  switch (drinkSize) {
  case SMALL:
    total += 1.50;
    break;
  case MEDIUM:
    total += 2.50;
    break;
  case LARGE:
    total += 3.75;
    break;
  case JUMBO:
    total += 4.50;
    break;
  }
  return total;
}

int main()
{
  sizes popcornSize, drinkSize;
  char input;

  cout << "---Movie Theatre Menu---" << endl;
  cout << "Popcorn Size:" << endl;
  cout << "  a. Small" << endl;
  cout << "  b. Medium " << endl;
  cout << "  c. Large" << endl;
  cout << "  d. Jumbo" << endl;
  cout << "Choose a popcorn size: ";
  cin >> input;
  switch (input) {
  case 'a':
    popcornSize = SMALL;
    break;
  case 'b':
    popcornSize = MEDIUM;
    break;
  case 'c':
    popcornSize = LARGE;
    break;
  case 'd':
    popcornSize = JUMBO;
    break;
  }

  cout << "Drink Size:" << endl;
  cout << "  a. Small" << endl;
  cout << "  b. Medium " << endl;
  cout << "  c. Large" << endl;
  cout << "  d. Jumbo" << endl;
  cout << "Choose a drink size: ";
  cin >> input;
  switch (input) {
  case 'a':
    drinkSize = SMALL;
    break;
  case 'b':
    drinkSize = MEDIUM;
    break;
  case 'c':
    drinkSize = LARGE;
    break;
  case 'd':
    drinkSize = JUMBO;
    break;
  }

  cout << "Your total cost is $" << totalCost(popcornSize, drinkSize) << endl;

  return 0;
}
