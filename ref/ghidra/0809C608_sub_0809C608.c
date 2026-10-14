// sub_0809C608 at 0x0809C608 (thumb)

int sub_0809C608(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_02021648;
  if (0xa000 < (DAT_02021648 - *(int *)(param_1 + 4)) + 0x5000U) {
    iVar1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}

