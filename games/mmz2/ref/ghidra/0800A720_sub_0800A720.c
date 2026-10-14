// sub_0800A720 at 0x0800A720 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800A720(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  DAT_0202e024 = _DAT_0202e020;
  DAT_0202e028._0_1_ =
       (&DAT_08314fc8)[(byte)(&DAT_0831348c)[*param_1 >> 0xc]] |
       (&DAT_08314fc9)[(byte)(&DAT_0831348c)[*param_1 >> 0xc]];
  uVar1 = 0;
  uVar2 = 0;
  do {
    if (((int)(uint)(DAT_0202e028._1_1_ ^ (byte)DAT_0202e028) >> (uVar1 & 0xff) & 1U) != 0) {
      if (((int)(uint)(byte)DAT_0202e028 >> (uVar1 & 0xff) & 1U) == 0) {
        sub_08002EF0(uVar2 >> 0x18);
      }
      else {
        sub_08002D68(uVar2 >> 0x18,0);
      }
    }
    if (((int)(uint)(byte)DAT_0202e028 >> (uVar1 & 0xff) & 1U) != 0) {
      sub_08002EA0(uVar2 >> 0x18);
    }
    uVar2 = uVar2 + 0x1000000;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  DAT_0202e028._1_1_ = (byte)DAT_0202e028;
  return in_lr;
}

