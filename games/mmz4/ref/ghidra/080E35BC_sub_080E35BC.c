// sub_080E35BC at 0x080E35BC (thumb)

undefined4 sub_080E35BC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(byte *)(param_1 + 0x75) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = *(byte *)(param_1 + 0x75) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080D0894(1,&local_20);
    sub_08002B10(0x2a);
    *(undefined *)(param_1 + 0x11) = 1;
    sub_080E32E4(param_1 + 0x54,0x202,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E32E4(param_1 + 0x54,0x203,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  sub_0801CF00(param_1,(&DAT_088657cc)[*(byte *)(param_1 + 0x11) - 1]);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (&DAT_088657ac)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar2 = (&DAT_088657c0)[*(byte *)(param_1 + 0x11) - 1] * ((uVar4 * 2 >> 0x11 & 0xff) + 0x100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar4 & 0x7fffffff;
  iVar3 = ((uVar4 * 2 >> 0x11 & 0xff) + 0x180) * -0x100;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (&DAT_088657a8)[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (&DAT_088657a8)[(*(byte *)(param_1 + 0x11) - 1) * 2] * -0x100;
    iVar2 = (iVar2 >> 8) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

