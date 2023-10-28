#!/bin/zsh
for i in $(find . -type f \( -name "*.cpp" -o -name "*.h" \)); do
    mv "$i" "Aaron_Shey_+$i"
end

# test change
