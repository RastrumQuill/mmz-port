// sub_08074614 at 0x08074614 (thumb)

undefined4 sub_08074614(int param_1)

{
  char cVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9300);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  pbVar3 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*pbVar3] * 4;
  *pbVar3 = *pbVar3 + 1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 200) + *(short *)(param_1 + 0xc4);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sVar2 = *(short *)(param_1 + 200) + 0x80;
    *(short *)(param_1 + 200) = sVar2;
    *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + 0x80;
    if (0x200 < sVar2) {
      *(undefined2 *)(param_1 + 200) = 0x200;
      *(undefined2 *)(param_1 + 0xca) = 0x200;
    }
    sVar2 = *(short *)(param_1 + 0xc0) + 0x80;
    *(short *)(param_1 + 0xc0) = sVar2;
    *(short *)(param_1 + 0xc2) = *(short *)(param_1 + 0xc2) + 0x80;
    if (sVar2 < 0x3001) {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0xc0) = 0x3000;
    *(undefined2 *)(param_1 + 0xc2) = 0x3000;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

