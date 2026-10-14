// sub_080379E4 at 0x080379E4 (thumb)

undefined4 sub_080379E4(int param_1)

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
  puVar4 = (uint *)(param_1 + 200);
  if ((*puVar4 & 0x10) != 0) {
    *puVar4 = 1;
    uVar3 = 5;
    goto LAB_08037aba;
  }
  if ((int)(*(byte *)(param_1 + 0x13) - 0x3c) < (int)(uint)*(byte *)(param_1 + 0x12)) {
    *puVar4 = 8;
    sub_0800561C(param_1 + 0x74,&DAT_082ad86c);
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) goto LAB_08037a5c;
    cVar2 = *(char *)(param_1 + 0xcc) + -1;
    *(char *)(param_1 + 0xcc) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 4;
      goto LAB_08037aba;
    }
  }
  else {
LAB_08037a5c:
    if (*(byte *)(param_1 + 0x12) <= *(byte *)(param_1 + 0x13)) {
      return in_lr;
    }
    iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    }
    if (iVar5 < 0x4000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *puVar4 = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined2 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xcc) + -1;
    *(char *)(param_1 + 0xcc) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 4;
      goto LAB_08037aba;
    }
  }
  uVar3 = 3;
LAB_08037aba:
  *(undefined2 *)(param_1 + 0xe) = uVar3;
  return in_lr;
}

