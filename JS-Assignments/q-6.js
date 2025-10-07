let tempc = 90;

let tempf = 1.8 * tempc + 32;

if(tempf<0){
    console.log("Freezing Cold");
}
else if(tempf > 0 & tempf <= 15){
    console.log("Very Cold");
}
else if(tempf > 15 & tempf<=25){
    console.log("Cold");
}
else if(tempf >25 & tempf <= 35){
    console.log("Warm");
}
else{
    console.log("Hot");
}