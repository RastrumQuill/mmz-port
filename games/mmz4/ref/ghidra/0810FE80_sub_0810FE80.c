// sub_0810FE80 at 0x0810FE80 (thumb)

void sub_0810FE80(int param_1)

{
  uint uVar1;
  undefined auStack_3c [28];
  
  uVar1 = (uint)*(byte *)(param_1 + 7);
  if (0x17 < uVar1) {
    uVar1 = FUN_081108fe(uVar1,auStack_3c);
  }
                    /* WARNING: Could not recover jumptable at 0x0810fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0810fef0 + uVar1 * 4))();
  return;
}

