// sub_08108378 at 0x08108378 (thumb)

undefined4 sub_08108378(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)DAT_0202e8b4;
  if ((DAT_0202e8b4 & 0x40) == 0) {
    sub_0801CC9C(param_1);
    sub_0801CF00(param_1,0x406);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08005760(param_1 + 0x74,&DAT_08868fb0,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x81086b1;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(param_1 + 0xb8) = uVar1 & 0x40;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
    else {
      *(uint *)(param_1 + 0x60) = uVar1 & 0x40;
    }
    *(undefined2 *)(param_1 + 0x12) = 0x168;
    *(undefined *)(param_1 + 0xbc) = 0x40;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 4);
    sub_08108464(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

