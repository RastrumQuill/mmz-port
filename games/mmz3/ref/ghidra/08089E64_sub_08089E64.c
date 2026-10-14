// sub_08089E64 at 0x08089E64 (thumb)

undefined4 sub_08089E64(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083653ac)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (((DAT_02002440 & 8) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar1 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 0xc;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 0x10;
  }
  sub_0800736C(param_1 + 0x74,&DAT_0836514c,param_1 + 0x54,uVar2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = 0x8089d5d;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  sub_08089F20(param_1);
  return in_lr;
}

