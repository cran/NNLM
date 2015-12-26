// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace arma;

// nnlm
Rcpp::List nnlm(const mat& x, const mat& y, const vec& alpha, const umat& mask, const mat& beta0, unsigned int max_iter, double rel_tol, int n_threads, int method);
RcppExport SEXP NNLM_nnlm(SEXP xSEXP, SEXP ySEXP, SEXP alphaSEXP, SEXP maskSEXP, SEXP beta0SEXP, SEXP max_iterSEXP, SEXP rel_tolSEXP, SEXP n_threadsSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const vec& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const umat& >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< const mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    __result = Rcpp::wrap(nnlm(x, y, alpha, mask, beta0, max_iter, rel_tol, n_threads, method));
    return __result;
END_RCPP
}
// nnmf
Rcpp::List nnmf(const mat& A, const unsigned int k, mat W, mat H, umat Wm, umat Hm, const vec& alpha, const vec& beta, const unsigned int max_iter, const double rel_tol, const int n_threads, const int verbose, const bool show_warning, const unsigned int inner_max_iter, const double inner_rel_tol, const int method, unsigned int trace);
RcppExport SEXP NNLM_nnmf(SEXP ASEXP, SEXP kSEXP, SEXP WSEXP, SEXP HSEXP, SEXP WmSEXP, SEXP HmSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP max_iterSEXP, SEXP rel_tolSEXP, SEXP n_threadsSEXP, SEXP verboseSEXP, SEXP show_warningSEXP, SEXP inner_max_iterSEXP, SEXP inner_rel_tolSEXP, SEXP methodSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< umat >::type Wm(WmSEXP);
    Rcpp::traits::input_parameter< umat >::type Hm(HmSEXP);
    Rcpp::traits::input_parameter< const vec& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< const int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool >::type show_warning(show_warningSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type inner_max_iter(inner_max_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type inner_rel_tol(inner_rel_tolSEXP);
    Rcpp::traits::input_parameter< const int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type trace(traceSEXP);
    __result = Rcpp::wrap(nnmf(A, k, W, H, Wm, Hm, alpha, beta, max_iter, rel_tol, n_threads, verbose, show_warning, inner_max_iter, inner_rel_tol, method, trace));
    return __result;
END_RCPP
}
