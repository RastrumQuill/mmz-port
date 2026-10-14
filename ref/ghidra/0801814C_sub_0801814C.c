// sub_0801814C at 0x0801814C (thumb)

undefined8 sub_0801814C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  bVar1 = sub_0801B390();
  if (-1 < (char)bVar1) {
    if (bVar1 == 3) {
      pcVar4 = (char *)(param_1 + 0xbf);
      if (*pcVar4 == '\x01') {
        cVar2 = sub_0801B968(param_1);
        if (cVar2 == '\0') {
          if (*(char *)(param_1 + 0xc0) != '\x03') goto LAB_080181d6;
          *(char *)(param_1 + 0xc2) = *pcVar4;
          *pcVar4 = '\x01';
        }
        else {
          *(char *)(param_1 + 0xc2) = *pcVar4;
          *pcVar4 = '\x02';
        }
LAB_080181cc:
        *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0xc0) = 0;
      }
LAB_080181d6:
      uVar3 = (uint)bVar1;
      goto LAB_080181de;
    }
    pcVar4 = (char *)(param_1 + 0xbf);
    if (*pcVar4 == '\x01') {
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 3;
      *(char *)(param_1 + 0xc2) = *pcVar4;
      *pcVar4 = '\0';
      goto LAB_080181cc;
    }
  }
  uVar3 = 3;
LAB_080181de:
  return CONCAT44(in_lr,uVar3);
}

