// sub_080CA334 at 0x080CA334 (thumb)

undefined4 sub_080CA334(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xa4) < 5) {
    sub_08017700(param_1,0x1103);
  }
  else {
    sub_08017700(param_1,0x1101);
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836c520;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    sub_08007390(param_1 + 0x74,&DAT_0836c4c0);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  piVar5 = (int *)(param_1 + 0xb4);
  iVar4 = *piVar5 + -0x80;
  *piVar5 = iVar4;
  bVar1 = iVar4 < DAT_0202e48c;
  if (bVar1) {
    *piVar5 = DAT_0202e48c;
  }
  iVar4 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*piVar5);
  if (0 < iVar4) {
    *piVar5 = *piVar5 + iVar4;
  }
  iVar6 = *(int *)(param_1 + 0x58);
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (iVar6 <= *(int *)(DAT_0202f5c0 + 0x58))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  if ((0 < iVar4 || bVar1) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar4 = (*piVar5 + *(int *)(param_1 + 0x68)) - iVar6;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  *(int *)(param_1 + 0x58) = iVar6 + (iVar4 >> 3);
  return in_lr;
}

