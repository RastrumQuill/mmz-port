// sub_0805BDC8 at 0x0805BDC8 (thumb)

undefined4 sub_0805BDC8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(param_1 + 0x54) < 0) {
        sub_080033F0(param_1 + 0x6c,0);
      }
      else {
        sub_080033F0(param_1 + 0x6c,2);
      }
    }
    else if (*(int *)(param_1 + 0x54) < 0) {
      sub_080033F0(param_1 + 0x6c,0xf);
    }
    else {
      sub_080033F0(param_1 + 0x6c,5);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar1 = sub_0805B778(param_1);
  if (cVar1 != '\0') {
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = '\x06';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0805B7C0(param_1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

