// sub_080E473C at 0x080E473C (thumb)

undefined4 sub_080E473C(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = param_1 + 0x54;
    sub_080D0894(1,iVar3);
    sub_08002B10(0x2a);
    *(undefined *)(param_1 + 0x11) = 1;
    sub_080E4558(iVar3,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E4558(iVar3,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E4558(iVar3,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar3 = (&DAT_088658a0)[*(byte *)(param_1 + 0x11) - 1] * ((uVar1 * 2 >> 0x11 & 0x7f) + 0x100);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x200) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (&DAT_08865880)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (&DAT_08865880)[(*(byte *)(param_1 + 0x11) - 1) * 2] * -0x100;
    iVar3 = (iVar3 >> 8) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  if (*(char *)(param_1 + 0x11) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (&DAT_08865884)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  sub_0801CF00(param_1,(&DAT_088658b0)[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

