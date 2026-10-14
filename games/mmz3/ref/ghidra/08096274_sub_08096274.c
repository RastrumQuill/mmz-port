// sub_08096274 at 0x08096274 (thumb)

undefined4 sub_08096274(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xdb01);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = 0x100;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    if (0 < *(int *)(param_1 + 0xb4)) {
      uVar2 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined *)(param_1 + 0x13) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_08095910(param_1);
  if (1 < *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = '\x06';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

