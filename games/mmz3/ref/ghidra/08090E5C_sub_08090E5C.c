// sub_08090E5C at 0x08090E5C (thumb)

undefined4 sub_08090E5C(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_2;
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x3b;
    *(undefined4 *)(iVar1 + 0x14) = 0x8090fe9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    if (uVar2 < 4) {
      *(uint *)(iVar1 + 100) = *(int *)(param_1 + 0x54) + (uVar2 - 2) * 0x3000 + 0x1800;
    }
    if (4 < uVar2) {
      *(uint *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + (uVar2 - 7) * 0x3000 + 0x1800;
    }
    *(int *)(iVar1 + 0x28) = param_1;
    sub_0801749C(iVar1);
    sub_080176EC(iVar1);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 8);
    *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
    *(byte *)(iVar1 + 0x10) = param_2;
  }
  return in_lr;
}

