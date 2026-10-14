// sub_080E2EB4 at 0x080E2EB4 (thumb)

undefined4 sub_080E2EB4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0x1c00;
    sub_080D0894(1,&local_20);
    local_1c = *(int *)(param_1 + 0x58) + -0x700;
    sub_080D0894(1,&local_20);
    sub_080E2C9C(param_1 + 0x54,1,3);
    sub_080E2C9C(param_1 + 0x54,1,4);
    *(undefined *)(param_1 + 0x11) = 2;
    sub_08002B10(0x2a);
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (&DAT_0886573c)[(*(byte *)(param_1 + 0x11) - 2) * 2] * 0x100;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar2 = (&DAT_08865750)[*(byte *)(param_1 + 0x11) - 2] * ((uVar1 * 2 >> 0x11 & 0xff) + 0x100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x100) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  sub_0801CF00(param_1,(&DAT_0886575c)[*(byte *)(param_1 + 0x11) - 2]);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 < *(int *)(DAT_0202dbf0 + 0x54)) {
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    *(int *)(param_1 + 0x54) = iVar2 + (&DAT_08865738)[(*(byte *)(param_1 + 0x11) - 2) * 2] * -0x100
    ;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) = iVar2 + (&DAT_08865738)[(*(byte *)(param_1 + 0x11) - 2) * 2] * 0x100;
  }
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

