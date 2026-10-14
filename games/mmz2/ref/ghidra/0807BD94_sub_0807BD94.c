// sub_0807BD94 at 0x0807BD94 (thumb)

undefined4 sub_0807BD94(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(byte *)(iVar1 + 0xd) < 0xf) && ((*(byte *)(param_1 + 0x23) & 0xf) == 10)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0xd4) = 0x80;
    }
    *(bool *)(iVar1 + 0xbc) = *(int *)(iVar1 + 0x54) < *(int *)(iVar2 + 0x54);
  }
  return in_lr;
}

