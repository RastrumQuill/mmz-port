// sub_080B5528 at 0x080B5528 (thumb)

undefined4 sub_080B5528(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(char *)(param_1 + 0x12) = (*(char *)(param_1 + 0x11) + '\x01') * '\f';
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

