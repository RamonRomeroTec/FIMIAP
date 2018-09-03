$(document).ready(function() {
    
    
    
    $('.modal').modal();
    if ((document.getElementById('descripcionimagen')) && (document.getElementById('descripcionimagen').value == "") && (document.getElementById('nombrearchivo').value == "")) {
        $('#ocultardescripcion').hide();
    }
    
    if (document.getElementById('listaNoticias')) {
           despliegaNoticias(1);
    }
    
    if (document.getElementById('talleresDeAlumna')) {
        $("#talleresDeAlumna").hide();
    }
    
    if (document.getElementById('imagenesGaleria')) {
        cargarImagenesGaleria();
    }
    
   
    
    if (document.getElementById('hideable')) {
        $("#hideable").hide();
    }
    
    $("#nombreImagenGaleria").change(function() {
        var file = document.getElementById('imagenGaleria').files[0];
        if(file.size > 25165824) { // 24 MB 
            alert("Archivo demasiado grande. El máximo es de 24 MB");
            document.getElementById('imagenGaleria').value="";
            document.getElementById('nomreImagenGaleria').value="";
        } else {
            $("#hideable").show(1000);
        }
    });
        
    
    //Mostrar y ocultar descripción de imagen
    $('#nombrearchivo').change(function() {
        var file = document.getElementById('imagennoticia').files[0];
        if(file.size > 25165824) { // 24 MB 
            alert("Archivo demasiado grande. El máximo es de 24 MB");
            document.getElementById('imagennoticia').value="";
            document.getElementById('nombrearchivo').value="";
        } else {
            if (document.getElementById('imagennoticia').value == "") {
               $('#ocultardescripcion').hide('fold');
                $('#descripcionimagen').css('value', "");
            } else {
                $('#ocultardescripcion').show('fold');
            }
        }
    });
    
    //Descartar imagen seleccionada por el usuario y limpiar campos
    $('#descartarImagen').click(function() {
       $('#ocultardescripcion').hide('fold');
        document.getElementById('descripcionimagen').value ="";
        document.getElementById('imagennoticia').value="";
        document.getElementById('nombrearchivo').value="";
    });
    
});


function confirmarEliminacionNoticia(id) {
    $('#confirmar').modal('open');
    document.getElementById('botonEliminar').onclick = function() {eliminarNoticia(id);};
}

function eliminarNoticia(id) {
    $.ajax({url: "eliminarNoticia.php?id="+id, success: function(){
            $('#exito').modal('open');
        }
    });
    $.ajax({url: "ajax/listaNoticias.php", success: function(result){
            $('#tablaNoticias').html(result);
        }
    });
    
}


  /*-------------------- USUARIO --------------------------*/
  
function confirmarEliminacionUsuario(id) {
    $('#confirmar').modal('open');
    document.getElementById('botonEliminar').onclick = function() {eliminarUsuario(id);};
}

function eliminarUsuario(id) {
    $.ajax({url: "eliminarUsuario.php?id="+id, success: function(){
            $('#exito').modal('open');
        }
    });
}

//regresa informacion del usuario con id = $id
function mostrarUsuario(id){
    window.location.href = 'https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/consultarInfo_usuario.php?id='+id;
}


   /*----------- TERMINA USUARIOS------------*/
   
   /*-------------ALUMNAS-------------*/
   
function confirmarEliminacionAlumna(id) {
    $('#confirmar').modal('open');
    document.getElementById('botonEliminar').onclick = function() {eliminarAlumna(id);};
}

function eliminarAlumna(id) {
    $.ajax({url: "eliminarAlumno.php?id="+id, success: function(){
            $('#exito').modal('open');
        }
    });
}



function mostrarInformacion(id){
    window.location.href = 'https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/mostrar_infoAlumnas.php?id='+id;
}


/*-----------TERMINA ALUMNAS-----------*/


function despliegaNoticias(pagina) {
    var noticiasporpagina = 5;
    var request = getRequestObject();
    if (request != null) {
        var url = 'ajax/desplegarNoticias.php';
        request.open('GET',url,true);
        request.onreadystatechange = 
            function() {
                if (request.readyState == 4) {
                    var ajaxResponse = document.getElementById("listaNoticias");
                    var arregloNoticias = request.response;
                    arregloNoticias  = JSON.parse(arregloNoticias);
                    var noticiainicial = (pagina-1)*noticiasporpagina;
                    var lista = "";
                    var i= noticiainicial;
                    while (i<(noticiainicial+noticiasporpagina) && arregloNoticias[i]) {
                        lista+= arregloNoticias[i];
                        i++;
                    }
                    ajaxResponse.innerHTML = lista;
                }
        };
        request.send();
    }
    
    $('.active').removeClass('active');
    $('#'+pagina).addClass('active');
}

