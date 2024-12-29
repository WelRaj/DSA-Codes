var main= document.querySelector("#main")
var csr= document.querySelector(".cursor")
main.addEventListener("mousemove",function(dets){
    csr.style.left = dets.x+"px";
    csr.style.top= dets.y+"px";
})