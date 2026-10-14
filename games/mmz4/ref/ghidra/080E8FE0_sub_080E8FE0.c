// sub_080E8FE0 at 0x080E8FE0 (thumb)

undefined4 sub_080E8FE0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0x10) + 8;
  sub_08001D30(&DAT_08c44000 + iVar3 * 5,
               ((uint)(ushort)(&DAT_0202e040)[iVar3] -
               (uint)((ushort)(&DAT_08c44006)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c + iVar3 * 0x14,
               ((uint)(ushort)(&DAT_0202de40)[iVar3] - (uint)(byte)(&DAT_08c44013)[iVar3 * 0x14]) *
               0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x800);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08865f2c,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08865fb4;
  *(undefined2 *)(param_1 + 0x26) = 1;
  uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + -0xc00);
  if (sVar1 != 0) {
    iVar3 = sub_0800834C(*(int *)(param_1 + 0x54) + -0xc00,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100 + iVar3;
  }
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    iVar3 = sub_0800816C(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100 + iVar3;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080E9130(param_1);
  return in_lr;
}

