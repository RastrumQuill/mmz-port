// sub_0801916C at 0x0801916C (thumb)

bool sub_0801916C(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_02004fc0 != 0) {
    iVar1 = *(int *)(DAT_02004fc0 + 0x40);
  }
  return (*(int *)(iVar1 + 0x4c) - *(int *)(param_1 + 0x4c)) + 0x800U < 0x1001;
}

