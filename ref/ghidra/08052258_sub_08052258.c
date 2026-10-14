// sub_08052258 at 0x08052258 (thumb)

undefined4 sub_08052258(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    uVar2 = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sVar1 = (&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40];
  *(int *)(param_1 + 0x58) = sVar1 * 2;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + sVar1 * 2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 0x100;
  iVar3 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x4c);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc4);
  }
  if (0x1c000 < iVar3) {
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

