// sub_080E8678 at 0x080E8678 (thumb)

undefined8 sub_080E8678(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  bVar1 = false;
  if ((DAT_0202ebb4 & 2) == 0) {
    if ((DAT_02000d14 & 0x100) == 0) {
      if ((DAT_02000d14 & 0x200) != 0) {
        pbVar4 = (byte *)(param_1 + 0xde4);
        *(byte *)(param_1 + 0xde5) = *pbVar4;
        *pbVar4 = *pbVar4 + 3 & 3;
        bVar1 = true;
      }
      goto LAB_080e8732;
    }
    pbVar4 = (byte *)(param_1 + 0xde4);
    *(byte *)(param_1 + 0xde5) = *pbVar4;
    *pbVar4 = *pbVar4 + 1 & 3;
  }
  else {
    pcVar3 = (char *)(param_1 + 0xde4);
    if (*pcVar3 == '\0') {
      if ((DAT_02000d14 & 0x100) == 0) {
LAB_080e8732:
        if (!bVar1) {
          uVar2 = 0;
          goto LAB_080e8762;
        }
      }
      else {
        *(undefined *)(param_1 + 0xde5) = 0;
        *pcVar3 = '\x02';
      }
    }
    else {
      if ((DAT_02000d14 & 0x200) == 0) goto LAB_080e8732;
      *(undefined *)(param_1 + 0xde5) = 2;
      *pcVar3 = '\0';
    }
  }
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(char *)(param_1 + 0xde6) = *(char *)(param_1 + 0xde6) == '\0';
  uVar2 = 1;
LAB_080e8762:
  return CONCAT44(in_lr,uVar2);
}

