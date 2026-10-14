// sub_0806BCDC at 0x0806BCDC (thumb)

undefined4 sub_0806BCDC(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    pbVar2 = (byte *)(iVar3 + 0xda);
    *(int *)(param_1 + 0x4c) =
         *(int *)(iVar3 + 0x4c) +
         (short)(&DAT_080c8e24)
                [((uint)*pbVar2 + (uint)*(byte *)(param_1 + 0x11) * 0x20 + 0xc0 & 0xff) + 0x40] *
         0x28;
    *(int *)(param_1 + 0x50) =
         *(int *)(iVar3 + 0x50) +
         (short)(&DAT_080c8e24)
                [(uint)*pbVar2 + (uint)*(byte *)(param_1 + 0x11) * 0x20 + 0xc0 & 0xff] * 0x28;
    *(byte *)(param_1 + 0x1f) = *pbVar2 + *(char *)(param_1 + 0x11) * ' ';
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0de4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 9);
    if (4 < *(byte *)(param_1 + 0xd)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_082aeadc + uVar1 * 4) + 0xc);
      uVar1 = (uint)*(byte *)(param_1 + 9);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_082aeadc + uVar1 * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_0806BD9C(param_1);
  }
  return in_lr;
}

