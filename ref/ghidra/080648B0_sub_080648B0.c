// sub_080648B0 at 0x080648B0 (thumb)

undefined4 sub_080648B0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0870,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffff600;
    *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + -0x4000;
    if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
      return in_lr;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(iVar1 + 8) == '\0') {
      sub_0801D540(iVar1,0x99,~(*(byte *)(iVar3 + 10) >> 4) & 1,0);
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar2 = -0x800;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar2 = 0x800;
    }
    *(int *)(iVar3 + 0x4c) = iVar1 + iVar2;
    *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar3) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

