// sub_080A3C08 at 0x080A3C08 (thumb)

undefined4 sub_080A3C08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xffffff80;
    }
    else {
      uVar1 = 0x80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb80;
  }
  sub_0809C980(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar4 = *(int *)(param_1 + 0x50) + iVar2;
  *(int *)(param_1 + 0x50) = iVar4;
  if (0 < iVar2) {
    iVar2 = sub_08008360(iVar3,iVar4);
    if (iVar2 < *(int *)(param_1 + 0x50)) {
      uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