function siguientesPaginas() {
    
}

function paginasAnteriores() {
   
}

function getRequestObject() {
  // Asynchronous objec created, handles browser DOM differences

  if(window.XMLHttpRequest) { 
    // Mozilla, Opera, Safari, Chrome IE 7+
    return (new XMLHttpRequest());
  }
  else if (window.ActiveXObject) {
    // IE 6-
    return (new ActiveXObject("Microsoft.XMLHTTP"));
  } else {
    // Non AJAX browsers
    return(null);
  }
}

function despliegaLista(){
    var request = getRequestObject();
    if (request!=null) {
        var userInput = document.getElementById("userInput");
        var url = 'ajax.php?pattern='+userInput.value;
        request.open('GET',url,true);
        request.onreadystatechange = 
            function() {
                if (request.readyState == 4) {
                    var ajaxResponse = document.getElementById("ajaxResponse");
                    ajaxResponse.innerHTML = request.responseText;
                    ajaxResponse.style.visibility = "visible";
                }
        };
        request.send();
    }
}

/*TALLERES*/

/*function recuperarAlumnosTaller(id){
    
}
*/

function confirmarEliminacionTaller(id) {
    $('#confirmar').modal('open');
    document.getElementById('botonEliminar').onclick = function() {eliminarTaller(id);};
}

function eliminarTaller(id) {
    $.ajax({url: "eliminarTaller.php?id="+id, success: function(){
            $('#exito').modal('open');
        }
    });
}

//abrir modal para buscar alumnas
function buscarAlumna() {
    document.getElementById("entradaUsuario").value = "";
    $("#modal").addClass("modalStatic");
    $("#loader").show();
    $('#info').hide();
    $("#entradaUsuario").show();
    $("#title").html('Buscar Alumna');
    $("#listaAjax").show();
    document.getElementById('entradaUsuario').onkeyup = function() {actualizarListaAlumnas();};
    $('#modal').modal('open');
    $.ajax({url: "ajax/listaAlumnas.php", success: function(result){
            $('#loader').hide();
            $("#listaAjax").html(result);
        }
    });
}

//la lista de actualiza de acuerdo a lo que escriba el usuario
function actualizarListaAlumnas(){
    $("#loader").show();
    var entradaUsuario = document.getElementById("entradaUsuario").value;
    $.ajax({url: "ajax/listaAlumnas.php?filtro="+entradaUsuario, success: function(result){
            $("#loader").hide();
            $("#listaAjax").html(result);
        }
    });
}


function seleccionarAlumna(id,param) {
    document.getElementById("alumnaSeleccionada").value = param.innerHTML;
    document.getElementById("entradaUsuario").value = "";
    document.getElementById("idAlumna").value = id;
    $('#modal').modal('close');
    mostrarListaTalleresDeAlumna(id);
}


function mostrarListaTalleresDeAlumna(id) {
    $("#talleresDeAlumna").show(500);
    $.ajax({url: "ajax/talleresDeAlumna.php?id="+id, success:function(result) {
            $("#listaTalleres").html(result);
        }
    });
}

//abre modal con información del taller seleccionado
function mostrarInfoTaller(id) {
    $("#entradaUsuario").hide();
    $("#modal").removeClass("modalStatic");
    $("#listaAjax").html("");
    $("#title").html("Información de Taller");
    $("#modal").modal('open');
    $("#loader").show();
    $("#info").show();
    $.ajax({url: "ajax/infoTaller.php?id="+id, success:function(result) {
            $("#loader").hide();
            $("#info").html(result);
        }
    });
}

//abrir modal para buscar Talleres a inscribir
function buscarTaller() {
    document.getElementById("entradaUsuario").value = "";
    $("#modal").addClass("modalStatic");
    $("#title").html("Inscribir Taller");
    $("#info").hide();
    $("#entradaUsuario").show();
    $("#listaAjax").show();
    document.getElementById("entradaUsuario").onkeyup = function() {actualizarListaTalleres();};
    $("#loader").show();
    $('#modal').modal('open');
    var id = document.getElementById("idAlumna").value;
    $.ajax({url: "ajax/listaTalleres.php?id="+id, success: function(result){
            $("#loader").hide();
            $("#listaAjax").html(result);
        }
    });
}

