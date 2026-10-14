// sub_080A36D8 at 0x080A36D8 (thumb)

void sub_080A36D8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar2 + 0xc)) {
    sub_080B2484(1,param_1 + 0x54);
    sub_080A3F1C();
  }
  if ((*(char *)(iVar2 + 0xd) == '\n') && (*(byte *)(param_1 + 0xe) < 5)) {
    sub_080A3F1C();
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
    sub_0800471C(0x52);
  }
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (0x1b < uVar1) {
    uVar1 = FUN_080a3f2e();
  }
                    /* WARNING: Could not recover jumptable at 0x080a373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080a3744 + uVar1 * 4))();
  return;
}

