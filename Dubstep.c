//#include <stdio.h>
//#include <string.h>
//
////Unfortunately I couldn't solve it on my own :(
//
//int main() {
//    char song[201];  // max input length is 200
//    scanf("%s", song);
//
//    int len = strlen(song);
//    for (int i = 0; i < len; ) {
//        // If we find "WUB"
//        if (i + 2 < len && song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
//            i += 3; // Skip "WUB"
//            // Print space only if needed (avoid multiple spaces)
//            if (i > 3 && song[i - 4] != ' ') {
//                printf(" ");
//            }
//        }
//        else {
//            printf("%c", song[i]);
//            i++;
//        }
//    }
//
//    printf("\n");
//    return 0;
//}
