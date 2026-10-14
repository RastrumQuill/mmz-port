// sub_08014268 at 0x08014268 (thumb)

undefined4 sub_08014268(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 != 0) && (uVar1 = (uint)DAT_02022e84, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_02022db4 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_02022db8 + uVar1 * 0xc) = param_2[1];
    (&DAT_02022db0)[uVar1 * 3] = param_1;
    (&DAT_02022db0)[(uVar1 + 1) * 3] = 0;
    DAT_02022e84 = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

