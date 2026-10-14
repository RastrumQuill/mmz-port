// sub_08120A38 at 0x08120A38 (thumb)

void sub_08120A38(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  if (99 < uVar1) {
    uVar1 = FUN_08121cfe();
  }
                    /* WARNING: Could not recover jumptable at 0x08120a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_08120a54 + uVar1 * 4))();
  return;
}

