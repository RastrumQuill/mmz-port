// sub_0805F290 at 0x0805F290 (thumb)

undefined4 sub_0805F290(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202e918 & 8) != 0)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08857484 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (1 < *(byte *)(param_1 + 0xd)) {
      if (*(int *)(param_1 + 0x54) < DAT_0202ea30 + -0x6800) {
        *(int *)(param_1 + 0x54) = DAT_0202ea30 + -0x6800;
      }
      if (DAT_0202ea30 + 0x67ff < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = DAT_0202ea30 + 0x67ff;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805F328(param_1);
  }
  return in_lr;
}

