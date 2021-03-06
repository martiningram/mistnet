% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/helpers.R
\name{dropoutMask}
\alias{dropoutMask}
\title{Produce a dropout mask}
\usage{
dropoutMask(n.row, n.col, prob = 0.5)
}
\arguments{
\item{n.row}{the number of rows desired}

\item{n.col}{the number of columns desired}

\item{prob}{the probability that an element of the matrix is one rather than zero}
}
\description{
Produces a binary matrix, with each element independently sampled as 1 or 0
with probabilty 0.5.
Code is based on the "josh" function from 
https://gist.github.com/sckott/3639688
}
