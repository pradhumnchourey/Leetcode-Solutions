suppose s = "**abcabc**"
let t = "abcabcabcabc"
now remove the first and last element from t,
then t = "bcabcabcab"
now search for s in t,
if s = abcabc is found in t i.e., t = "bc **abcabc** bc"
then just return true
else return false.