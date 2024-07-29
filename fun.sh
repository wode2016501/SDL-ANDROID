grep 'undefined symbol' k|awk -F ':' '{print "int"$4"(){\n\tif(dlog)fprintf(stderr,\""$4"\\n\");\n\treturn 0;\n}"}' >>api-test.sh
