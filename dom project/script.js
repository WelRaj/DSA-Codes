var istatus = document.querySelector("h5")
var addFriend= document.querySelector(".add-btn")
var btn = document.querySelector(".buttons")
var check=0;
addFriend.addEventListener("click",function(){
    if(check==0){
    istatus.innerHTML="Friends"
    istatus.style.color="green"
    addFriend.innerHTML="Remove"
    check=1;
}
else{
        istatus.innerHTML="stranger"
        istatus.style.color="red"
         addFriend.innerHTML="Add friend"
        check=0;
}
})