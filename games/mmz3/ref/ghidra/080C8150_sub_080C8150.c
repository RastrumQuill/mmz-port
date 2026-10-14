// sub_080C8150 at 0x080C8150 (thumb)

undefined4 sub_080C8150(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08017700(param_1,8);
    }
    else {
      sub_08017700(param_1,0x12);
    }
    sub_08017BCC(param_1,0xe);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x5a < bVar1) {
    *(undefined *)(param_1 + 0x12) = 0x5a;
  }
  if ((0x24 < *(byte *)(param_1 + 0x12)) && (*(char *)(param_1 + 0x13) == '\0')) {
    *(undefined *)(param_1 + 0x13) = 1;
    sub_08017BCC(param_1,0xf);
  }
  sub_080177F4(param_1);
  if ((DAT_02002130 & 2) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