//la lista de talleres se filtra con base a lo que escribe el usuario
function actualizarListaTalleres() {
    $("#loader").show();
    var entradaUsuario = document.getElementById("entradaUsuario").value;
    var id = document.getElementById("idAlumna").value;
    $.ajax({url: "ajax/listaTalleres.php?id="+id+"&input="+entradaUsuario, success:function(result){
            $("#listaAjax").html(result);
            $("#loader").hide();
        }
    });
}

//se abre un modal para inscribir a la alumna a un taller
function seleccionarTaller(idTaller) {
    $("#modal").removeClass("modalStatic");
    $("#title").html("Inscribir taller");
    $("#loader").show();
    $("#listaAjax").hide(100);
    $("#entradaUsuario").hide(100);
    $("#info").html("");
    $.ajax({url: "ajax/infoTaller.php?id="+idTaller+"&inscribir=true", success:function(result){
            $("#loader").hide();
            $("#info").html(result);
            $("#info").show(300);
        }
    });
}

//registrar en base de datos inscripción de alumna
function inscribirTaller(idTaller){
    var monto = document.getElementById("monto").value
    if (isNumeric(monto) && monto>0) {
        var idAlumna = document.getElementById("idAlumna").value;
        $.ajax({url: "ajax/inscripcionTaller.php?idTaller="+idTaller+"&idAlumna="+idAlumna+"&monto="+monto,
        success: function(result) {
            inscripcionTallerExito();
        }
        });
        mostrarListaTalleresDeAlumna(idAlumna);
    } else {
        $("#msgError").show();
    }
}

//eliminar registro de inscripcion en la base de datos
function eliminarInscripcionTaller(idTaller) {
    var idAlumna = document.getElementById("idAlumna").value;
    $.ajax({url: "ajax/inscripcionTaller.php?idTaller="+idTaller+"&idAlumna="+idAlumna,
    success: function() {inscripcionTallerExito();}
        
    });
    mostrarListaTalleresDeAlumna(idAlumna);
}

function inscripcionTallerExito(){
    $("#title").html("¡Modificación realizada con éxito!");
    $("#entradaUsuario").hide(100);
    $("#info").hide(100);
    $("#listaAjax").hide(100);
    $("#regresar").show(300);
}

function isNumeric(n) { 
      return !isNaN(parseFloat(n)) && isFinite(n); 
}


function mostrarInscritas(id){
    window.location.href = 'https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/consultar_Inscritas.php?id='+id;
}

function cargarImagenesGaleria() {
    $("#loader").hide();
    $("#imagenesGaleria").load("ajax/imagenesGaleria.php", function() {
        $(".square").mouseenter(function () {
            $(this).find('.deleteicon').show(300);
        });
        
         $(".square").mouseleave(function () {
            $(this).find(".deleteicon").hide(300);
        });
    });
    /*$.ajax({url: "ajax/imagenesGaleria.php", success: function(result){
        $("#imagenesGaleria").html(result);
    }
    
    });*/
}

function agregarImagenAGaleria() {
    $('#anadirImagen').modal('open');
}

function confirmarEliminacionImagen(id) {
    document.getElementById('siEliminarImagen').onclick = function() {eliminarImagen(id);};
    $('#modalEliminar').modal('open');
}

function eliminarImagen(id){
    $.ajax({url: "ajax/eliminarImagen.php?id="+id, success: function(result) {
        cargarImagenesGaleria();
    }});
}

function showLoader() {
    $("#loader").show(1000);
}



/*END TALLERES*/



/*REPORTES*/

//todo ok
function descargaExcel() {
    window.location.href='https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/reporte_excel_alumnas.php';
}

//todo ok
function descargaPDF() {
    window.location.href='https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/tcpdf/examples/reporte_pdf_alumnas.php';
}

//no se que pasa
function descargaPDFgastos(fi, ff) {
    window.location.href='https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/tcpdf/examples/reporte_pdf_gastos.php?FI='+fi+'&FF='+ff;
}

//que pasa
function descargaPDFTodo(){
    console.log("Descargo todo");
    window.location.href='https://msft3c-ramonromerotec.c9users.io/DAW/BackEnd_PHP/tcpdf/examples/reporte_pdf_gastos.php';
}


/*FIN REPORTES*/