// sub_080E5344 at 0x080E5344 (thumb)

undefined4 sub_080E5344(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0xa00;
    sub_080D0894(1,&local_20);
    sub_08002B10(0x2a);
    *(undefined *)(param_1 + 0x11) = 1;
    sub_080E5194(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E5194(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  sub_0801CF00(param_1,(&DAT_0886598c)[*(byte *)(param_1 + 0x11) - 1]);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar3 = (&DAT_08865980)[*(byte *)(param_1 + 0x11) - 1] * ((uVar2 * 2 >> 0x11 & 0xff) + 0x100);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  iVar4 = ((uVar2 * 2 >> 0x11 & 0xff) + 0x200) * -0x100;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (&DAT_08865968)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
    bVar1 = *(byte *)(param_1 + 0x11);
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (&DAT_08865968)[(*(byte *)(param_1 + 0x11) - 1) * 2] * -0x100;
    iVar3 = (iVar3 >> 8) * -0x100;
    bVar1 = *(byte *)(param_1 + 0x11);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (&DAT_0886596c)[(bVar1 - 1) * 2] * 0x100;
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

