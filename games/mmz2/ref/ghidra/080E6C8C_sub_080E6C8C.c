// sub_080E6C8C at 0x080E6C8C (thumb)

void sub_080E6C8C(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 3);
  if (0x45 < uVar1) {
    uVar1 = FUN_080e7942();
  }
                    /* WARNING: Could not recover jumptable at 0x080e6cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080e6cb4 + uVar1 * 4))();
  return;
}

