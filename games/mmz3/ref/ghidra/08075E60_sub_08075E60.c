// sub_08075E60 at 0x08075E60 (thumb)

undefined4 sub_08075E60(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb9) == '\0') && ((DAT_02030108 & 0x40) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083638e8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

