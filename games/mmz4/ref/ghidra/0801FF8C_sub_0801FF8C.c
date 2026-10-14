// sub_0801FF8C at 0x0801FF8C (thumb)

undefined4 sub_0801FF8C(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 != 0) && (uVar1 = (uint)DAT_0202ed44, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_0202ec74 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_0202ec78 + uVar1 * 0xc) = param_2[1];
    (&DAT_0202ec70)[uVar1 * 3] = param_1;
    (&DAT_0202ec70)[(uVar1 + 1) * 3] = 0;
    DAT_0202ed44 = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

