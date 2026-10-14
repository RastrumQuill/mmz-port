// sub_080D6FD0 at 0x080D6FD0 (thumb)

undefined4 sub_080D6FD0(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sVar2 = sub_080D03E8(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),
                                            *(undefined *)(param_1 + 0x70)),1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080d70de;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202fd9a = 0x2c0;
    DAT_0202f79a = 9;
    sub_08017700(param_1,0xc501);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  puVar3 = (undefined *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) == -0x3afe) {
      sub_08017700(param_1,0xc503);
    }
    else {
      sub_08017700(param_1,0xc501);
    }
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
LAB_080d7084:
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) == -0x3afd) {
      sub_08017700(param_1,0xc504);
    }
  }
  else {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) == -0x3aff) {
      sub_08017700(param_1,0xc502);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080d7084;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
    return in_lr;
  }
  sVar2 = CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3);
  if ((sVar2 != -0x3aff) && (sVar2 != -0x3afd)) {
    return in_lr;
  }
LAB_080d70de:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

