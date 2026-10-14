// sub_080C0C78 at 0x080C0C78 (thumb)

void sub_080C0C78(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 3);
  if (0x3b < uVar1) {
    uVar1 = FUN_080c198c();
  }
                    /* WARNING: Could not recover jumptable at 0x080c0c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080c0c9c + uVar1 * 4))();
  return;
}

