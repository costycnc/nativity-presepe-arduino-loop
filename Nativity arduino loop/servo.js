var connectionId = -1;

function onOpen(connectionInfo) {
  if (!connectionInfo) {
    setStatus('Could not open');
    return;
  }
  connectionId = connectionInfo.connectionId;
  setStatus('Connected');
  
};

function setStatus(status) {
  document.getElementById('status').innerText = status;
}



function buildPortPicker(ports) {
  var eligiblePorts = ports.filter(function(port) {
    return !port.path.match(/[Bb]luetooth/);
  });

  var portPicker = document.getElementById('port-picker');
  eligiblePorts.forEach(function(port) {
    var portOption = document.createElement('option');
    portOption.value = portOption.innerText = port.path;
    portPicker.appendChild(portOption);
  });

  portPicker.onchange = function() {
    if (connectionId != -1) {
      chrome.serial.disconnect(connectionId, openSelectedPort);
      return;
    }
    openSelectedPort();
  };
}

function openSelectedPort() {
  var portPicker = document.getElementById('port-picker');
  var selectedPort = portPicker.options[portPicker.selectedIndex].value;
  chrome.serial.connect(selectedPort, onOpen);
}

var str2ab = function(str) {
   var encodedString = unescape(encodeURIComponent(str));
   var bytes = new Uint8Array(encodedString.length);
   for (var i = 0; i < encodedString.length; ++i) {
      bytes[i] = encodedString.charCodeAt(i);
   }
   return bytes.buffer;
};

onload = function() {
  
   document.getElementById('costy').onclick = function() {
     var s="";
      
for (i = 1; i < 120; i++) { 
if(document.getElementsByTagName("input")[i].checked)
 {
s=s+"1";
}else {
s=s+"0";
}
  document.getElementById("value").value=s;
}
     


};
  
  document.getElementById('button').onclick = function() {
 //var msg = "01100011000011110000111";
     var msg = document.getElementById('value').value;
    console.log(value);

  chrome.serial.send(connectionId, str2ab(msg), function() {} );
    
  };

  chrome.serial.getDevices(function(ports) {
    buildPortPicker(ports)
    openSelectedPort();
  });
};
