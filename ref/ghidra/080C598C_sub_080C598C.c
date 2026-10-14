// sub_080C598C at 0x080C598C (thumb)

undefined4 sub_080C598C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080C5A84(*(undefined2 *)(param_1 + 0x9ec),0x15,0xb);
  uVar3 = (uint)*(byte *)(param_1 + 0x9e7);
  do {
    uVar3 = uVar3 - 1;
    sub_080BC174(&DAT_080d1dd4,0x15 - uVar3,0xd);
  } while (uVar3 != 0);
  uVar2 = *(ushort *)(param_1 + 0x9f2);
  if (uVar2 == 0) {
    if (*(byte *)(param_1 + 0x9e8) < 8) goto LAB_080c59fa;
    uVar2 = 0xc0;
  }
  bVar1 = *(byte *)(param_1 + 0x9e6);
  if ((uVar2 & 0x40) != 0) {
    sub_080BC174(&DAT_080d1dd8,0x15 - (uint)bVar1,10);
  }
  if ((uVar2 & 0x80) != 0) {
    sub_080BC174(&DAT_080d1ddc,0x15 - (uint)bVar1,0xd);
  }
LAB_080c59fa:
  sub_080BC0AC(&DAT_082b9341,0x16,0xb);
  sub_080C5A84(*(undefined2 *)(param_1 + 0x9f0),0x1a,0xb);
  sub_080BC0AC(&DAT_082baa25,0x12,0xe);
  sub_080C5A84(DAT_0202b79e,0x19,0xe);
  sub_080BC0AC(&DAT_082baa2c,1,0x12);
  return in_lr;
}

