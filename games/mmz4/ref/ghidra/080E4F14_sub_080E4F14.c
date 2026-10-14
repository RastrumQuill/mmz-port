// sub_080E4F14 at 0x080E4F14 (thumb)

undefined4 sub_080E4F14(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0xc00;
    sub_080D0894(1,&local_1c);
    sub_08002B10(0x2a);
    *(undefined *)(param_1 + 0x11) = 1;
    iVar2 = param_1 + 0x54;
    sub_080E4D94(iVar2,1,2);
    sub_080E4D94(iVar2,1,3);
    sub_080E4D94(iVar2,1,4);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar2 = (&DAT_08865928)[*(byte *)(param_1 + 0x11) - 1] * ((uVar1 * 2 >> 0x11 & 0xff) + 0x80);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x200) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (&DAT_08865908)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (&DAT_0886590c)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  sub_0801CF00(param_1,(&DAT_08865938)[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

