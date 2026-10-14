// sub_080147E0 at 0x080147E0 (thumb)

undefined8 sub_080147E0(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  if (0x4000 < 0x1e000U - *param_1) goto LAB_0801480e;
  uVar1 = 0x1f000 - param_1[1];
  while (0x4000 < uVar1) {
LAB_0801480e:
    do {
      iVar3 = iVar3 + 1;
      if (0x1c < iVar3) goto LAB_08014840;
    } while (0x4000 < ((&DAT_08325f7c)[iVar3 * 2] - *param_1) + 0x2000U);
    uVar1 = ((&DAT_08325f80)[iVar3 * 2] - param_1[1]) + 0x2000;
  }
LAB_08014840:
  if (iVar3 == 0x1d) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_08325e94 + iVar3 * 8;
  }
  return CONCAT44(in_lr,puVar2);
}

