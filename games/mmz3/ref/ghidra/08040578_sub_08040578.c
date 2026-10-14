// sub_08040578 at 0x08040578 (thumb)

undefined8 sub_08040578(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  }
  if (iVar2 < 0x4f00) {
    uVar1 = 0;
  }
  else if (iVar2 < 0x8f00) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

