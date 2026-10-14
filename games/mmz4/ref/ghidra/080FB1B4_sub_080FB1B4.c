// sub_080FB1B4 at 0x080FB1B4 (thumb)

undefined4 sub_080FB1B4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0xbd) != '\0') {
      sub_08002B10(0x187);
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0801CF00(param_1,0xbf01);
      }
      else {
        sub_0801CF00(param_1,0xbf04);
      }
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_08002B5C(0x187);
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0801CF00(param_1,0xbf02);
      }
      else {
        sub_0801CF00(param_1,0xbf05);
      }
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x04') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_0801CF00(param_1,0xbf00);
    }
    else {
      sub_0801CF00(param_1,0xbf03);
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0xbd) = 0;
  return in_lr;
}

