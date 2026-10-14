// sub_080F01B4 at 0x080F01B4 (thumb)

void sub_080F01B4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 3) - 0x3f;
  if (0x37 < uVar1) {
    uVar1 = FUN_080f0c2c();
  }
                    /* WARNING: Could not recover jumptable at 0x080f01d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080f01dc + uVar1 * 4))();
  return;
}

