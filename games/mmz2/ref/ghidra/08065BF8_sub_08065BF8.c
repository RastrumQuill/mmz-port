// sub_08065BF8 at 0x08065BF8 (thumb)

undefined4 sub_08065BF8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) &&
     (sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1e00),
     sVar1 == 0)) {
    iVar2 = sub_08065A24(param_1);
    if (iVar2 != 0) {
      sub_080127E4(param_1,0x6d00);
      sub_080128D4(param_1);
      sub_08006E08(param_1 + 0x74,&DAT_0833db44);
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if ((*(int *)(param_1 + 0x58) - *(int *)(DAT_0202e130 + 0x58)) + 0x3000U < 0x6000) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar3 = *(int *)(DAT_0202e130 + 0x54);
      }
      else {
        iVar2 = *(int *)(DAT_0202e130 + 0x54);
        iVar3 = *(int *)(param_1 + 0x54);
      }
      *(int *)(param_1 + 0xbc) = iVar2 - iVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833db04 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833db24 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08065CF4(param_1);
  return in_lr;
}

