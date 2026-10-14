// sub_0805A2BC at 0x0805A2BC (thumb)

undefined4 sub_0805A2BC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if ((uVar1 < 0x6001) || (*(char *)(param_1 + 0x10) != '\x01')) {
    if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
      iVar3 = *(int *)(iVar4 + 0x4c);
      iVar2 = iVar3 + 0x800;
      *(int *)(param_1 + 0x4c) = iVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar2 = iVar3 + -0x800;
      }
      *(int *)(param_1 + 0x4c) = iVar2;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
      sub_080599B0(param_1);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080489E4(param_1);
      *(undefined *)(param_1 + 0x1f) = 0;
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

