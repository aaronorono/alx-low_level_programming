#include <stdio.h>

/* Return: Always 1 (Fail) */

int main(void)
{
  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  const size_t message_len = sizeof(message) - 1; 
  const ssize_t bytes_written = write(STDERR_FILENO, message, message_len);
  return (bytes_written == message_len) ? 1 : -1;
}
