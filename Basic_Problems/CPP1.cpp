// Write a code to find the element in am array which is repeated maximum number of times?

#include<bits/stdc++.h>

int
main ()
{
  int a[] = { 2, 2, 2, 1, 4, 5, 5 };
  int n = sizeof (a) / sizeof (a[0]);
  std::sort (a, a + n);
  int i, count, data, maxc = 0;
  for (i = 0; i < n; i++)
    {
      count = 0;
      if (a[i] == a[i + 1])
	{
	  count++;
	  if (count > maxc)
	    {
	      maxc = count;
	      data = a[i];
	    }
	}
    }
  printf ("%d", data);
  return 0;
}
