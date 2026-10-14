// sub_080B78C8 at 0x080B78C8 (thumb)

undefined4 sub_080B78C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    sub_080E7460(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

