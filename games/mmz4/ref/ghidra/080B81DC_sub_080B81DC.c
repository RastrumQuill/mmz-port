// sub_080B81DC at 0x080B81DC (thumb)

undefined4 sub_080B81DC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B8364(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x27fc) {
        sub_0801CF00(param_1);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x27ff) {
      sub_0801CF00(param_1);
    }
    sub_0801CFF0(param_1);
    if (*(char *)(iVar3 + 0xd6) != '\0') goto LAB_080b8344;
    *(undefined *)(param_1 + 0x12) = 0x28;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080b8344;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x27fd) {
        sub_0801CF00(param_1);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x2800) {
      sub_0801CF00(param_1);
    }
    sub_0801CFF0(param_1);
    if (*(char *)(iVar3 + 0xd6) == '\0') goto LAB_080b8344;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_080b8344;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 != 3) goto LAB_080b8344;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x27fb) {
        sub_0801CF00(param_1);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x27fe) {
      sub_0801CF00(param_1);
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080b8344;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_080b8344:
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + -0x200;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + 0x2800;
  return in_lr;
}

