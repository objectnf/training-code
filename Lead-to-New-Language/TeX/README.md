# Compile Commands

Settings in TeXStudio

XeLaTeX:

```bash
xelatex.exe -shell-escape -synctex=1 -interaction=nonstopmode %.tex
```

DviPs:

```bash
dvips.exe -Ppdf -G0 -o %.ps %.dvi
```

Ps2Pdf:

```bash
ps2pdf.exe -dPDFSETTINGS=/prepress -dCompatibilityLevel=1.4 -dAutoFilterColorImages=false -dAutoFilterGrayImages=false -dDownsampleColorImages=false -dDownsampleGrayImages=false -dSubsetFonts=true -dEmbedAllFonts=true %.ps
```

