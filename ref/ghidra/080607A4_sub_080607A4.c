// sub_080607A4 at 0x080607A4 (thumb)

undefined4 sub_080607A4(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = 0xffffff40;
    *(undefined4 *)(param_1 + 0x58) = 0xffffff40;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar3 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar3;
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
  iVar4 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50);
  }
  if (iVar4 < 0x2000) {
    uVar2 = 2;
  }
  else {
    cVar1 = sub_080602B4(param_1,*(undefined4 *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      sub_0806038C(param_1);
      return in_lr;
    }
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

