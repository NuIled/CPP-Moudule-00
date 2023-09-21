#!/bin/bash

ClassName="$1"
Header="${ClassName}.hpp"
CppFile="${ClassName}.cpp"

if [ -e "$Header" ] || [ -e "$CppFile" ]; then
	echo "Error: Files already exist."
	exit 1
fi

echo "#ifndef ${ClassName}_H" > "$Header"
echo "#define ${ClassName}_H" >> "$Header"
echo "" >> "$Header"
echo "class $ClassName {" >> "$Header"
echo "public:" >> "$Header"
echo "		$ClassName();" >> "$Header"
echo "		~$ClassName();" >> "$Header"
echo "};" >> "$Header"
echo "" >> "$Header"
echo "#endif // ${ClassName}_H" >> "$Header"

echo "#include \"${ClassName}.hpp\"" > "$CppFile"
echo "" >> "$CppFile"
echo "$ClassName::$ClassName() {" >> "$CppFile"
echo "    // Constructor implementation" >> "$CppFile"
echo "}" >> "$CppFile"
echo "" >> "$CppFile"
echo "$ClassName::~$ClassName() {" >> "$CppFile"
echo "		// Destructor implementation" >> "$CppFile"
echo "}" >> "$CppFile"

echo "Created $Header and $CppFile."
