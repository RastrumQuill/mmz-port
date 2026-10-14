// sub_0807EC80 at 0x0807EC80 (thumb)

undefined4 sub_0807EC80(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar4;
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar3;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (cVar1 = sub_080079CC(iVar4 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 8,
                           iVar3 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 8),
     cVar1 != '\0')) {
    sub_08001EAC(0xce);
    *(undefined *)(param_1 + 0x10) = 4;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x6000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

