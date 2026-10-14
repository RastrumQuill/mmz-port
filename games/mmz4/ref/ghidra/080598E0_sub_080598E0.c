// sub_080598E0 at 0x080598E0 (thumb)

ulonglong sub_080598E0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_2c [4];
  int local_1c;
  
  local_2c[0] = 0x10;
  local_2c[1] = 0x20;
  local_2c[2] = 0xdf;
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_2c[3] = *(int *)(DAT_0202dbf0 + 0x54);
  local_1c = *(int *)(DAT_0202dbf0 + 0x58) + -0x1000;
  iVar1 = sub_0810CCF0((uVar3 * -2 + 1) * (local_2c[3] - *(int *)(param_1 + 0x54)),
                       local_1c - *(int *)(param_1 + 0xbc));
  iVar2 = 0;
  do {
    iVar4 = local_2c[iVar2];
    iVar2 = iVar2 + 1;
    if (iVar1 * 0x1000000 + 0x40000000U >> 0x18 <=
        (iVar4 + -0x80 + (local_2c[iVar2] - iVar4) / 2 & 0xffU)) break;
    iVar4 = local_2c[0];
  } while (iVar2 < 2);
  return CONCAT44(in_lr,iVar4 * (uVar3 * -2 + 1) + 0x40) & 0xffffffff000000ff;
}

