// sub_08015654 at 0x08015654 (thumb)

undefined4 sub_08015654(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 != 0) && (uVar1 = (uint)DAT_0202f064, uVar1 < 0x10)) {
    *(undefined4 *)(&DAT_0202ef94 + uVar1 * 0xc) = *param_2;
    *(undefined4 *)(&DAT_0202ef98 + uVar1 * 0xc) = param_2[1];
    (&DAT_0202ef90)[uVar1 * 3] = param_1;
    (&DAT_0202ef90)[(uVar1 + 1) * 3] = 0;
    DAT_0202f064 = (ushort)(uVar1 + 1);
  }
  return in_lr;
}

