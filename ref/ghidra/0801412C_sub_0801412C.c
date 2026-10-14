// sub_0801412C at 0x0801412C (thumb)

undefined4 sub_0801412C(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 & 0xff) != 0) && (uVar1 = (uint)DAT_02022e7c, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_02022ce8 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_02022cec + uVar1 * 0xc) = param_2[1];
    (&DAT_02022ce4)[uVar1 * 3] = param_1 & 0xff;
    (&DAT_02022ce4)[(uVar1 + 1) * 3] = 0;
    DAT_02022e7c = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

