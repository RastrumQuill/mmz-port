// sub_080B3C28 at 0x080B3C28 (thumb)

undefined4 sub_080B3C28(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

