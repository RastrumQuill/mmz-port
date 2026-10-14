// sub_0807ED54 at 0x0807ED54 (thumb)

undefined4 sub_0807ED54(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
    *(int *)(param_1 + 0xb4) = 0;
  }
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((*puVar6 & 0x200) != 0) {
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 0xb4) = *(byte *)(iVar5 + 0xb4) | 2;
    }
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0xb4) = *(byte *)(iVar1 + 0xb4) | 2;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0807EBCC(param_1);
    return in_lr;
  }
  iVar2 = sub_08065A24(param_1);
  if (iVar2 != 0) {
    sub_08012ACC(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0xc0) = 0;
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xc0);
  if ((*puVar6 & 1) == 0) {
LAB_0807ee38:
    if (*piVar4 == 0) goto LAB_0807ee4c;
  }
  else if (*piVar4 == 0) {
    iVar2 = sub_0801E11C(0,param_1,&DAT_08340938);
    *piVar4 = iVar2;
    goto LAB_0807ee38;
  }
  iVar2 = sub_0801E4D8(*piVar4);
  if (iVar2 != 0) {
    *piVar4 = 0;
  }
LAB_0807ee4c:
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x5f11);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080128D4(param_1);
    if ((DAT_0202ebbb & 1) != 0) {
      return in_lr;
    }
    if ((DAT_0202ebbb & 0x20) != 0) {
      return in_lr;
    }
    iVar2 = sub_08065A24(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0xd) == '\b')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (iVar1 == 0) {
      return in_lr;
    }
    if (*(char *)(iVar1 + 0xd) != '\b') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x5f12);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080128D4(param_1);
    if (((DAT_0202ebbb & 1) != 0) || ((DAT_0202ebbb & 0x20) != 0)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar3 = '\0';
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0xd) == '\b')) {
      cVar3 = '\x01';
    }
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0xd) == '\b')) {
      cVar3 = cVar3 + '\x01';
    }
    if (cVar3 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

