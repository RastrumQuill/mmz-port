// sub_080698C8 at 0x080698C8 (thumb)

undefined4 sub_080698C8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(byte *)(param_1 + 0x10) < 3) {
    *(undefined *)(param_1 + 0x11) = 0;
  }
  else {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) - 3;
    *(undefined *)(param_1 + 0x11) = 1;
  }
  *(undefined *)(param_1 + 0xd) = (&DAT_08362b88)[*(byte *)(param_1 + 0x10)];
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    uVar1 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if (((DAT_02002444 & 4) == 0) || ((DAT_02030104 & 0x40) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 8;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 0xc;
    }
  }
  sub_0800736C(param_1 + 0x74,&DAT_08362af0,param_1 + 0x54,uVar1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x98) = 0x806973d;
  sub_080699D4(param_1);
  return in_lr;
}

