// sub_0807EFDC at 0x0807EFDC (thumb)

undefined4 sub_0807EFDC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar4;
  cVar1 = sub_080079CC(iVar2,iVar4 + 0x800);
  if (cVar1 != '\0') {
    sub_08001EAC(0xce);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    iVar2 = *(byte *)(param_1 + 0x12) - 0x40;
    if (iVar2 < 0) {
      iVar2 = 0x40 - (uint)*(byte *)(param_1 + 0x12);
    }
    if (iVar2 < 0x10) {
      local_1c = *(undefined4 *)(param_1 + 0x50);
      local_20 = *(int *)(param_1 + 0x4c) + 0x800;
      sub_0807F314(&local_20,0x3c0,0,0);
      local_20 = *(int *)(param_1 + 0x4c);
      local_1c = *(int *)(param_1 + 0x50) + 0x800;
      sub_0807F314(&local_20,0x3c0,0x40,0);
      local_1c = *(undefined4 *)(param_1 + 0x50);
      local_20 = *(int *)(param_1 + 0x4c) + -0x800;
      sub_0807F314(&local_20,0x3c0,0x80,0);
      local_20 = *(int *)(param_1 + 0x4c);
      local_1c = *(int *)(param_1 + 0x50) + -0x800;
      sub_0807F314(&local_20,0x3c0,0xc0,0);
    }
    else {
      local_20 = *(int *)(param_1 + 0x4c) + 0x5a8;
      local_1c = *(int *)(param_1 + 0x50) + 0x5a8;
      sub_0807F314(&local_20,0x3c0,0x20,0);
      local_20 = *(int *)(param_1 + 0x4c) + -0x5a8;
      local_1c = *(int *)(param_1 + 0x50) + 0x5a8;
      sub_0807F314(&local_20,0x3c0,0x60,0);
      local_20 = *(int *)(param_1 + 0x4c) + -0x5a8;
      local_1c = *(int *)(param_1 + 0x50) + -0x5a8;
      sub_0807F314(&local_20,0x3c0,0xa0,0);
      local_20 = *(int *)(param_1 + 0x4c) + 0x5a8;
      local_1c = *(int *)(param_1 + 0x50) + -0x5a8;
      sub_0807F314(&local_20,0x3c0,0xe0,0);
    }
  }
  uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x6000 < uVar3) {
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

