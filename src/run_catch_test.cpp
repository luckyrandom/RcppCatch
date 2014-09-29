#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export(.catch_list_tests)]]
DataFrame catch_list_tests(CharacterVector test_spec = "");


// [[Rcpp::export(.catch_list_tags)]]
DataFrame catch_list_tags(CharacterVector test_spec = "");

// [[Rcpp::export(.catch_list_reporters)]]
DataFrame catch_list_reporters();

// [[Rcpp::export(.catch_run_test)]]
int catch_run_test(CharacterVector test_spec = "",
                   bool show_successful_tests = false,
                   int abort_after_failures = -1,
                   std::string reporter_name = "console",
                   std::string name = "",
                   bool break_into_debugger = false,
                   bool no_throw = false,
                   std::string durations = "DefaultForReporter");


#include <rcpp_catch_runner.inc>
