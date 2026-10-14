// sub_08045D20 at 0x08045D20 (thumb)

undefined4 sub_08045D20(int param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080297C0();
  *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xde) + '\x01';
  if (*(char *)(param_1 + 0xca) == '\0') {
    if (*(short *)(param_1 + 0x8c) < 0x30) {
      if (*(byte *)(DAT_02022b20 + 1) < 5) {
        uVar1 = 0xc;
      }
      else {
        uVar1 = 0x15;
      }
    }
    else {
      uVar1 = 0xc;
    }
  }
  else {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      uVar1 = 0x12;
    }
    else {
      uVar1 = 0xf;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  bVar2 = sub_080C8B68(*(byte *)(param_1 + 0xca) + 1,3);
  *(byte *)(param_1 + 0xca) = bVar2;
  return in_lr;
}

