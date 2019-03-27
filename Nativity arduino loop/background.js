chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {
    innerBounds: {
      width: 350,
      height: 320
    }
  });
})
