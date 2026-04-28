function circuitPower(voltage, current){
    var power = voltage * current;
    // here i'll use formatted string using template literals
    console.log(`Resultant power output is ${power} watt from ${voltage} volt and ${current} ampere`);
}

circuitPower(12, 4);