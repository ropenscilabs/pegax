// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// authority_name
std::string authority_name(std::string x);
RcppExport SEXP _pegax_authority_name(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(authority_name(x));
    return rcpp_result_gen;
END_RCPP
}
// authority_year
std::string authority_year(std::string x);
RcppExport SEXP _pegax_authority_year(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(authority_year(x));
    return rcpp_result_gen;
END_RCPP
}
// parse_name
DataFrame parse_name(std::string x);
RcppExport SEXP _pegax_parse_name(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_name(x));
    return rcpp_result_gen;
END_RCPP
}
// replace_all_symbols
std::string replace_all_symbols(std::string x);
RcppExport SEXP _pegax_replace_all_symbols(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_all_symbols(x));
    return rcpp_result_gen;
END_RCPP
}
// replace_specific_symbols
std::string replace_specific_symbols(std::string const& x);
RcppExport SEXP _pegax_replace_specific_symbols(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_specific_symbols(x));
    return rcpp_result_gen;
END_RCPP
}
// rank_names
CharacterVector rank_names(CharacterVector x);
RcppExport SEXP _pegax_rank_names(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rank_names(x));
    return rcpp_result_gen;
END_RCPP
}
// sci_name
DataFrame sci_name(std::string x);
RcppExport SEXP _pegax_sci_name(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sci_name(x));
    return rcpp_result_gen;
END_RCPP
}
// scrub_names
CharacterVector scrub_names(CharacterVector x);
RcppExport SEXP _pegax_scrub_names(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(scrub_names(x));
    return rcpp_result_gen;
END_RCPP
}
