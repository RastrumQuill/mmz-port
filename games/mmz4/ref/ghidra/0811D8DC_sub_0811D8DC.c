// sub_0811D8DC at 0x0811D8DC (thumb)

void sub_0811D8DC(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  if (0xd < uVar1) {
    uVar1 = FUN_0811e292();
  }
                    /* WARNING: Could not recover jumptable at 0x0811d8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0811d8f8 + uVar1 * 4))();
  return;
}

