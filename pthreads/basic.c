// C++ Program to implement
// the working of Multi-threading

#include <cstdlib>
#include <iostream>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

// Function to print Hello with
// the thread id
void *PrintHello(void *threadid) {
  // Print the thread ID
  cout << "Hello World! Thread ID: " << *(int *)threadid << endl;

  pthread_exit(NULL);

  return nullptr;
}

// Driver Code
int main() {

  // Create thread
  pthread_t threads[NUM_THREADS];
  int rc;
  int i;

  for (i = 0; i < NUM_THREADS; i++) {

    cout << "main() : creating thread " << i << endl;

    rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&i);

    // If thread is not created
    if (rc) {
      cout << "Error:unable to"
           << " create thread, " << rc << endl;

      exit(-1);
    }
  }

  pthread_join(threads[0], NULL);
  pthread_join(threads[1], NULL);
  pthread_join(threads[2], NULL);
  pthread_join(threads[3], NULL);
  pthread_join(threads[4], NULL);

  pthread_exit(NULL);
}
