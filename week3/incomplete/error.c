/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "token.h"

void error(ErrorCode err, int lineNo, int colNo) {
  switch (err) {
  case ERR_ENDOFCOMMENT:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_ENDOFCOMMENT);
    break;
  case ERR_IDENTTOOLONG:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_IDENTTOOLONG);
    break;
  case ERR_INVALIDCHARCONSTANT:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDCHARCONSTANT);
    break;
  case ERR_INVALIDSYMBOL:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDSYMBOL);
    break;
  case ERR_INVALIDNUMBER:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDNUMBER);
    break;
  case ERR_INVALIDCONSTANT:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDCONSTANT);
    break;
  case ERR_INVALIDTYPE:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDTYPE);
    break;
  case ERR_INVALIDBASICTYPE:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDBASICTYPE);
    break;
  case ERR_INVALIDPARAM:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDPARAM);
    break;
  case ERR_INVALIDSTATEMENT:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDSTATEMENT);
    break;
  case ERR_INVALIDCOMPARATOR:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDCOMPARATOR);
    break;
  case ERR_INVALIDFACTOR:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALIDFACTOR);
    break;
  }
  exit(-1);
}

void missingToken(TokenType tokenType, int lineNo, int colNo) 
{ 
  printf("%d-%d:Missing %s\n", lineNo, colNo, tokenToString(tokenType)); 
  exit(0);
}

void assert(char *msg) 
{ 
  printf("%s\n", msg);
}