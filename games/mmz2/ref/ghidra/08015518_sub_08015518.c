// sub_08015518 at 0x08015518 (thumb)

undefined4 sub_08015518(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 & 0xff) != 0) && (uVar1 = (uint)DAT_0202f05c, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_0202eec8 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_0202eecc + uVar1 * 0xc) = param_2[1];
    (&DAT_0202eec4)[uVar1 * 3] = param_1 & 0xff;
    (&DAT_0202eec4)[(uVar1 + 1) * 3] = 0;
    DAT_0202f05c = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

