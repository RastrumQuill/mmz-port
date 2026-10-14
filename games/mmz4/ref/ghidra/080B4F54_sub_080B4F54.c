// sub_080B4F54 at 0x080B4F54 (thumb)

undefined4 sub_080B4F54(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x60) < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    sub_0801CF00(param_1,0xca0f);
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    uVar4 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54));
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + (&DAT_088604a4)[uVar4 * 2] * 0x100,
                         *(int *)(param_1 + 0x58) + -0x800);
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + *(int *)(&UNK_088604a8 + uVar4 * 8) * 0x100;
    }
  }
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  cVar1 = sub_080B52C4(param_1);
  if (cVar1 != '\0') {
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

