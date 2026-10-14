// sub_080647D4 at 0x080647D4 (thumb)

undefined4 sub_080647D4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0870,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
      return in_lr;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(iVar2 + 8) == '\0') {
      sub_0801D540(iVar2,0x97,~(*(byte *)(iVar5 + 10) >> 4) & 1,0);
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar1 = *(int *)(iVar5 + 0x4c);
      iVar4 = -0x1800;
    }
    else {
      iVar1 = *(int *)(iVar5 + 0x4c);
      iVar4 = 0x1800;
    }
    *(int *)(iVar2 + 0x4c) = iVar1 + iVar4;
    *(int *)(iVar2 + 0x50) = *(int *)(iVar5 + 0x50) + 0xa00;
    uVar3 = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar5 + -0x1000 < *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

