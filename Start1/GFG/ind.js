const characters =[
    {name:'John',gender:"Male",mass:123},
    {name:'Johnathon',gender:"Male",mass:134},
    {name:'Ken',gender:"Male",mass:67},
    {name:'Jenny',gender:"Female",mass:56}
]
//get an array of all names.
const names =characters.map(ch => ch.name)
console.log(names)

