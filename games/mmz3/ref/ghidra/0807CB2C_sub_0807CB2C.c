// sub_0807CB2C at 0x0807CB2C (thumb)

undefined4 sub_0807CB2C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08364404)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(byte *)(param_1 + 0x10) < 2) {
    if (((DAT_02002440 & 4) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar1 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar2 = 4;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar2 = 8;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08364364,param_1 + 0x54,uVar2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08364364,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x807ca91;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb8) = 1;
  *(undefined *)(param_1 + 0x25) = 0x14;
  sub_0807CC20(param_1);
  return in_lr;
}

