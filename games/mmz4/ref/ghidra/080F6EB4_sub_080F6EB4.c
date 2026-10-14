// sub_080F6EB4 at 0x080F6EB4 (thumb)

undefined4 sub_080F6EB4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x8c) & 0x800) != 0) {
      iVar1 = 0;
    }
    if (iVar1 != 0) goto LAB_080f6eea;
  }
  iVar1 = sub_0809DEF0(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28),param_1,param_1 + 0x54);
LAB_080f6eea:
  *(int *)(param_1 + 0xb8) = iVar1;
  return in_lr;
}

