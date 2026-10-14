// sub_08045D7C at 0x08045D7C (thumb)

undefined4 sub_08045D7C(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (1 < *(byte *)(iVar8 + 0xc)) {
      if (*(char *)(param_1 + 0x11) == '\x02') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
        return in_lr;
      }
      goto LAB_08045dd4;
    }
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
LAB_08045dd4:
    *(char *)(param_1 + 0xf) = cVar1 + '\x01';
  }
  if (*(byte *)(param_1 + 0xe) < 2) {
    if ((*(byte *)(param_1 + 0xe) == 1) && (*(byte *)(param_1 + 0x11) < 2)) {
      sub_08045600(*(undefined4 *)(param_1 + 0x2c),param_1,*(byte *)(param_1 + 0x11) + 1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  piVar7 = (int *)(param_1 + 0xb4);
  piVar5 = (int *)(param_1 + 0xbc);
  *piVar7 = *piVar5;
  piVar6 = (int *)(param_1 + 0xb8);
  piVar3 = (int *)(param_1 + 0xc0);
  *piVar6 = *piVar3;
  *piVar5 = *(int *)(iVar8 + 0xb4);
  iVar8 = *(int *)(iVar8 + 0xb8);
  *piVar3 = iVar8;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    if (*piVar6 == iVar8) {
      sub_0801CFC8(param_1,0x8406,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
      if (*piVar7 < *piVar5) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
        goto LAB_08045fa6;
      }
      if (*piVar5 < *piVar7) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
LAB_08045fd0:
        *(byte *)(param_1 + 0x4a) = bVar2;
      }
      goto LAB_08045fd2;
    }
    sub_0801CFC8(param_1,0x8409,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar4 = (byte *)(param_1 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef;
    if (*piVar3 <= *piVar6) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      bVar2 = *pbVar4 & 0xdf | 0x20;
      goto LAB_08045fea;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
  }
  else {
    if (*piVar6 == iVar8) {
      sub_0801CFC8(param_1,0x8408,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
      if (*piVar5 <= *piVar7) {
        if (*piVar5 < *piVar7) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(undefined *)(param_1 + 0x4c) = 0;
          bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
          goto LAB_08045fd0;
        }
        goto LAB_08045fd2;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      sub_0801CFC8(param_1,0x840a,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
    }
LAB_08045fa6:
    *(byte *)(param_1 + 0x4a) = bVar2;
LAB_08045fd2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x4a) & 0xdf;
LAB_08045fea:
  *(byte *)(param_1 + 0x4a) = bVar2;
  sub_0801CFF0(param_1);
  iVar8 = *piVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar8 = iVar8 + -0x100;
  }
  *(int *)(param_1 + 0x54) = iVar8;
  iVar8 = *piVar3;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar8 = iVar8 + -0x100;
  }
  *(int *)(param_1 + 0x58) = iVar8;
  return in_lr;
}

