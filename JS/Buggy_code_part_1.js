/**
This is the buggy code i got

function cubes(a) {
    retunr a ** 3
}

*/

//So here's the corrected Code
function cubes(a) {
    return a ** 3;
}

// inorder to test it, I'll run a console output.
let input_integer = 5;
console.log('Cube of ' + input_integer + " is " + cubes(input_integer));