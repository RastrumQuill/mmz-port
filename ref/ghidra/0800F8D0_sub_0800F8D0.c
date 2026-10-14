// sub_0800F8D0 at 0x0800F8D0 (thumb)

undefined8 sub_0800F8D0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  if (0x4000 < 0x2f2000U - *param_1) goto LAB_0800f8fe;
  uVar1 = 0x12d000 - param_1[1];
  while (0x4000 < uVar1) {
LAB_0800f8fe:
    do {
      iVar3 = iVar3 + 1;
      if (0x1b < iVar3) goto LAB_0800f930;
    } while (0x4000 < ((&DAT_0829fc24)[iVar3 * 2] - *param_1) + 0x2000U);
    uVar1 = ((&DAT_0829fc28)[iVar3 * 2] - param_1[1]) + 0x2000;
  }
LAB_0800f930:
  if (iVar3 == 0x1c) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &DAT_0829fb44 + iVar3 * 2;
  }
  return CONCAT44(in_lr,puVar2);
}

