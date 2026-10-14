// sub_0805E5F8 at 0x0805E5F8 (thumb)

undefined4 sub_0805E5F8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x12) = 0x15;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
    uVar5 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    uVar5 = 0xfffffc00;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar5 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar3 = sub_0805DEC8(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 & 2) != 0) {
      bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar2;
      if (bVar2 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
    iVar4 = *(int *)(param_1 + 0xc4) + -1;
    *(int *)(param_1 + 0xc4) = iVar4;
    if (iVar4 < 10) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_0800561C(param_1 + 0x74,&DAT_082b028c);
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

