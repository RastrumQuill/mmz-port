// sub_08098BF4 at 0x08098BF4 (thumb)

undefined4 sub_08098BF4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(int *)(param_1 + 0xb4) == 0) && (*(byte *)(iVar2 + 0xc) < 2)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 0x54) + **(int **)(param_1 + 0xb8);
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x54) - **(int **)(param_1 + 0xb8);
    }
    *(int *)(param_1 + 0x54) = iVar1;
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + *(int *)(*(int *)(param_1 + 0xb8) + 4);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_08098C60(param_1);
  }
  return in_lr;
}

