pegax
=====



[![Build Status](https://travis-ci.org/ropenscilabs/pegax.svg?branch=master)](https://travis-ci.org/ropenscilabs/pegax)
[![codecov.io](https://codecov.io/github/ropenscilabs/pegax/coverage.svg?branch=master)](https://codecov.io/github/ropenscilabs/pegax?branch=master)


Taxonomy PEG (Parsing Expression Grammar) for R

## Example rules

Capture any letter

```
struct name
  : plus< alpha >
{};
```

Capture any digit

```
struct numbers
  : plus< digit >
{};
```

## Rules are combined to form a grammar

e.g., string must match `name`, then have one comma, then one space,
then match `numbers`.

```
struct grammar
  : must< name, one< ',' >, space, numbers, eof >
{};
```

Which is then applied to parsing user input strings

## Install


```r
devtools::install_github("ropenscilabs/pegax")
```


```r
library("pegax")
```


## Parse authority

Author name


```r
pgx_authority_names("Linnaeus, 1758")
#> [1] "Linnaeus, "
```

Author year


```r
pgx_authority_years("Linnaeus, 1758")
#> [1] "1758"
```

Moar


```r
x <- c('Smith, 1456', 'Foobarcheesestuff, 1001', 'Smith, 1987')
pgx_authority_names(x)
#> [1] "Smith, "             "Foobarcheesestuff, " "Smith, "
pgx_authority_years(x)
#> Error in FUN(X[[i]], ...): mooter:1:7(7): parse error matching authoryear::numbers
```

Even Moar


```r
library("charlatan")
per <- charlatan::PersonProvider$new()
date <- charlatan::DateTimeProvider$new()
x <- replicate(10^4, paste(
    sample(per$person$last_names, 1),
    date$year(),
    sep = ", "
  )
)
length(x)
#> [1] 10000

# years
invisible(pgx_authority_years(x))
system.time(pgx_authority_years(x))
#>    user  system elapsed
#>   0.036   0.002   0.039

# names
invisible(pgx_authority_names(x))
system.time(pgx_authority_names(x))
#>    user  system elapsed
#>   0.032   0.002   0.034
```

## Parse ranks


```r
pgx_ranks("Fagus sylvatica subsp. orientalis")
#> [1] "subsp"
```

Many at cone


```r
pgx_ranks(c("Helianthus annuus var. annuus",
   "Helianthus annuus ssp. annuus", "Caulerpa cupressoides forma nuda"))
#> [1] "var"   "ssp"   "forma"
```

## R DSL to make custom PEGS for taxonomy

not made yet - but we can dream

```
pegax({
  plus(alpha)
  one(,)
  numbers(,)
  plus(-)
  space
  plus(????)
  plus(:cat2:)
})
```
