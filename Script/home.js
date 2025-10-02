document.addEventListener('DOMContentLoaded', () => {
    const startGameButton = document.getElementById('startGame');
    
    startGameButton.addEventListener('click', () => {
        window.location.href = 'index.html';
    });
});