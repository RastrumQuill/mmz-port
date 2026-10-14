// sub_0801ACF8 at 0x0801ACF8 (thumb)

undefined4 sub_0801ACF8(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 & 0xff) != 0) && (uVar1 = (uint)DAT_020305cc, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_02030438 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_0203043c + uVar1 * 0xc) = param_2[1];
    (&DAT_02030434)[uVar1 * 3] = param_1 & 0xff;
    (&DAT_02030434)[(uVar1 + 1) * 3] = 0;
    DAT_020305cc = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

