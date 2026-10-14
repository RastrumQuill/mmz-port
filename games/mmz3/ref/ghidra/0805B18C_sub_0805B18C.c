// sub_0805B18C at 0x0805B18C (thumb)

undefined4 sub_0805B18C(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_020301a8 & 8) != 0)) {
    if ((1 < *(byte *)(param_1 + 0xd)) && (*(byte *)(param_1 + 0xd) != 6)) {
      sub_080041E4(0x66);
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083613f4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361414 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805B218(param_1);
  }
  return in_lr;
}

