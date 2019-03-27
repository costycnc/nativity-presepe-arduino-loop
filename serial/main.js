var connectionId;

/* Converts a string to UTF-8 encoding in a Uint8Array; returns the array */

var str2ab = function(str) {
   var encodedString = unescape(encodeURIComponent(str));
   var bytes = new Uint8Array(encodedString.length);
   for (var i = 0; i < encodedString.length; ++i) {
      bytes[i] = encodedString.charCodeAt(i);
   }
   return bytes.buffer;
};

var options = {
  'bitrate': 9600,
  'dataBits': 'eight',
  'parityBit': 'no',
  'stopBits': 'one'
}

document.addEventListener('DOMContentLoaded', function () {
  document.querySelector('button').addEventListener('click', btnSend);
  chrome.serial.connect('COM3', options, function(info) {
    connectionId = info.connectionId;
    console.log("Connection din nou established.");
  });
});

var btnSend = function() {
  //var msg = "1111000010000000100000001000000010000000\n";

 var msg =  document.getElementById("description1").value;
console.log(msg);

  chrome.serial.send(connectionId, str2ab(msg), function() {} );
}

function insertText(text) {
    document.getElementById("description").value = text;

}

document.addEventListener('DOMContentLoaded', function() {
    var link = document.getElementById('link');
    link.addEventListener('click', function() {
        insertText('Sample text here');
        console.log("bla1");
    });
});