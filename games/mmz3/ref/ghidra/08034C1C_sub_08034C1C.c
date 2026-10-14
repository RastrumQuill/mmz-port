// sub_08034C1C at 0x08034C1C (thumb)

undefined4 sub_08034C1C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x54) - 0x96000U < 0x1e001) {
    uVar1 = sub_0800A104(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  else {
    uVar1 = 0x6e000;
  }
  return uVar1;
}

