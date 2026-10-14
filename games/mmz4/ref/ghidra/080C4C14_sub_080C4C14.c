// sub_080C4C14 at 0x080C4C14 (thumb)

undefined4 sub_080C4C14(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar2 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    iVar3 = -0x3c00;
  }
  else {
    iVar3 = 0x3c00;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + iVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

