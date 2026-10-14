// sub_080596B8 at 0x080596B8 (thumb)

undefined4 sub_080596B8(int param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x18;
    *(undefined4 *)(iVar1 + 0x14) = 0x8059711;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022ed0;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f48;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(iVar1 + 0x12) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0xb8) = param_3;
  }
  return in_lr;
}

