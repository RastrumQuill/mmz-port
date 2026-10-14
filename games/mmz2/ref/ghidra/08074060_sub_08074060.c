// sub_08074060 at 0x08074060 (thumb)

undefined4 sub_08074060(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') goto LAB_08074106;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x24) != '\0') {
      cVar2 = *(char *)(param_1 + 0x24) + -1;
LAB_080740c0:
      *(char *)(param_1 + 0x24) = cVar2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
LAB_080740b4:
      if (*(char *)(param_1 + 0x24) != '\0') {
        cVar2 = *(char *)(param_1 + 0x24) + '\x01';
        goto LAB_080740c0;
      }
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x24) != '\0') {
      cVar2 = *(char *)(param_1 + 0x24) + -1;
      goto LAB_080740c0;
    }
  }
  else if (bVar1 == 3) goto LAB_080740b4;
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(param_1 + 0x24) == '\0')) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      sub_08012580(param_1);
      if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
        sub_080127E4(param_1,0x1f03);
      }
      else {
        sub_080127E4(param_1,0x1f02);
      }
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
LAB_08074106:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        *(undefined *)(iVar3 + 0xbf) = 0;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\0') {
        *(undefined *)(iVar3 + 0xbe) = 0;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

