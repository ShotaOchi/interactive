library(interactive)

if (interactive() == TRUE) stop("interactive() returned TRUE.")

if (interactive_rcpp() == FALSE) stop("interactive_rcpp() returned FALSE.")
