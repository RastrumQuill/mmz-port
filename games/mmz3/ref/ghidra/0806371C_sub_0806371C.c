// sub_0806371C at 0x0806371C (thumb)

undefined4 sub_0806371C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (((DAT_02002438 & 0x10) == 0) || (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar2 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar3 = 10;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    uVar3 = 0xe;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08362290,param_1 + 0x54,uVar3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = 0x8064605;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54) < 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08063808(param_1);
  return in_lr;
}

