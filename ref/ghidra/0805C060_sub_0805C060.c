// sub_0805C060 at 0x0805C060 (thumb)

undefined4 sub_0805C060(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    uVar2 = 0x100;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar2 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined *)(param_1 + 0x13) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  sub_0805B7C0(param_1);
  if (1 < *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = '\x06';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

