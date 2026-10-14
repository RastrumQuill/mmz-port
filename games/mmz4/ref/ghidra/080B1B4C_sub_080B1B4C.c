// sub_080B1B4C at 0x080B1B4C (thumb)

undefined4 sub_080B1B4C(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xc0) != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc207);
    sub_08005784(param_1 + 0x74,&DAT_0885ffc8);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    iVar3 = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = 0xc;
    }
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)((int)&DAT_088600d4 + iVar3) * 0x100,
                         *(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      iVar3 = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar3 = 0xc;
      }
      sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)((int)&DAT_088600d0 + iVar3) * 0x100,
                           *(int *)(param_1 + 0x58) + 0x1200);
      if (sVar2 == 0) {
        iVar3 = 0;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar3 = 0xc;
        }
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + *(int *)((int)&DAT_088600d8 + iVar3) * 0x100;
      }
    }
  }
  cVar1 = sub_080B1D9C(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

