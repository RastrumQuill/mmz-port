// sub_080B60F4 at 0x080B60F4 (thumb)

undefined4 sub_080B60F4(int param_1)

{
  undefined4 in_lr;
  
  if (((*(byte *)(*(int *)(param_1 + 0x7c) + 3) & 0x40) == 0) && ((DAT_02030108 & 0x40) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836b00c + (uint)*(byte *)(param_1 + 0x11) * 4));
  }
  return in_lr;
}

