// sub_080B6374 at 0x080B6374 (thumb)

undefined4 sub_080B6374(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x06';
  puVar3 = (ushort *)(param_1 + 0x7c);
  *puVar3 = *puVar3 + 0x180;
  iVar2 = (uint)*puVar3 * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x74) + (iVar2 >> 8);
  iVar2 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)] * (uint)*puVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7ff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x78) + (iVar2 >> 0xb);
  if (*(byte *)(param_1 + 0x11) < 0x81) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 2) {
      sub_080127E4(param_1,3);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

