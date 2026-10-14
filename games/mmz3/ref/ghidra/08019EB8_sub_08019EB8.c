// sub_08019EB8 at 0x08019EB8 (thumb)

undefined8 sub_08019EB8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  uVar3 = DAT_02002650 & 0x7f;
  if (uVar3 == 5) {
    uVar4 = 0x15;
  }
  else if (uVar3 == 0x10) {
    uVar4 = 0x1c;
  }
  else if (uVar3 == 0xf) {
    uVar4 = 0x24;
  }
  if (uVar4 < 0x25) {
    if (0x4000 < (*(int *)(&UNK_083491e8 + uVar4 * 8) - *param_1) + 0x2000U) goto LAB_08019f1a;
    iVar1 = *(int *)(&UNK_083491ec + uVar4 * 8) - param_1[1];
    while (0x4000 < iVar1 + 0x2000U) {
LAB_08019f1a:
      do {
        uVar4 = uVar4 + 1;
        if (0x24 < (int)uVar4) goto LAB_08019f4a;
      } while (0x4000 < (*(int *)(&UNK_083491e8 + uVar4 * 8) - *param_1) + 0x2000U);
      iVar1 = *(int *)(&UNK_083491ec + uVar4 * 8) - param_1[1];
    }
  }
LAB_08019f4a:
  if (uVar4 == 0x25) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &DAT_08349310 + uVar4 * 2;
  }
  return CONCAT44(in_lr,puVar2);
}

