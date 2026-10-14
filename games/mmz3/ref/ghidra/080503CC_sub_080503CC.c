// sub_080503CC at 0x080503CC (thumb)

undefined4 sub_080503CC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = sub_080253D8(0x14,param_1,&DAT_0835fd80);
      goto LAB_080503fe;
    }
  }
  else {
    iVar2 = sub_08025794();
    if (iVar2 != 0) {
      iVar2 = 0;
LAB_080503fe:
      *(int *)(param_1 + 0xb4) = iVar2;
    }
  }
  cVar1 = *(char *)(param_1 + 0xca);
  if (cVar1 == '\0') {
    if ((*(uint *)(DAT_0202f5c0 + 0x8c) & 1) == 0) goto LAB_08050428;
    cVar1 = '`';
  }
  else {
    cVar1 = cVar1 + -1;
  }
  *(char *)(param_1 + 0xca) = cVar1;
LAB_08050428:
  cVar1 = sub_080501AC(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fcd4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fd00 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

