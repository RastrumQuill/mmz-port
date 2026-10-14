// sub_0801563C at 0x0801563C (thumb)

undefined4 sub_0801563C(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    DAT_02004fa1 = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
    }
  }
  else if (bVar1 == 2) {
    DAT_02004fa0 = DAT_02004fa0 | 0x80;
  }
  else if (bVar1 == 3) {
    DAT_02004fa0 = DAT_02004fa0 & 0x7f;
  }
  return 0;
}

