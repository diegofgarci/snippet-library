void clearScreen () {

//in Windows//
system ("cls");

//in linux//
system ("clear");

}

void pressAnyKey () {

printf ("\nPress any key to continue.\n");
getchar ();
fflush (stdin);

}
