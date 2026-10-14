// sub_080CB778 at 0x080CB778 (thumb)

undefined4 sub_080CB778(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836c620;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    sub_08017700(param_1,0x2d01);
    *(int *)(param_1 + 0x58) = DAT_0202e48c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (iVar3 <= *(int *)(DAT_0202f5c0 + 0x58))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  iVar2 = (DAT_0202e48c + *(int *)(param_1 + 0x68)) - iVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  *(int *)(param_1 + 0x58) = iVar3 + (iVar2 >> 3);
  sub_080177F4(param_1);
  return in_lr;
}

