// sub_080FAF2C at 0x080FAF2C (thumb)

undefined8 sub_080FAF2C(int param_1)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined4 in_lr;
  
  pcVar9 = (char *)(param_1 + 0xdcc);
  *(undefined2 *)(param_1 + 0xde4) = DAT_02002130;
  *(undefined2 *)(param_1 + 0xde6) = DAT_02002134;
  bVar1 = false;
  piVar4 = (int *)(param_1 + 0xdd0);
  iVar6 = 3;
  do {
    if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
      *piVar4 = 0;
      bVar1 = true;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  if (bVar1) {
    *(undefined *)(param_1 + 0xdfb) = 1;
    *pcVar9 = *pcVar9 + '\x01';
    *(undefined *)(param_1 + 0xdcd) = 0;
    *(undefined *)(param_1 + 0xdce) = 0;
    *(undefined *)(param_1 + 0xdcf) = 0;
  }
  pcVar2 = (char *)(param_1 + 0xdf9);
  if (*pcVar2 == '\0') {
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    pbVar8 = (byte *)(param_1 + 0xdfa);
    *pcVar2 = ((byte)(uVar5 * 2 >> 0x11) & 0x1f) - ((*pbVar8 >> 3) - 0x30);
    uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    uVar7 = uVar5 * 2 >> 0x11 & 3;
    uVar5 = uVar7;
    if (uVar7 < uVar7 + 4) {
      do {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        iVar6 = *(int *)((uVar5 + ((int)uVar3 >> 2) * -4) * 4 + param_1 + 0xdd0);
        if (iVar6 != 0) {
          uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar5 & 0x7fffffff;
          sub_08071240(pcVar9,iVar6,0x26e800,0x1c000,uVar5 * 2 >> 0x11 & 1);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uVar7 + 4));
    }
    if (*pbVar8 != 0xff) {
      *pbVar8 = *pbVar8 + 1;
    }
  }
  *pcVar2 = *pcVar2 + -1;
  return CONCAT44(in_lr,1);
}

