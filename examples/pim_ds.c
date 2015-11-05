struct person {
  char first_name[256];
  char last_name[256];
};

struct number {
  struct person *owner; /* <- */
  int number;
};

struct person persons[1000];
struct number numbers[10000];
