# trashcan
custom garbage collector

To use this garbage collection utility:
1. make sure you get a new trashcan
```
  t_rash_can my_trashcan;
```

2. put in a new trashbag
```
  new_trash_bag(&my_trashcan);
```

3. after you allocate memory make sure mom follows immediately behind to pick up your trash
```
  char *str = (char*)malloc(100 * sizeof(char));
  mom(&my_trashcan, T_CHAR, str);
  ```
  
4.  when mom is finished collecting garbage it's time for garbage day
```
  garbage_day(&my_trashcan);
  ```
https://www.youtube.com/watch?v=i7gIpuIVE3k
