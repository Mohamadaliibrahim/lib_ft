# Philosophers

- A project to solve the classical Dining Philosophers problem but with a few extra modifications.
- Built in C language and utilizes threading and mutexes.
- Done as part of 42 Beirut Core Curriculum.

## Structures

### t_data

the basic rules for the program

- There is parameters gotten from user
- Bools to manage the game state
- The program_start is to make calculations easier for later
- Mutexes to protect eating and writing
- Forks for a philos and philos to fill with data

### t_philos

a way to store needed information about a philosopher

- The philo id, the id of left and right fork
- Nb of times the philo has eaten to track for program state
- The data of the program so the thread function can access it
- Thread data of this philosopher

## Code

### input_handling

- Analyze the given arguments and make sure they comply with required rules
- Fill the game data
- Create all the philosphers and their mutexes

### Philosphers

- philosphers are created and set on a loop to get forks as soon as possible and
executer the cycle
- some philosphers are given a delayed start to help with synchronization
- a loop runs in main thread until either a philo dies or all philosphers have eaten enough times