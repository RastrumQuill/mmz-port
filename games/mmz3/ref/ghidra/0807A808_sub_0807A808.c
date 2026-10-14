// sub_0807A808 at 0x0807A808 (thumb)

undefined4 sub_0807A808(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar1 + 0xb4) = 0 < *(int *)(iVar2 + 0x54) - *(int *)(iVar1 + 0x54);
  }
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(short *)(iVar2 + 0xa4) == 0)) {
    *(undefined *)(iVar1 + 0x12) = 0xff;
  }
  return in_lr;
}

