// sub_08085858 at 0x08085858 (thumb)

undefined4 sub_08085858(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x720e);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar3 < 0x4001) {
      if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) ==
          *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
        uVar2 = 0x19;
      }
      else {
        uVar2 = 0x18;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x13;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

