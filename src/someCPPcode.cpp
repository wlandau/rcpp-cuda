#include <Rcpp.h>
using namespace Rcpp;

RcppExport SEXP someCPPcode(SEXP r) {
BEGIN_RCPP
  S4 c(r);
  double *x = REAL(c.slot("x"));
  int *y = INTEGER(c.slot("y"));
  x[0] = 500.0;
  y[1] = 1000;
  return R_NilValue;
END_RCPP
}
