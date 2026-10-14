// sub_0803C774 at 0x0803C774 (thumb)

undefined4 sub_0803C774(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0x10) != *(char *)(iVar3 + 0x149)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xc3) != '\0') && ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
    sub_08002B10(0x2b);
    *(undefined *)(param_1 + 0xc3) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x06') {
    if (*(char *)(iVar3 + 0xd) == '\x02') {
      bVar1 = *(byte *)(iVar3 + 10) >> 4;
      uVar2 = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0803c83a;
      }
    }
    else {
      uVar2 = ~(uint)(*(byte *)(iVar3 + 10) >> 4) & 1;
      if (uVar2 != 0) {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0803c83a;
      }
    }
  }
  else {
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    uVar2 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_0803c83a;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_0803c83a:
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885089c + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

