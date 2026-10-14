// sub_0806E598 at 0x0806E598 (thumb)

undefined4 sub_0806E598(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083630e4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (((DAT_02002444 & 0x80) == 0) || (uVar1 = (uint)DAT_02030104, (DAT_02030104 & 0x40) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 8;
    if (*(byte *)(param_1 + 0x10) < 2) {
      uVar2 = 4;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08363034,param_1 + 0x54,uVar2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = 0xc;
    if (*(byte *)(param_1 + 0x10) < 2) {
      uVar2 = 8;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08363034,param_1 + 0x54,uVar2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar1 & 0x40;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x806e449;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  sub_0806E674(param_1);
  return in_lr;
}

