// sub_080849C8 at 0x080849C8 (thumb)

undefined4 sub_080849C8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + 0x1200;
  sub_080B7A3C(param_1,&local_14,&DAT_08364b3c,3);
  sub_080B2484(1,&local_14);
  sub_0800471C(0x2a);
  sub_08024FE4(3,param_1 + 0x54);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  if (*(byte *)(param_1 + 0x10) != 0) {
    (&DAT_02030104)[*(uint *)(&DAT_08364b20 + (*(byte *)(param_1 + 0x10) - 1) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_08364b20 + (*(byte *)(param_1 + 0x10) - 1) * 4) & 7)) |
         (&DAT_02030104)[*(uint *)(&DAT_08364b20 + (*(byte *)(param_1 + 0x10) - 1) * 4) >> 3];
  }
  return in_lr;
}

