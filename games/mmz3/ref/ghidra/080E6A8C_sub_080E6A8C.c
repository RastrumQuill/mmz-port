// sub_080E6A8C at 0x080E6A8C (thumb)

undefined4 sub_080E6A8C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x74);
  sub_080177F4();
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    iVar3 = sub_080FE4D8(*(byte *)(param_1 + 0x78),(&DAT_0836e880)[*(byte *)(iVar4 + 0x11)]);
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - ((uint)(iVar3 << 0x18) >> 0xf);
    if (bVar1 < 8) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x78) < (byte)(&DAT_0836e880)[*(byte *)(iVar4 + 0x11)]) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      return in_lr;
    }
    break;
  case 1:
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x400;
    if (bVar1 < 0xc) {
      return in_lr;
    }
    break;
  case 2:
    if (*(char *)(iVar3 + 0xdd1) == '\0') {
      return in_lr;
    }
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) ==
        CONCAT11(*(undefined *)(iVar4 + 0x1e),*(undefined *)(iVar4 + 0x70))) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    }
    else {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    }
    *(undefined *)(param_1 + 0x12) = *(undefined *)(iVar4 + 0x13);
    break;
  case 3:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((byte)(&DAT_0836e880)[*(byte *)(iVar4 + 0x11)] <= *(byte *)(param_1 + 0x78)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    }
    if (8 < *(byte *)(param_1 + 0x12)) {
      return in_lr;
    }
    break;
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    iVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x78),(&DAT_0836e880)[*(byte *)(iVar4 + 0x11)]);
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uint)(iVar3 << 0x18) >> 0xf);
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc);
    }
  default:
    goto switchD_080e6aac_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080e6aac_caseD_5:
  return in_lr;
}

