// sub_080DAA6C at 0x080DAA6C (thumb)

undefined4 sub_080DAA6C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0x31;
    DAT_02000a5e = DAT_02000a5e | 0xe;
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined *)(param_1 + 0x75) = 0;
    *(undefined *)(param_1 + 0x76) = 0;
    *(undefined *)(param_1 + 0x7a) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_02000766 & 0x200) == 0) {
    if ((DAT_02000766 & 0x100) != 0) {
      iVar5 = *(byte *)(param_1 + 0x7a) + 1;
      cVar1 = (char)iVar5 + (char)(iVar5 >> 2) * -4;
      goto LAB_080daaf2;
    }
  }
  else {
    iVar5 = *(byte *)(param_1 + 0x7a) + 3;
    cVar1 = (char)iVar5 + (char)(iVar5 >> 2) * -4;
LAB_080daaf2:
    *(char *)(param_1 + 0x7a) = cVar1;
  }
  bVar2 = *(byte *)(param_1 + 0x7a);
  if (bVar2 == 1) {
    piVar4 = (int *)(param_1 + 100);
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        piVar4 = (int *)(param_1 + 0x54);
        goto LAB_080dab20;
      }
    }
    else if (bVar2 == 2) {
      piVar4 = (int *)(param_1 + 0x5c);
      goto LAB_080dab20;
    }
    piVar4 = (int *)(param_1 + 0x7c);
  }
LAB_080dab20:
  if ((DAT_02000766 & 0x40) != 0) {
    piVar4[1] = piVar4[1] + -0x100;
  }
  if ((DAT_02000766 & 0x80) != 0) {
    piVar4[1] = piVar4[1] + 0x100;
  }
  if ((DAT_02000766 & 0x20) != 0) {
    *piVar4 = *piVar4 + -0x100;
  }
  if ((DAT_02000766 & 0x10) != 0) {
    *piVar4 = *piVar4 + 0x100;
  }
  bVar2 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar2;
  if ((bVar2 & 1) == 0) {
    uVar3 = 0x18;
    *(undefined *)(param_1 + 0x74) = 0x18;
    *(undefined *)(param_1 + 0x75) = 0x1f;
  }
  else {
    uVar3 = 0x1f;
    *(undefined *)(param_1 + 0x74) = 0x1f;
    *(undefined *)(param_1 + 0x75) = 0x1f;
  }
  *(undefined *)(param_1 + 0x76) = uVar3;
  return in_lr;
}

