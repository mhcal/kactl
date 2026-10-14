;; -*- lexical-binding: t; -*-

(TeX-add-style-hook
 "kactl"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("extreport" "9pt" "a4paper" "notitlepage")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("kactlpkg" "")))
   (TeX-run-style-hooks
    "latex2e"
    "extreport"
    "extreport10"
    "kactlpkg"))
 :latex)

