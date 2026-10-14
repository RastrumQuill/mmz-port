// sub_08051AF0 at 0x08051AF0 (thumb)

undefined4 sub_08051AF0(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa106);
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar1 = 0x28;
      }
      else {
        uVar1 = 0x32;
      }
    }
    else {
      uVar1 = 0x40;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    sub_08002B10(0xe7);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    sub_08090BA0(param_1,uVar3 * 2 >> 0x11 & 3);
    *(char *)(param_1 + 0xd6) = *(char *)(param_1 + 0xd6) + -1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if ((*(char *)(param_1 + 0xd6) == '\0') || (5 < *(byte *)(param_1 + 0xd5))) {
      *(undefined *)(param_1 + 0xd) = 0xf;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

