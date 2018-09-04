{"filter":false,"title":"jsprueba.js","tooltip":"/DAW/BackEnd_PHP/js/jsprueba.js","undoManager":{"mark":4,"position":4,"stack":[[{"start":{"row":0,"column":0},"end":{"row":2,"column":1},"action":"insert","lines":["function buscarAlumna() {","    $('#modalAlumnas').modal('open');","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":174,"column":16},"action":"insert","lines":["$(document).ready(function() {","    $('.modal').modal();","    if ((document.getElementById('descripcionimagen')) && (document.getElementById('descripcionimagen').value == \"\") && (document.getElementById('nombrearchivo').value == \"\")) {","        $('#ocultardescripcion').hide();","    }","    ","    if (document.getElementById('listaNoticias')) {","           despliegaNoticias(1);","    }","    ","    //Mostrar y ocultar descripción de imagen","    $('#nombrearchivo').change(function() {","        var file = document.getElementById('imagennoticia').files[0];","        if(file.size > 8388608) { // 8 MB ","            alert(\"Archivo demasiado grande. El máximo es de 8 MB\");","            document.getElementById('imagennoticia').value=\"\";","            document.getElementById('nombrearchivo').value=\"\";","        } else {","            if (document.getElementById('imagennoticia').value == \"\") {","               $('#ocultardescripcion').hide('fold');","                $('#descripcionimagen').css('value', \"\");","            } else {","                $('#ocultardescripcion').show('fold');","            }","        }","    });","    ","    //Descartar imagen seleccionada por el usuario y limpiar campos","    $('#descartarImagen').click(function() {","       $('#ocultardescripcion').hide('fold');","        document.getElementById('descripcionimagen').value =\"\";","        document.getElementById('imagennoticia').value=\"\";","        document.getElementById('nombrearchivo').value=\"\";","    });","});","","","function confirmarEliminacionNoticia(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarNoticia(id);};","}","","function eliminarNoticia(id) {","    $.ajax({url: \"eliminarNoticia.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","","  /*-------------------- USUARIO --------------------------*/","  ","function confirmarEliminacionUsuario(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarUsuario(id);};","}","","function eliminarUsuario(id) {","    $.ajax({url: \"eliminarUsuario.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","   /*----------- TERMINA USUARIOS------------*/","   ","   /*-------------ALUMNAS-------------*/","   ","function confirmarEliminacionAlumna(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarAlumna(id);};","}","","function eliminarAlumna(id) {","    $.ajax({url: \"eliminarAlumno.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","function mostrarInformacion(id){","    //var link = '\"https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/mostrar_infoAlumnas.php?id='+id\"';","    window.location.href = 'https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/mostrar_infoAlumnas.php?id='+id;","}","","","/*-----------TERMINA ALUMNAS-----------*/","","","function despliegaNoticias(pagina) {","    var noticiasporpagina = 5;","    var request = getRequestObject();","    if (request != null) {","        var url = 'ajax/desplegarNoticias.php';","        request.open('GET',url,true);","        request.onreadystatechange = ","            function() {","                if (request.readyState == 4) {","                    var ajaxResponse = document.getElementById(\"listaNoticias\");","                    var arregloNoticias = request.response;","                    arregloNoticias  = JSON.parse(arregloNoticias);","                    var noticiainicial = (pagina-1)*noticiasporpagina;","                    var lista = \"\";","                    var i= noticiainicial;","                    while (i<(noticiainicial+noticiasporpagina) && arregloNoticias[i]) {","                        lista+= arregloNoticias[i];","                        i++;","                    }","                    ajaxResponse.innerHTML = lista;","                }","        };","        request.send();","    }","    ","    $('.active').removeClass('active');","    $('#'+pagina).addClass('active');","}","","function siguientesPaginas() {","    ","}","","function paginasAnteriores() {","   ","}","","function getRequestObject() {","  // Asynchronous objec created, handles browser DOM differences","","  if(window.XMLHttpRequest) { ","    // Mozilla, Opera, Safari, Chrome IE 7+","    return (new XMLHttpRequest());","  }","  else if (window.ActiveXObject) {","    // IE 6-","    return (new ActiveXObject(\"Microsoft.XMLHTTP\"));","  } else {","    // Non AJAX browsers","    return(null);","  }","}","","function despliegaLista(){","    var request = getRequestObject();","    if (request!=null) {","        var userInput = document.getElementById(\"userInput\");","        var url = 'ajax.php?pattern='+userInput.value;","        request.open('GET',url,true);","        request.onreadystatechange = ","            function() {","                if (request.readyState == 4) {","                    var ajaxResponse = document.getElementById(\"ajaxResponse\");","                    ajaxResponse.innerHTML = request.responseText;","                    ajaxResponse.style.visibility = \"visible\";","                }","        };","        request.send();","    }","}","","/*TALLERES*/","","function confirmarEliminacionTaller(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarTaller(id);};","}","","function eliminarTaller(id) {","    $.ajax({url: \"eliminarTaller.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","/*END TALLERES*/"],"id":2}],[{"start":{"row":174,"column":16},"end":{"row":175,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":175,"column":0},"end":{"row":177,"column":1},"action":"remove","lines":["function buscarAlumna() {","    $('#modalAlumnas').modal('open');","}"],"id":4}],[{"start":{"row":0,"column":0},"end":{"row":175,"column":0},"action":"remove","lines":["$(document).ready(function() {","    $('.modal').modal();","    if ((document.getElementById('descripcionimagen')) && (document.getElementById('descripcionimagen').value == \"\") && (document.getElementById('nombrearchivo').value == \"\")) {","        $('#ocultardescripcion').hide();","    }","    ","    if (document.getElementById('listaNoticias')) {","           despliegaNoticias(1);","    }","    ","    //Mostrar y ocultar descripción de imagen","    $('#nombrearchivo').change(function() {","        var file = document.getElementById('imagennoticia').files[0];","        if(file.size > 8388608) { // 8 MB ","            alert(\"Archivo demasiado grande. El máximo es de 8 MB\");","            document.getElementById('imagennoticia').value=\"\";","            document.getElementById('nombrearchivo').value=\"\";","        } else {","            if (document.getElementById('imagennoticia').value == \"\") {","               $('#ocultardescripcion').hide('fold');","                $('#descripcionimagen').css('value', \"\");","            } else {","                $('#ocultardescripcion').show('fold');","            }","        }","    });","    ","    //Descartar imagen seleccionada por el usuario y limpiar campos","    $('#descartarImagen').click(function() {","       $('#ocultardescripcion').hide('fold');","        document.getElementById('descripcionimagen').value =\"\";","        document.getElementById('imagennoticia').value=\"\";","        document.getElementById('nombrearchivo').value=\"\";","    });","});","","","function confirmarEliminacionNoticia(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarNoticia(id);};","}","","function eliminarNoticia(id) {","    $.ajax({url: \"eliminarNoticia.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","","  /*-------------------- USUARIO --------------------------*/","  ","function confirmarEliminacionUsuario(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarUsuario(id);};","}","","function eliminarUsuario(id) {","    $.ajax({url: \"eliminarUsuario.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","   /*----------- TERMINA USUARIOS------------*/","   ","   /*-------------ALUMNAS-------------*/","   ","function confirmarEliminacionAlumna(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarAlumna(id);};","}","","function eliminarAlumna(id) {","    $.ajax({url: \"eliminarAlumno.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","function mostrarInformacion(id){","    //var link = '\"https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/mostrar_infoAlumnas.php?id='+id\"';","    window.location.href = 'https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/mostrar_infoAlumnas.php?id='+id;","}","","","/*-----------TERMINA ALUMNAS-----------*/","","","function despliegaNoticias(pagina) {","    var noticiasporpagina = 5;","    var request = getRequestObject();","    if (request != null) {","        var url = 'ajax/desplegarNoticias.php';","        request.open('GET',url,true);","        request.onreadystatechange = ","            function() {","                if (request.readyState == 4) {","                    var ajaxResponse = document.getElementById(\"listaNoticias\");","                    var arregloNoticias = request.response;","                    arregloNoticias  = JSON.parse(arregloNoticias);","                    var noticiainicial = (pagina-1)*noticiasporpagina;","                    var lista = \"\";","                    var i= noticiainicial;","                    while (i<(noticiainicial+noticiasporpagina) && arregloNoticias[i]) {","                        lista+= arregloNoticias[i];","                        i++;","                    }","                    ajaxResponse.innerHTML = lista;","                }","        };","        request.send();","    }","    ","    $('.active').removeClass('active');","    $('#'+pagina).addClass('active');","}","","function siguientesPaginas() {","    ","}","","function paginasAnteriores() {","   ","}","","function getRequestObject() {","  // Asynchronous objec created, handles browser DOM differences","","  if(window.XMLHttpRequest) { ","    // Mozilla, Opera, Safari, Chrome IE 7+","    return (new XMLHttpRequest());","  }","  else if (window.ActiveXObject) {","    // IE 6-","    return (new ActiveXObject(\"Microsoft.XMLHTTP\"));","  } else {","    // Non AJAX browsers","    return(null);","  }","}","","function despliegaLista(){","    var request = getRequestObject();","    if (request!=null) {","        var userInput = document.getElementById(\"userInput\");","        var url = 'ajax.php?pattern='+userInput.value;","        request.open('GET',url,true);","        request.onreadystatechange = ","            function() {","                if (request.readyState == 4) {","                    var ajaxResponse = document.getElementById(\"ajaxResponse\");","                    ajaxResponse.innerHTML = request.responseText;","                    ajaxResponse.style.visibility = \"visible\";","                }","        };","        request.send();","    }","}","","/*TALLERES*/","","function confirmarEliminacionTaller(id) {","    $('#confirmar').modal('open');","    document.getElementById('botonEliminar').onclick = function() {eliminarTaller(id);};","}","","function eliminarTaller(id) {","    $.ajax({url: \"eliminarTaller.php?id=\"+id, success: function(){","            $('#exito').modal('open');","        }","    });","}","","/*END TALLERES*/",""],"id":5}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":0},"end":{"row":0,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":162,"mode":"ace/mode/javascript"}},"timestamp":1493149816785,"hash":"da39a3ee5e6b4b0d3255bfef95601890afd80709"}