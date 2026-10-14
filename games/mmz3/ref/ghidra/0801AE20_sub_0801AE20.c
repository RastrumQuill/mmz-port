// sub_0801AE20 at 0x0801AE20 (thumb)

undefined4 sub_0801AE20(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 != 0) && (uVar1 = (uint)DAT_020305d4, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_02030504 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_02030508 + uVar1 * 0xc) = param_2[1];
    (&DAT_02030500)[uVar1 * 3] = param_1;
    (&DAT_02030500)[(uVar1 + 1) * 3] = 0;
    DAT_020305d4 = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

