# cpp-todo-list
It is a console based To Do List developed using c++. 

*** What does the program do? ***
- Basically the program displays a menu upon statrtup.
--- Add tasks (Lets you add tasks, marks them as "Not Done" by default)
--- View tasks (Lets you view existing tasks, displays something like an error if selected without existing tasks)
--- Mark tasks as Done (Lets you mark existing taks as done, displays something like an error if selected without existing tasks)
--- Delete tasks (Lets you delete tasks, displays something like an error if selected without existing tasks)
--- Exit

*** What I learned ***
- I did learn a specific set of syntax used to store sentences in a single variable (there will be a comment there, you can check it out)
- Did learn adding counters instead of scanning through the entire array to check for the presence or absence of values
- Did learn that counters make indexing easier

*** Known limitations ***
- Usage of a string array of 1000 rather than a vector
- Inefficient loop breakers like j = -999;
- Repetitive code
- Choosing View / Mark as Done / Delete when there are no tasks shows an error, but immediately exits the case and prints back the menu. This might be confusing for users.
- The design and flow might not be the smoothest
- Logic might be more like a beginner's work, but functions well

*** Next improvements ***
- Use more efficient and professional methods like using vectors instad of string arrays
- Will use more definitive loop breakers that are based on boolean values
- Usage of small functions to avoid code repetition.
- Make more user friendly
- Better studied and implemented console app design
- Polished logic

*** Author's Thoughts and Wishes ***
- Feel free to use it as your own as it is a simple program
- Just let me know how you felt using it and feel free to critique
- Just make sure you let me know that you used it so that i don't abandon it, but actually put efforts to improve it
