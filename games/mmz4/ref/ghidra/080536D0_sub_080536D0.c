// sub_080536D0 at 0x080536D0 (thumb)

undefined4 sub_080536D0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  char acStack_1c [4];
  int local_18;
  int local_14;
  
  sub_08128B5C(acStack_1c,&DAT_08128ea0,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xb600);
    *(undefined4 *)(param_1 + 0xcc) = 0x169;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  piVar2 = (int *)(param_1 + 0xcc);
  iVar3 = *piVar2 + -1;
  *piVar2 = iVar3;
  iVar1 = sub_08128954(iVar3,0x78);
  if (iVar1 == 0) {
    iVar1 = FUN_081288bc(iVar3,0x78);
    local_18 = *(int *)(param_1 + 0xbc) + 0x1400;
    if (acStack_1c[3U - iVar1 & 0xff] == '\x03') {
      local_14 = *(int *)(param_1 + 0xb8) + -0x6fff;
    }
    else {
      local_14 = *(int *)(param_1 + 0xb8);
    }
    sub_08089D08(&local_18,0);
  }
  if (*piVar2 == 0) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

