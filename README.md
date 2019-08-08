# trashcan
custom garbage collector

To use this garbage collection utility:
1. make sure you get a new trashcan
```
  #include "trashcan.h"
```

2. after you allocate memory make sure mom follows immediately behind to pick up your trash
```
  char *str = (char*)malloc(100 * sizeof(char));
  mom(str);
  ```
  
3.  when mom is finished collecting garbage it's time for garbage day
```
  garbage_day(void);
  ```
https://www.youtube.com/watch?v=i7gIpuIVE3k
