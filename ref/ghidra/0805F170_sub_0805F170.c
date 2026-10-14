// sub_0805F170 at 0x0805F170 (thumb)

undefined4 sub_0805F170(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x20;
    *(undefined4 *)(iVar1 + 0x14) = 0x805f221;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ee0;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f50;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0x12) = 0x40;
    *(undefined4 *)(iVar1 + 0x5c) =
         *(undefined4 *)(&DAT_082b0404 + (uint)*(byte *)(param_1 + 0x10) * 4);
  }
  iVar1 = sub_08005428(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x20;
    *(undefined4 *)(iVar1 + 0x14) = 0x805f221;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ee0;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f50;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined *)(iVar1 + 0x12) = 0xc0;
    *(undefined4 *)(iVar1 + 0x5c) =
         *(undefined4 *)(&DAT_082b0404 + (uint)*(byte *)(param_1 + 0x10) * 4);
  }
  return in_lr;
}

