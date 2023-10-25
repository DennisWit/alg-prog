import (
	"strings"
)


func isPalindrome(s string) bool {
	var IsIt string
	for _, char := range s {
		if (char >= 'a' && char <= 'z') || (char >= 'A' && char <= 'Z') || (char >= '0' && char <= '9') { 
			IsIt += strings.ToLower(string(char))
		}
	}
	for i := 0; i < len(IsIt)/2; i++ {
		if IsIt[i] != IsIt[len(IsIt)-i-1] { 
			return false
	}
	}
	return true
}
