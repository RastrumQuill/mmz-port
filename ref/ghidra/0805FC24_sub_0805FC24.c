// sub_0805FC24 at 0x0805FC24 (thumb)

undefined4 sub_0805FC24(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = 0xffffff40;
    *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  }
  if (iVar5 < 0x4000) {
    uVar3 = 2;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar1 = sub_0805F778(param_1);
    if (cVar1 == '\0') {
      sub_0805F828(param_1);
      return in_lr;
    }
    bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar3 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

