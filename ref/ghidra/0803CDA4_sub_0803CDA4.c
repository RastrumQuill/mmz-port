// sub_0803CDA4 at 0x0803CDA4 (thumb)

undefined4 sub_0803CDA4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x13);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  if (*(char *)(param_1 + 0x12) == '\b') {
    sub_08029778(param_1,0);
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x54) - (int)*(short *)(param_1 + 0xce);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

