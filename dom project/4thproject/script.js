var arr=[
    {
        dp: "https://plus.unsplash.com/premium_photo-1663050935625-108bf0ed9748?w=500&auto=format&fit=crop&q =60&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8MXx8bW9kZWwlMjBtb3xlbnwwfHwwfHx8MA%3D%3D",
        story:"https://plus.unsplash.com/premium_photo-1663051008811-dc9926c306db?q=80&w=1874&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
    },
    {
        dp: "https://media.istockphoto.com/id/1187317493/photo/natural-beauty-of-gorgeous-woman-with-moustache.jpg?s=2048x2048&w=is&k=20&c=cDDqma5iPJruujY5PjIeVf32iMFhxF78A82x9A3qI3Y=",
        story:"https://media.istockphoto.com/id/1187322349/photo/attractive-female-with-moustache-no-shave-november-concept.jpg?s=612x612&w=0&k=20&c=KL1oE6OS74NzLbiaggzGXvwyQb6mu4f8n15_Lbw5xF0="
    },{
        dp:"https://images.unsplash.com/photo-1726047336766-d2f4c678a75a?q=80&w=1887&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D",
        story :"https://images.unsplash.com/photo-1726047336166-5634aaa136c0?q=80&w=1887&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
    },{
        dp:"https://media.istockphoto.com/id/511675328/photo/beautiful-young-girl-with-flower-crown.jpg?s=1024x1024&w=is&k=20&c=MQ1V01RgdRvmnQQ-3GaasqIDX-VAzLjMGqqm5jvYnf0=",
        story:"https://media.istockphoto.com/id/524888026/photo/smiling-indian-young-girl-head-with-flower-crown.jpg?s=612x612&w=0&k=20&c=P6AU--OayfDf3tsQRx50WzR6flpLKossGsvIVinXWI4=" },
        {
            dp:"https://media.istockphoto.com/id/1011490478/photo/portrait-of-a-young-woman-with-a-beautiful-smile.jpg?s=612x612&w=0&k=20&c=3xj9gsE874HbCZIDm5lxhmcNee3iteo3dE1-ws0y-H8=",
            story:"https://media.istockphoto.com/id/1304547222/photo/glamour-portrait-of-beautiful-woman.jpg?s=612x612&w=0&k=20&c=kiRKdJDxdqEz-lXRCqAuDzEoNsTk-_NZ-SsB2OLGM8Y="
        }
]
var stories= document.querySelector("#stories")
var clutter =""
arr.forEach(function(elem,idx){
    clutter +=`<div class="story">
                <img id="${idx}" src="${elem.dp}" alt="">
            </div>`
});
stories.innerHTML = clutter;
stories.addEventListener("click",function(dets){ 
    document.querySelector("#full-screen").style.display="block"
    document.querySelector("#full-screen").style.backgroundImage=`url(${arr[dets.target.id].story})`
    setTimeout(function(){
        document.querySelector("#full-screen").style.display="none"; 
    },7000)
}); 
