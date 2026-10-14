// sub_0803ADD8 at 0x0803ADD8 (thumb)

undefined4 sub_0803ADD8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835dca8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835dcac + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
    sub_0803AE38(param_1);
  }
  return in_lr;
}

