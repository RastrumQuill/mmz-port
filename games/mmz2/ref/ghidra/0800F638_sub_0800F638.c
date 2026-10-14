// sub_0800F638 at 0x0800F638 (thumb)

undefined4 sub_0800F638(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  DAT_0202e020 = (&DAT_0831e9f0)[(byte)(&DAT_0831348c)[*param_1 >> 0xc]] |
                 (&DAT_0831e9f1)[(byte)(&DAT_0831348c)[*param_1 >> 0xc]];
  uVar1 = 0;
  uVar2 = 0x23000000;
  do {
    if (((int)(uint)(DAT_0202e021 ^ DAT_0202e020) >> (uVar1 & 0xff) & 1U) != 0) {
      if (((int)(uint)DAT_0202e020 >> (uVar1 & 0xff) & 1U) == 0) {
        sub_08002EF0(uVar2 >> 0x18);
      }
      else {
        sub_08002D68(uVar2 >> 0x18,0);
      }
    }
    if (((int)(uint)DAT_0202e020 >> (uVar1 & 0xff) & 1U) != 0) {
      sub_08002EA0(uVar2 >> 0x18);
    }
    uVar2 = uVar2 + 0x1000000;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 7);
  DAT_0202e021 = DAT_0202e020;
  return in_lr;
}

