// sub_0805FE64 at 0x0805FE64 (thumb)

undefined4 sub_0805FE64(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x4c);
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = -iVar3;
  }
  if (iVar2 < 0x201) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x100;
    }
    *(bool *)(param_1 + 0x44) = 0 < *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x54) < 1) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar2 = sub_0805F778(param_1);
    if (1 < iVar2 * 0x1000000 - 0x1000000U >> 0x18) {
      sub_0805F828(param_1);
    }
  }
  return in_lr;
}

