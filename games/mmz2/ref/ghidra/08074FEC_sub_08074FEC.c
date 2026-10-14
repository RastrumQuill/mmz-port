// sub_08074FEC at 0x08074FEC (thumb)

undefined4 sub_08074FEC(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(*(int *)(param_1 + 0x28) + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
      uVar1 = 0x40;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
      uVar1 = 0xc0;
    }
    *(undefined *)(param_1 + 0x24) = uVar1;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

