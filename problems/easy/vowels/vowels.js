function getvowels(word) {
    let vowels = 0;
    const vowelSet = 'aeiouAEIOU'; // Including uppercase for safety
  
    for (let i = 0; i < word.length; i++) {
      if (vowelSet.includes(word[i])) {
        vowels += 1;
      }
    }
  
    return vowels;
  }
  console.log(getvowels("Celebration"));
  module.exports = getvowels;
  