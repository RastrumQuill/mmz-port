// sub_0800F94C at 0x0800F94C (thumb)

ulonglong sub_0800F94C(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  if (0x4000 < 0x2f8800U - *param_1) goto LAB_0800f97a;
  uVar1 = 0x12c000 - param_1[1];
  while (0x4000 < uVar1) {
LAB_0800f97a:
    do {
      iVar2 = iVar2 + 1;
      if (7 < iVar2) goto LAB_0800f9ac;
    } while (0x4000 < ((&DAT_0829fd04)[iVar2 * 2] - *param_1) + 0x2000U);
    uVar1 = ((&DAT_0829fd08)[iVar2 * 2] - param_1[1]) + 0x2000;
  }
LAB_0800f9ac:
  return CONCAT44(in_lr,iVar2) & 0xffffffff000000ff;
}

