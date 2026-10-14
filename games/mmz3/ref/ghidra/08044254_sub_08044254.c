// sub_08044254 at 0x08044254 (thumb)

void sub_08044254(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (0xc < uVar1) {
    uVar1 = FUN_08044b6c();
  }
                    /* WARNING: Could not recover jumptable at 0x08044270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_08044278 + uVar1 * 4))();
  return;
}

