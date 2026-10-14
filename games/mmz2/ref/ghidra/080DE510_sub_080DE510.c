// sub_080DE510 at 0x080DE510 (thumb)

undefined4 sub_080DE510(undefined4 param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f0a4;
  if (DAT_0202f0a4 < 0x60) {
    (&DAT_0202f0a8)[DAT_0202f0a4] = param_1;
    (&DAT_0202f228)[iVar1] = param_2;
    (&DAT_0202f288)[DAT_0202f0a4] = param_3;
    (&DAT_0202f2e8)[DAT_0202f0a4] = 0xffff;
    DAT_0202f0a4 = DAT_0202f0a4 + 1;
  }
  return in_lr;
}

