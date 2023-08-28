#include <Rcpp.h>

//' Use interactive function from Rcpp
//'
//' @export
// [[Rcpp::export]]
bool interactive_rcpp()
{
  Rcpp::Function f("interactive");
  return f();
}