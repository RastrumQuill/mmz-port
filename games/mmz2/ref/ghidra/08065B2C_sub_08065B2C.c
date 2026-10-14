// sub_08065B2C at 0x08065B2C (thumb)

undefined4 sub_08065B2C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ebbd & 0x20;
  if ((DAT_0202ebbd & 0x20) == 0) {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08006DE4(param_1 + 0x74,&DAT_0833db44,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x806678d;
    *(undefined4 *)(param_1 + 0x9c) = 0x80667b5;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(uint *)(param_1 + 0x60) = uVar1;
    *(uint *)(param_1 + 0x5c) = uVar1;
    *(uint *)(param_1 + 0xc0) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    if (*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54) < 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    *(char *)(param_1 + 0xe) = (char)uVar1;
    sub_08065BF8(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

