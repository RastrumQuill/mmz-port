// sub_080511D0 at 0x080511D0 (thumb)

undefined4 sub_080511D0(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xb;
    *(undefined4 *)(iVar1 + 0x14) = 0x8051219;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022eb6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f3b;
    *(undefined *)(iVar1 + 0x10) = 7;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

