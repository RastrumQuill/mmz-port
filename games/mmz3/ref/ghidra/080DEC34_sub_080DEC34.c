// sub_080DEC34 at 0x080DEC34 (thumb)

undefined4 sub_080DEC34(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0836e000 + (uint)DAT_02002478 * 2));
  uVar2 = (uint)(*(ushort *)(&DAT_0836e000 + (uint)DAT_02002478 * 2) >> 8);
  sub_0800393C(&DAT_085d78f8 + uVar2 * 5,
               ((uint)(ushort)(&DAT_0202fa10)[uVar2] -
               (uint)((ushort)(&DAT_085d78fe)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904 + uVar2 * 0x14,
               ((uint)(ushort)(&DAT_0202f810)[uVar2] - (uint)(byte)(&DAT_085d790b)[uVar2 * 0x14]) *
               0x20 + 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836e00c,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80ded59;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  iVar1 = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_0800A104(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080DED74(param_1);
  return in_lr;
}

