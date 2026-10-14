// sub_081040F4 at 0x081040F4 (thumb)

undefined4 sub_081040F4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)(param_1 + 0xb4 + uVar3 * 4);
    if (*piVar1 != 0) {
      sub_080E8F60();
      *piVar1 = 0;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 4 + param_1;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      sub_080E8F60();
      *(undefined4 *)(iVar2 + 0x5c) = 0;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

