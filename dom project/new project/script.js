
const scroll = new LocomotiveScroll({
    el: document.querySelector('#main'),
    smooth: true
});
var timeout;
function circlesize(){
     var xscale= 1;
     var yscale= 1;
     var xprev=0;
     var yprev=0;
     window.addEventListener("mousemove", function(dets){
        this.clearTimeout(timeout); 
        var xdiff=dets.clientX-xprev;
         var ydiff=dets.clientY-yprev;
         xscale=gsap.utils.clamp(.8,1.2,xdiff);
         xscale=gsap.utils.clamp(.8,1.2,ydiff);      
         xprev= dets.clientX;
         yprev= dets.clientY;
         circleMouseFollower(xscale,yscale);
        timeout=setTimeout(function(){
         document.querySelector("#minicircle").style.transform= `translate(${dets.clientX}px,${dets.clientY}px) scale(1,1)`; 
            
         },100);
    });
}
circlesize();
function firstPageAnim(){
    var tl = gsap.timeline();
    tl.from("#nav",{
         y:'-10',
         opacity: 0,
         duration: 1.5,
         ease: Expo.easeInOut
    })
    .to(".boundingelm",{
        y:0,
        ease: Expo.easeInOut,
        duration: 2,
        delay: -1,
        stagger: .2
   })
   .from("#herofooter",{
    y:-10,
    opacity: 0,
    duration:1.5,
    delay: -1,
    ease: Expo.easeInOut
   })
}
 function circleMouseFollower(xscale,yscale){
     window.addEventListener("mousemove",function(dets){
     document.querySelector("#minicircle").style.transform= `translate(${dets.clientX}px,${dets.clientY}px) scale(${xscale},${yscale})`; 
     });
 }
 circleMouseFollower();

  firstPageAnim() ;