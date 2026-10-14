// sub_08030AD8 at 0x08030AD8 (thumb)

undefined4 sub_08030AD8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  *(undefined *)(param_1 + 0x133) = 0;
  if ((*(char *)(param_1 + 0x225) == '\x03') || (cVar1 == '\x02')) {
    *(undefined *)(param_1 + 0xed) = 7;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_08030C3C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xed) = 1;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_08030B48(param_1);
  }
  return in_lr;
}

