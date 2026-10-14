// sub_080ECAD4 at 0x080ECAD4 (thumb)

undefined4 sub_080ECAD4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080ECBCC(*(undefined2 *)(param_1 + 0xde0),0x15,0xb);
  uVar3 = (uint)*(byte *)(param_1 + 0xddb);
  do {
    uVar3 = uVar3 - 1;
    sub_080DE6C8(&DAT_080ffa98,0x15 - uVar3,0xd);
  } while (uVar3 != 0);
  uVar2 = *(ushort *)(param_1 + 0xde6);
  if (uVar2 == 0) {
    if (*(byte *)(param_1 + 0xddc) < 8) goto LAB_080ecb44;
    uVar2 = 0xc0;
  }
  bVar1 = *(byte *)(param_1 + 0xdda);
  if ((uVar2 & 0x40) != 0) {
    sub_080DE6C8(&DAT_080ffa9c,0x15 - (uint)bVar1,10);
  }
  if ((uVar2 & 0x80) != 0) {
    sub_080DE6C8(&DAT_080ffaa0,0x15 - (uint)bVar1,0xd);
  }
LAB_080ecb44:
  sub_080DE510(&DAT_0834c9fa,0x16,0xb);
  sub_080ECBCC(*(undefined2 *)(param_1 + 0xde4),0x1a,0xb);
  sub_080DE510(&DAT_0834e1f5,0x12,0xe);
  sub_080ECBCC(*(undefined2 *)(*(int *)(param_1 + 0x75b8) + 0x1fe),0x19,0xe);
  sub_080DE510(&DAT_0834e1fa,1,0x12);
  return in_lr;
}

