// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_add_biases
NumericMatrix rcpp_add_biases(NumericMatrix m, NumericVector v);
RcppExport SEXP marsrover_rcpp_add_biases(SEXP mSEXP, SEXP vSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericMatrix m = Rcpp::as<NumericMatrix >(mSEXP);
        NumericVector v = Rcpp::as<NumericVector >(vSEXP);
        NumericMatrix __result = rcpp_add_biases(m, v);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rectify
NumericMatrix rectify(NumericMatrix m);
RcppExport SEXP marsrover_rectify(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericMatrix m = Rcpp::as<NumericMatrix >(mSEXP);
        NumericMatrix __result = rectify(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
<<<<<<< HEAD
END_RCPP
}
// repvec
NumericMatrix repvec(NumericVector v, double n);
RcppExport SEXP marsrover_repvec(SEXP vSEXP, SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector v = Rcpp::as<NumericVector >(vSEXP);
        double n = Rcpp::as<double >(nSEXP);
        NumericMatrix __result = repvec(v, n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
=======
>>>>>>> a105340e5d86fb1c2c0de78bd9815c16cd5e7558
END_RCPP
}
