// sub_08052444 at 0x08052444 (thumb)

undefined4 sub_08052444(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa10e);
    sub_08005784(param_1 + 0x74,&DAT_08854ac8);
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0x28;
      }
    }
    else {
      uVar3 = 0x30;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    if (*(char *)(param_1 + 0xe2) != '\0') {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    if ((DAT_0202e918 & 8) != 0) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = DAT_0202dbf0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar4;
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if (cVar5 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

