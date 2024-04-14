<script type="text/javascript"> 
$(function() {
    $("#sampleUserInfoForm").validate({ 
        rules: { firstName: { required: true }, 
        lastName: { required: true }, 
        favoriteMovie: { required: true } 
        }, 
        messages: { firstName: { required: "First Name is a required field!!!" }, 
        lastName: { required: "Last Name is a required field!!!" }, 
        favoriteMovie: { required: "Favorite movie is a required field!!!" } 
        } 
    }); 
}); 
</script>