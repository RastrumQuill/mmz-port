// sub_080E2638 at 0x080E2638 (thumb)

undefined4 sub_080E2638(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_088656cc + (*(byte *)(param_1 + 0x11) - 2) * 2));
  if (*(byte *)(param_1 + 0x11) < 5) {
    if (*(char *)(param_1 + 0x75) == '\0') {
      iVar3 = *(int *)(&DAT_0886567c + (*(byte *)(param_1 + 0x11) - 2) * 8) << 8;
    }
    else {
      iVar3 = *(int *)(&DAT_0886567c + (*(byte *)(param_1 + 0x11) - 2) * 8) * -0x10000;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar3 = iVar3 >> 8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       *(int *)(&DAT_08865680 + (*(byte *)(param_1 + 0x11) - 2) * 8) * 0x100;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar3 = *(int *)(&DAT_088656a4 + (*(byte *)(param_1 + 0x11) - 2) * 8) *
          ((uVar2 * 2 >> 0x11 & 0xff) + 0x100);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  iVar3 = *(int *)(&DAT_088656a8 + (*(byte *)(param_1 + 0x11) - 2) * 8) *
          ((uVar2 * 0x80 >> 0x17) + 0x100);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  if (*(byte *)(param_1 + 0x75) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = *(byte *)(param_1 + 0x75) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

