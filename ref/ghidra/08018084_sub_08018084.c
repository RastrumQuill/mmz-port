// sub_08018084 at 0x08018084 (thumb)

undefined8 sub_08018084(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  bVar1 = sub_0801B390();
  if ((char)bVar1 < '\0') goto LAB_08018144;
  if (bVar1 != 2) {
    pcVar2 = (char *)(param_1 + 0xbe);
    if (*pcVar2 == '\x03') {
      pcVar5 = (char *)(param_1 + 0xc0);
      if (*pcVar5 == (&DAT_082a8125)[(uint)*(byte *)(param_1 + 0xd) * 6]) {
        if (7 < *(byte *)(param_1 + 0xbf)) {
LAB_080180e0:
          *(char *)(param_1 + 0xc1) = *pcVar2;
          *pcVar2 = '\x03';
          *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
          *(undefined *)(param_1 + 0xbf) = 0;
          *(char *)(param_1 + 0xc3) = *pcVar5;
          *pcVar5 = '\0';
          *(undefined4 *)(param_1 + 0x24) = 0;
          goto LAB_0801813e;
        }
      }
      else if (3 < *(byte *)(param_1 + 0xbf)) goto LAB_080180e0;
LAB_08018144:
      uVar4 = 2;
      goto LAB_08018146;
    }
    if (*pcVar2 == '\x02') {
      iVar3 = *(int *)(param_1 + 0x24);
      if (((iVar3 != 0) && (*(char *)(iVar3 + 9) == '\x02')) && (*(char *)(iVar3 + 0xd) == '\0'))
      goto LAB_08018144;
      *(char *)(param_1 + 0xc1) = *pcVar2;
      *pcVar2 = '\x03';
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
LAB_0801813e:
  uVar4 = (uint)bVar1;
LAB_08018146:
  return CONCAT44(in_lr,uVar4);
}

