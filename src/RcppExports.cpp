// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// print_matrix
void print_matrix(Rcpp::S4 matrix);
RcppExport SEXP _sparseMatrixStats_print_matrix(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type matrix(matrixSEXP);
    print_matrix(matrix);
    return R_NilValue;
END_RCPP
}
// dgCMatrix_colSums2
NumericVector dgCMatrix_colSums2(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colSums2(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colSums2(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colMeans2
NumericVector dgCMatrix_colMeans2(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colMeans2(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colMeans2(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colMedians
NumericVector dgCMatrix_colMedians(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colMedians(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colMedians(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colVars
NumericVector dgCMatrix_colVars(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colVars(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colVars(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colMins
NumericVector dgCMatrix_colMins(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colMins(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colMins(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colMaxs
NumericVector dgCMatrix_colMaxs(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colMaxs(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colMaxs(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colProds
NumericVector dgCMatrix_colProds(S4 matrix, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colProds(SEXP matrixSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colProds(matrix, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colCounts
IntegerVector dgCMatrix_colCounts(S4 matrix, double value, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colCounts(SEXP matrixSEXP, SEXP valueSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colCounts(matrix, value, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colAnyNAs
LogicalVector dgCMatrix_colAnyNAs(S4 matrix);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colAnyNAs(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colAnyNAs(matrix));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colAnys
LogicalVector dgCMatrix_colAnys(S4 matrix, double value, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colAnys(SEXP matrixSEXP, SEXP valueSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colAnys(matrix, value, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// dgCMatrix_colAlls
LogicalVector dgCMatrix_colAlls(S4 matrix, double value, bool na_rm);
RcppExport SEXP _sparseMatrixStats_dgCMatrix_colAlls(SEXP matrixSEXP, SEXP valueSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(dgCMatrix_colAlls(matrix, value, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// subset_sum
double subset_sum(NumericVector v, R_len_t start, R_len_t end);
RcppExport SEXP _sparseMatrixStats_subset_sum(SEXP vSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< R_len_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< R_len_t >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_sum(v, start, end));
    return rcpp_result_gen;
END_RCPP
}
// subset_sum_without_na
double subset_sum_without_na(NumericVector v, R_len_t start, R_len_t end);
RcppExport SEXP _sparseMatrixStats_subset_sum_without_na(SEXP vSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< R_len_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< R_len_t >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_sum_without_na(v, start, end));
    return rcpp_result_gen;
END_RCPP
}
// matrix_subset_sum
NumericVector matrix_subset_sum(Rcpp::S4 matrix, R_len_t start, R_len_t end);
RcppExport SEXP _sparseMatrixStats_matrix_subset_sum(SEXP matrixSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< R_len_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< R_len_t >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_subset_sum(matrix, start, end));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sparseMatrixStats_print_matrix", (DL_FUNC) &_sparseMatrixStats_print_matrix, 1},
    {"_sparseMatrixStats_dgCMatrix_colSums2", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colSums2, 2},
    {"_sparseMatrixStats_dgCMatrix_colMeans2", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colMeans2, 2},
    {"_sparseMatrixStats_dgCMatrix_colMedians", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colMedians, 2},
    {"_sparseMatrixStats_dgCMatrix_colVars", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colVars, 2},
    {"_sparseMatrixStats_dgCMatrix_colMins", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colMins, 2},
    {"_sparseMatrixStats_dgCMatrix_colMaxs", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colMaxs, 2},
    {"_sparseMatrixStats_dgCMatrix_colProds", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colProds, 2},
    {"_sparseMatrixStats_dgCMatrix_colCounts", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colCounts, 3},
    {"_sparseMatrixStats_dgCMatrix_colAnyNAs", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colAnyNAs, 1},
    {"_sparseMatrixStats_dgCMatrix_colAnys", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colAnys, 3},
    {"_sparseMatrixStats_dgCMatrix_colAlls", (DL_FUNC) &_sparseMatrixStats_dgCMatrix_colAlls, 3},
    {"_sparseMatrixStats_subset_sum", (DL_FUNC) &_sparseMatrixStats_subset_sum, 3},
    {"_sparseMatrixStats_subset_sum_without_na", (DL_FUNC) &_sparseMatrixStats_subset_sum_without_na, 3},
    {"_sparseMatrixStats_matrix_subset_sum", (DL_FUNC) &_sparseMatrixStats_matrix_subset_sum, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sparseMatrixStats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
