// sub_08019F68 at 0x08019F68 (thumb)

undefined8 sub_08019F68(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  if (0x4000 < 0x1e000U - *param_1) goto LAB_08019f96;
  uVar1 = 0x1f000 - param_1[1];
  while (0x4000 < uVar1) {
LAB_08019f96:
    do {
      iVar3 = iVar3 + 1;
      if (0x24 < iVar3) goto LAB_08019fc8;
    } while (0x4000 < ((&DAT_08349310)[iVar3 * 2] - *param_1) + 0x2000U);
    uVar1 = ((&DAT_08349314)[iVar3 * 2] - param_1[1]) + 0x2000;
  }
LAB_08019fc8:
  if (iVar3 == 0x25) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_083491e8 + iVar3 * 8;
  }
  return CONCAT44(in_lr,puVar2);
}

