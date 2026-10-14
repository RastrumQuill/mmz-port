// sub_080B1550 at 0x080B1550 (thumb)

undefined4 sub_080B1550(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x10);
    bVar3 = 1;
  }
  else {
    bVar3 = ~*(byte *)(param_1 + 0x10);
    bVar1 = 1;
  }
  local_24 = *(int *)(param_1 + 0x54);
  local_20 = *(int *)(param_1 + 0x58);
  sub_080B0ACC(&local_24,&DAT_0834699c,0,bVar3 & bVar1);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  sub_080B0ACC(&local_24,&UNK_083469b8 + (uVar2 * 2 >> 0x11 & 1) * 0x1c,0,~(bVar3 & bVar1));
  local_20 = local_20 + -0x400;
  sub_080AC60C(1,&local_24);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = local_24 + -0x800 + (uVar2 * 2 >> 0x11 & 0xfff);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  local_20 = local_20 - (uVar2 * 2 >> 0x11 & 0xfff);
  sub_080AC60C(2,&local_24);
  sub_080032EC(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

