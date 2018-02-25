//This is a module.

extern int fish; //Declares an external variable from another module.
{
  int i = 0;
  while (str[i] != '\0'){
    i++;
  }
  return i;
}

static bool alive(void){ //This function can only be referenced from within this file.
  return 0;
}
