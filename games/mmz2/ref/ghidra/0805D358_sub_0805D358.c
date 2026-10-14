// sub_0805D358 at 0x0805D358 (thumb)

undefined4 sub_0805D358(int param_1)

{
  char cVar1;
  undefined uVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_080128D4();
  uVar4 = 0;
  iVar6 = 0;
  piVar3 = (int *)(param_1 + 0xc4);
  do {
    if (*(char *)(*piVar3 + 0x11) != '\0') {
      iVar6 = iVar6 + 1;
    }
    if (*(char *)(*piVar3 + 0xd) != '\x02') {
      return in_lr;
    }
    piVar3 = piVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  pcVar5 = (char *)(param_1 + 0xbd);
  if (iVar6 == 4) {
    *pcVar5 = '\x04';
  }
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *pcVar5 = *pcVar5 + '\x01';
    goto LAB_0805d3fe;
  }
  if (cVar1 == '\x01') {
    if ((*(char *)(*(int *)(param_1 + 0xc4) + 0x11) == '\0') ||
       (*(char *)(*(int *)(param_1 + 200) + 0x11) == '\0')) {
      uVar2 = 6;
LAB_0805d3da:
      *(undefined *)(param_1 + 0xd) = uVar2;
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined *)(param_1 + 0xd) = 8;
        *pcVar5 = '\0';
      }
      else {
        *(undefined *)(param_1 + 0xd) = 9;
        *pcVar5 = '\0';
      }
      goto LAB_0805d3fe;
    }
    if ((4 < *(byte *)(DAT_0202ebf0 + 1)) && (*(char *)(*(int *)(param_1 + 0xcc) + 0x11) == '\0')) {
      uVar2 = 7;
      goto LAB_0805d3da;
    }
  }
  *pcVar5 = *pcVar5 + '\x01';
LAB_0805d3fe:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

