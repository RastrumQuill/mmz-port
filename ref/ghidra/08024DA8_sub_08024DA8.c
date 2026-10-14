// sub_08024DA8 at 0x08024DA8 (thumb)

undefined4 sub_08024DA8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_0801B50C(param_1,1);
  if ((bVar1 & *(byte *)(param_1 + 0x12d)) == 0) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08018580(param_1);
      sub_080186CC(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    sub_08018BE8(param_1,0x23);
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar1 & 0xc) != 0) {
      bVar1 = bVar1 >> 3;
      *(byte *)(param_1 + 0x44) = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
  }
  return in_lr;
}

