let income = 758938;

if(income <= 250000){
    console.log("No Tax");
}
else if(income > 250000 & income<=500000){
    console.log("5% Tax");
}
else if(income > 500000 & income <= 1000000){
    console.log("20% Tax");
}
else{
    console.log("30% Tax");
}