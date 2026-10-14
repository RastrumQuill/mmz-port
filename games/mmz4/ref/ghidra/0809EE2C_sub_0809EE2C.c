// sub_0809EE2C at 0x0809EE2C (thumb)

undefined4 sub_0809EE2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_080E04AC(param_1 + 0x54,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_080E04AC(param_1 + 0x54,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    sub_080E04AC(param_1 + 0x54,2,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_14 = *(int *)(param_1 + 0x54);
    iVar1 = -0x800;
  }
  else {
    local_14 = *(int *)(param_1 + 0x54);
    iVar1 = 0x800;
  }
  local_14 = local_14 + iVar1;
  local_10 = *(undefined4 *)(param_1 + 0x58);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  sub_0802AB70(2,0xb,&local_14);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

