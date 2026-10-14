// sub_080E5F04 at 0x080E5F04 (thumb)

undefined4 sub_080E5F04(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0xc00;
    sub_080D0894(1,&local_24);
    sub_08002B10(0x2a);
    local_20 = *(int *)(param_1 + 0x58) + -0x1d00;
    *(undefined *)(param_1 + 0x11) = 1;
    sub_080E5D14(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E5D14(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080D0894(2,&local_24);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar2 = (&DAT_08865a4c)[*(byte *)(param_1 + 0x11) - 1] * ((uVar1 * 2 >> 0x11 & 0xff) + 0x100);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar3 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x180) * -0x100;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (&DAT_08865a34)[(uVar4 - 1) * 2] * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (&DAT_08865a34)[(uVar4 - 1) * 2] * -0x100;
    iVar2 = (iVar2 >> 8) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (&DAT_08865a38)[(uVar4 - 1) * 2] * 0x100;
  sub_0801CF00(param_1,(&DAT_08865a58)[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

