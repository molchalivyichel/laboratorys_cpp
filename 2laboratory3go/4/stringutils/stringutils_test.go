package stringutils

import (
	"testing"
	"github.com/fatih/color"
)

func TestReverseTrue(t *testing.T) {
	result := Reverse("заказ")
	excepted := string("заказ")

	if result != excepted {
		color.Red("Ошибка")
		t.Errorf("Ожидалось %s, получено %s", excepted, result)
	}
}

func TestReverseFalse(t *testing.T) {
	result := Reverse("такси")
	excepted := string("искит")

	if result != excepted {
		color.Red("Ошибка")
		t.Errorf("Ожидалось %s, получено %s", excepted, result)
	}
}
