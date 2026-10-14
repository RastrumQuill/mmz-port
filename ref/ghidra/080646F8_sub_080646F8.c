// sub_080646F8 at 0x080646F8 (thumb)

undefined4 sub_080646F8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0870,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffff600;
    *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + -0x4000;
    if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
      return in_lr;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(iVar2 + 8) == '\0') {
      sub_0801D540(iVar2,0x99,~(*(byte *)(iVar4 + 10) >> 4) & 1,0);
    }
  }
  iVar2 = 0x100;
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar1 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar2 = -0x100;
    }
    *(int *)(iVar3 + 0x4c) = iVar1 + iVar2;
    *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    if (0x1a < *(byte *)(iVar4 + 0xd)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

