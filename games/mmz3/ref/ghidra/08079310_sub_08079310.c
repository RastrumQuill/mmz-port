// sub_08079310 at 0x08079310 (thumb)

void sub_08079310(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (4 < uVar1) {
    uVar1 = FUN_08079d24();
  }
                    /* WARNING: Could not recover jumptable at 0x0807932e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_08079334 + uVar1 * 4))();
  return;
}

