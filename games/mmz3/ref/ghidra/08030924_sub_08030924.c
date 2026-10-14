// sub_08030924 at 0x08030924 (thumb)

undefined4 sub_08030924(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x22d) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0xed) = 2;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_080309F8(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xed) = 1;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_08030988(param_1);
  }
  return in_lr;
}

