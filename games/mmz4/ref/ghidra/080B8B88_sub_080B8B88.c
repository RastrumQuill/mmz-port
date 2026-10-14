// sub_080B8B88 at 0x080B8B88 (thumb)

undefined4 sub_080B8B88(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x194);
    sub_08005784(param_1 + 0x74,&DAT_08860dd8);
    sub_0801CF00(param_1,0xb600);
    iVar4 = *(int *)(iVar1 + 0xb4);
    iVar2 = -1;
    if (iVar4 + 0x7800 < *(int *)(DAT_0202dbf0 + 0x54)) {
      iVar2 = 1;
    }
    iVar1 = *(int *)(iVar1 + 0xb8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 100) = (iVar4 + iVar2 * 0x5800 + 0x7800) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = (iVar1 + 0x7fff) - *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  iVar2 = (int)*(short *)((int)&DAT_08128c10 +
                         ((0x10 - (uint)*(byte *)(param_1 + 0x12)) * 0x4000000 >> 0x17));
  iVar1 = iVar2 * *(int *)(param_1 + 100);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar1 >> 8);
  iVar2 = iVar2 * *(int *)(param_1 + 0x68);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar2 >> 8);
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

