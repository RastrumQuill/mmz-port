// sub_080A09EC at 0x080A09EC (thumb)

undefined4 sub_080A09EC(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xffffff80;
    uVar1 = sub_08001EAC(0x56);
    *(undefined2 *)(param_1 + 0xc4) = uVar1;
  }
  sub_0809C980(param_1);
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar3;
  iVar2 = *(int *)(param_1 + 0xc0) + -0x48000;
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x50) = iVar2;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

