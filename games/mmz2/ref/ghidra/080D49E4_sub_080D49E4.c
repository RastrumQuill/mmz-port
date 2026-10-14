// sub_080D49E4 at 0x080D49E4 (thumb)

undefined4 sub_080D49E4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((byte)(*(char *)(param_1 + 0x10) - 7U) < 2) {
    if (*(char *)(param_1 + 0x10) == '\a') {
      bVar1 = *(byte *)(DAT_0202e130 + 0x203) & 1;
    }
    else {
      bVar1 = *(byte *)(DAT_0202e130 + 0x203) & 2;
    }
    if (bVar1 != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    sub_08002638(&DAT_08433e08,(DAT_0202e744 - 0x1c0) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433e14,(DAT_0202e544 - 10) * 0x20 + 0x200);
  }
  sub_08012580(param_1);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834a0c0 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08006DE4(param_1 + 0x74,&DAT_0834a0d4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80d4e99;
  *(undefined4 *)(param_1 + 0x9c) = 0x80d4eb5;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined *)(param_1 + 0x12) = 0xf0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 4);
  sub_080D4B4C(param_1);
  return in_lr;
}

