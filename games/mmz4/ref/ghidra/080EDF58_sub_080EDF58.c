// sub_080EDF58 at 0x080EDF58 (thumb)

void sub_080EDF58(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xd);
  if (0xd3 < uVar1) {
    uVar1 = FUN_080eea9c();
  }
                    /* WARNING: Could not recover jumptable at 0x080edf76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080edf7c + uVar1 * 4))();
  return;
}

