// sub_080C8210 at 0x080C8210 (thumb)

undefined4 sub_080C8210(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) goto LAB_080c8272;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      *(undefined *)(param_1 + 0xe) = 3;
    }
    else if (bVar1 != 3) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = 0x9e00;
LAB_080c8254:
    sub_08017700(param_1,uVar2);
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\x02') {
      uVar2 = 0x9f00;
      goto LAB_080c8254;
    }
    sub_08017700(param_1,0xa100);
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080c8272:
  pbVar4 = *(byte **)(param_1 + 0x74);
  if (*(char *)(param_1 + 0x11) == '\x03') {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0xdc4) -
            ((uint)*(byte *)(param_1 + 0x7c) * 0x1000 + -0x6800);
    *(int *)(param_1 + 0x54) = iVar3 + -0x800;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x2c) + 0xdc8) + 0x3800;
    if (*(short *)(*(int *)(param_1 + 0x28) + 4) == 1) {
      *(int *)(param_1 + 0x54) = iVar3 + -0xa00 + *(int *)(*(int *)(param_1 + 0x28) + 0x34);
    }
  }
  sub_080177F4(param_1);
  if (*pbVar4 <= *(byte *)(param_1 + 0x7c)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

