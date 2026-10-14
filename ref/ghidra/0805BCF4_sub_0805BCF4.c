// sub_0805BCF4 at 0x0805BCF4 (thumb)

undefined4 sub_0805BCF4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0805bd60;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x60;
    uVar3 = 0xffffffc0;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffc0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x40;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x54) < 0) {
    sub_080033F0(param_1 + 0x6c,0);
  }
  else {
    sub_080033F0(param_1 + 0x6c,2);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805bd60:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar2 = sub_0805B7C0(param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

