function solve() {
    var user = document.getElementById("first").value;
    var pass = document.getElementById("password").value;
    if (user == 'saec' && pass == 'saec@123') {
        console.log("Login Success");
    } else {
        console.log("Wrong Credential");
    }
}