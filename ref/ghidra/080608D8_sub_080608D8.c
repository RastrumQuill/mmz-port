// sub_080608D8 at 0x080608D8 (thumb)

undefined4 sub_080608D8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar5 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50);
  }
  if (iVar5 < 0x3001) {
    iVar6 = *(int *)(DAT_0202286c + 0x50) + 0x2000;
    iVar5 = *(int *)(param_1 + 0x50);
    if (0 < *(int *)(DAT_0202286c + 0x50) - iVar5) {
      iVar6 = *(int *)(DAT_0202286c + 0x50) + -0x2000;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar4 = iVar5 - iVar6;
    if (iVar4 < 0) {
      iVar4 = iVar6 - iVar5;
    }
    if (0x200 < iVar4) {
      if (iVar6 < iVar5) {
        uVar3 = 0xffffff00;
      }
      else {
        uVar3 = 0x100;
      }
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    *(bool *)(param_1 + 0x45) = 0 < *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x58) < 1) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    cVar2 = sub_080602B4(param_1,*(undefined4 *)(param_1 + 0x58));
    if ((cVar2 == '\0') && (*(int *)(param_1 + 0x58) != 0)) {
      sub_0806038C(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

