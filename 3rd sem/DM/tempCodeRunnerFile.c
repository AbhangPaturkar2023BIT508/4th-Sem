#include <stdio.h>
#include <stdlib.h>
#include <qrcodegen.h>

int main(int argc, char **argv) {
  // Check if the user provided a string to encode
  if (argc != 2) {
    printf("Usage: %s <string>\n", argv[0]);
    return 1;
  }

  // Get the user-supplied string
  const char *text = argv[1];

  // QR code error correction level
  enum qrcodegen_Ecc errCorLvl = QR_ECLEVEL_L;

  // Generate the QR code
  QRcode *qr = QRcode_encodeString(text, 0, errCorLvl, QR_MODE_8, 0);
  if (!qr) {
    printf("Error: Failed to generate QR code\n");
    return 1;
  }

  // Print the QR code to the console
  for (int y = 0; y < qr->width; y++) {
    for (int x = 0; x < qr->width; x++) {
      printf("%c", qr->data[y * qr->width + x] ? 'X' : ' ');
    }
    printf("\n");
  }

  // Free the QR code data
  QRcode_free(qr);

  return 0;
}