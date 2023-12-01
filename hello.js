
document.querySelector('form').addEventListener('sibmit',function(event){
    let name = document.querySeclector('#name').value;
    alert('hello, ' + name);
    event.preverntDefault();
   });
