function sum(...Args){
    let total = 0;
    for (const i of Args){
        total += i;
    }
    return total;
}

function product(...Args){
    let total = 1;
    for (const i of Args){
        total *= i;
    }
    return total;
}

console.log(sum(1,2,3));
console.log(sum(1,2,3,5,6,7));
console.log(product(1,2,3));
console.log(product(1,2,3,5,6,7));