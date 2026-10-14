// sub_080E67A8 at 0x080E67A8 (thumb)

undefined4 sub_080E67A8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0xf00;
    sub_080D0894(1,&local_20);
    sub_08002B10(0xa7);
    *(undefined *)(param_1 + 0x11) = 1;
    iVar3 = param_1 + 0x54;
    sub_080E65E0(iVar3,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E65E0(iVar3,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E65E0(iVar3,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E65E0(iVar3,0x105,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E65E0(iVar3,0x106,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar3 = (&DAT_08865ae0)[*(byte *)(param_1 + 0x11) - 1] * ((uVar1 * 2 >> 0x11 & 0xff) + 0x100);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = ((uVar1 * 0x80 >> 0x17) + 0x180) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (&DAT_08865ab0)[(uVar4 - 1) * 2] * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (&DAT_08865ab0)[(uVar4 - 1) * 2] * -0x100;
    iVar3 = (iVar3 >> 8) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (&DAT_08865ab4)[(uVar4 - 1) * 2] * 0x100;
  sub_0801CF00(param_1,(&DAT_08865af8)[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

