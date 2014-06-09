/**
** COMMON JAVASCRIPT
**
**/
(function(Euler){
	Euler.print = function(options) {
		var a = document.createElement("span"), c;
        a.setAttribute("class", options.cssclass);
		a.innerHTML = Euler.addComma({number:options.num});
						document.getElementById("results").innerHTML = "";
						document.getElementById("results").appendChild(a);
						if(!options.last){
							document.getElementById("results").appendChild(document.createTextNode("+"));
						}
	};
	Euler.addComma = function(options) {
		var rgx = /(\d+)(\d{3})/;//regex for three numbers
		options.number = options.number + '';//convert the number to a string
		while (rgx.test(options.number)) {
			options.number = options.number.replace(rgx, '$1' + ',' + '$2');
		}
		return options.number;
	};
}(window.Euler = window.Euler || {}));