// sub_0805B8CC at 0x0805B8CC (thumb)

undefined4 sub_0805B8CC(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c);
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfe;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x2c) = 0;
    }
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x2c) + 0xbc);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfe;
    }
    else {
      *piVar1 = 0;
    }
  }
  return in_lr;
}

