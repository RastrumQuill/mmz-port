// sub_08084DF8 at 0x08084DF8 (thumb)

undefined4 sub_08084DF8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x7203);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) ==
        *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      uVar2 = 0x12;
    }
    else {
      uVar2 = 0xf;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xb6) = 3;
  }
  return in_lr;
}

