// sub_08097950 at 0x08097950 (thumb)

undefined4 sub_08097950(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x5006);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x10;
    sub_080DD180(param_1 + 0x54,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_18;
  iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 == 0) {
    local_14 = *(int *)(param_1 + 0x58) + -0xe00;
    sub_080D4898(&local_18,&DAT_0885d4c0,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(&local_18,&DAT_0885d514,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    sub_0802AB70(4,1,param_1 + 0x54);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

