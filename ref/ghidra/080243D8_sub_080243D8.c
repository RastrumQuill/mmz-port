// sub_080243D8 at 0x080243D8 (thumb)

undefined4 sub_080243D8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_0801B50C(param_1,1);
  if ((bVar1 & *(byte *)(param_1 + 0x12d)) == 0) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08018534(param_1);
      sub_080186BC(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    sub_08018BE8(param_1,0x21);
    *(undefined *)(param_1 + 0x121) = 2;
  }
  return in_lr;
}

