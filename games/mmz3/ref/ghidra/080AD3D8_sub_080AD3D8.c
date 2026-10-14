// sub_080AD3D8 at 0x080AD3D8 (thumb)

undefined4 sub_080AD3D8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  cVar1 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

