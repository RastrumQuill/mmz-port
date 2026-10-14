// sub_0805FC44 at 0x0805FC44 (thumb)

undefined4 sub_0805FC44(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  puVar4 = (uint *)(param_1 + 0xc4);
  if ((*puVar4 & 0x10) != 0) {
    *puVar4 = 1;
    uVar3 = 5;
    goto LAB_0805fd1a;
  }
  if ((int)(*(byte *)(param_1 + 0x13) - 0x3c) < (int)(uint)*(byte *)(param_1 + 0x12)) {
    *puVar4 = 8;
    sub_08007390(param_1 + 0x74,&DAT_08361b48);
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) goto LAB_0805fcbc;
    cVar2 = *(char *)(param_1 + 200) + -1;
    *(char *)(param_1 + 200) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 4;
      goto LAB_0805fd1a;
    }
  }
  else {
LAB_0805fcbc:
    if (*(byte *)(param_1 + 0x12) <= *(byte *)(param_1 + 0x13)) {
      return in_lr;
    }
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    }
    if (iVar5 < 0x4000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *puVar4 = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined2 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 200) + -1;
    *(char *)(param_1 + 200) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 4;
      goto LAB_0805fd1a;
    }
  }
  uVar3 = 3;
LAB_0805fd1a:
  *(undefined2 *)(param_1 + 0xe) = uVar3;
  return in_lr;
}

