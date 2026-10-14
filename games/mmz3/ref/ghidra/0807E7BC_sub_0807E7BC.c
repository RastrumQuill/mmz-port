// sub_0807E7BC at 0x0807E7BC (thumb)

void sub_0807E7BC(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (0x2f < uVar1) {
    uVar1 = FUN_0807f310();
  }
                    /* WARNING: Could not recover jumptable at 0x0807e7d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0807e7d8 + uVar1 * 4))();
  return;
}

