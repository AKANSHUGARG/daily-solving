let student ={
    "name":"ABC",
    "class":"Btech",
    "city":"PQR",
    "rollno":"CU2310990185",    
}


console.log(student.rollno);
console.log(student["rollno"]);

student.University='Delhi';
console.log(student);

let data ={
    "name":"ABC",
    "city":"pune",
    "course":["java","dsa","python"],
    "marks":{
        "cpp":90,"fsk":91, "ds":89, "dbms":80
    }
}

console.log(data);


for(x in data){
    console.log(x),data[x];
}


document.getElementById("root").innerHTML=JSON.stringify(data);