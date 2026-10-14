// sub_080DBD1C at 0x080DBD1C (thumb)

undefined4 sub_080DBD1C(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0x10) + 0xe2;
  sub_0800393C(&DAT_085d78f8 + iVar3 * 5,
               ((uint)(ushort)(&DAT_0202fa10)[iVar3] -
               (uint)((ushort)(&DAT_085d78fe)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904 + iVar3 * 0x14,
               ((uint)(ushort)(&DAT_0202f810)[iVar3] - (uint)(byte)(&DAT_085d790b)[iVar3 * 0x14]) *
               0x20 + 0x200);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836dd20,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836dda8;
  *(undefined2 *)(param_1 + 0x26) = 1;
  uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0xc00);
  if (sVar1 != 0) {
    iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0xc00,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100 + iVar3;
  }
  sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    iVar3 = sub_08009E14(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100 + iVar3;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080DBE6C(param_1);
  return in_lr;
}

