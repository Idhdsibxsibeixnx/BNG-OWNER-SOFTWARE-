/* Add some fun animations */
@keyframes spin {
  from {
    transform: rotate(0deg);
  }
  to {
    transform: rotate(360deg);
  }
}

@keyframes bounce {
  0%, 100% {
    transform: translateY(0);
  }
  50% {
    transform: translateY(-20px);
  }
}

@keyframes shake {
  0%, 100% {
    transform: translateX(0);
  }
  25%, 75% {
    transform: translateX(-10px);
  }
  50% {
    transform: translateX(10px);
  }
}

@keyframes pulse {
  0%, 100% {
    transform: scale(1);
  }
  50% {
    transform: scale(1.2);
  }
}

.spin {
  animation: spin 1s linear infinite;
}

.bounce {
  animation: bounce 0.5s ease-in-out infinite;
}

.shake {
  animation: shake 0.5s ease-in-out infinite;
}

.pulse {
  animation: pulse 1s ease-in-out infinite;
}
