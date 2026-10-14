// sub_080406F8 at 0x080406F8 (thumb)

undefined4 sub_080406F8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar2 + 0x58);
    *(bool *)(iVar1 + 0xc6) = *(int *)(iVar1 + 0x54) < *(int *)(iVar2 + 0x54);
  }
  return in_lr;
}

