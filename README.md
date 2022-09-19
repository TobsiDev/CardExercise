# Card Exercise

<details open> <!-- delete the 'open' tag -->
<summary><h2>Plan</h2></summary>
<h3> Text goes here </h3>

### Hi

```
deckArray [52]

randomCard(deckArray[], userArr[], opponentArr[]){
    int counter = 0;
    while(counter < 2){
        
        userArr[counter] = CardNumber();
        opponentArr[counter] = CardNumber();
        counter++;
    }
}

int CardNumber(){
    while(stop != true){
        int number = getRandomNumber() // The random number function 
        if(deckArray[number] != 0){ // If the card is taken the variable has 0 as it's value
            deckArray[number] = 0;
            stop = true;
        }
    }
    return number;
}

```

</details>