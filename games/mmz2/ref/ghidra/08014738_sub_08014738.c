// sub_08014738 at 0x08014738 (thumb)

undefined8 sub_08014738(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if ((DAT_020011d0 & 0x7f) == 5) {
    uVar3 = 0x1b;
  }
  else if ((DAT_020011d0 & 0x7f) == 0x10) {
    uVar3 = 0x15;
  }
  if (uVar3 < 0x1d) {
    if (0x4000 < (*(int *)(&UNK_08325e94 + uVar3 * 8) - *param_1) + 0x2000U) goto LAB_08014792;
    iVar1 = *(int *)(&UNK_08325e98 + uVar3 * 8) - param_1[1];
    while (0x4000 < iVar1 + 0x2000U) {
LAB_08014792:
      do {
        uVar3 = uVar3 + 1;
        if (0x1c < (int)uVar3) goto LAB_080147c2;
      } while (0x4000 < (*(int *)(&UNK_08325e94 + uVar3 * 8) - *param_1) + 0x2000U);
      iVar1 = *(int *)(&UNK_08325e98 + uVar3 * 8) - param_1[1];
    }
  }
LAB_080147c2:
  if (uVar3 == 0x1d) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &DAT_08325f7c + uVar3 * 2;
  }
  return CONCAT44(in_lr,puVar2);
}

