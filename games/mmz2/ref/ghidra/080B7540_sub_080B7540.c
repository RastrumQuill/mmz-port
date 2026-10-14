// sub_080B7540 at 0x080B7540 (thumb)

undefined4 sub_080B7540(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    sub_080127E4(param_1,0x5604);
  }
  else {
    sub_080127E4(param_1,0x5c0c);
  }
  sub_080128D4(param_1);
  uVar1 = *(undefined4 *)(iVar4 + 0x54);
  uVar2 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar3 = ((uint)*(byte *)(param_1 + 0x11) << 0x1d) >> 0x18;
  *(short *)(param_1 + 0x74) = (&DAT_080ef450)[uVar3 + 0x40 & 0xff] << 1;
  *(short *)(param_1 + 0x76) = (&DAT_080ef450)[uVar3] << 1;
  uVar3 = uVar3 + 0x80 & 0xff;
  *(short *)(param_1 + 0x78) = (&DAT_080ef450)[uVar3 + 0x40 & 0xff] << 1;
  *(short *)(param_1 + 0x7a) = (&DAT_080ef450)[uVar3] << 1;
  iVar4 = (int)*(short *)(param_1 + 0x74);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  *(short *)(param_1 + 0x7c) = (short)(iVar4 >> 5);
  iVar4 = (int)*(short *)(param_1 + 0x76);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  *(short *)(param_1 + 0x7e) = (short)(iVar4 >> 5);
  iVar4 = (int)*(short *)(param_1 + 0x78);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  *(short *)(param_1 + 0x80) = (short)(iVar4 >> 5);
  iVar4 = (int)*(short *)(param_1 + 0x7a);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  *(short *)(param_1 + 0x82) = (short)(iVar4 >> 5);
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B7398(param_1);
  return in_lr;
}

