// sub_080B38C0 at 0x080B38C0 (thumb)

undefined4 sub_080B38C0(int param_1)

{
  char cVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc704);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    uVar4 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54));
    sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) + (&DAT_08860308)[uVar4 * 2] * 0x100,
                         *(int *)(param_1 + 0x58) + -0x800);
    if (sVar3 == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + *(int *)(&UNK_0886030c + uVar4 * 8) * 0x100;
      cVar1 = sub_080B3AF0(param_1);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + *(int *)(&UNK_0886030c + uVar4 * 8) * 0x100;
      }
    }
  }
  cVar1 = sub_080B3B70(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      uVar4 = 1;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    }
    cVar1 = sub_080B3AF0(param_1);
    if ((cVar1 == '\0') || ((~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) != uVar4)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

