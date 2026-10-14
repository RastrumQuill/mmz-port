// sub_08074330 at 0x08074330 (thumb)

undefined4 sub_08074330(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28) + 0xb4;
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)(*(int *)(iVar2 + (*(byte *)(param_1 + 0x11) + 4) * 4) + 0x54);
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(*(int *)(iVar2 + (*(byte *)(param_1 + 0x11) + 4) * 4) + 0x58);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    sub_080128D4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
      if (*(char *)(iVar2 + 8) != '\0') {
        return in_lr;
      }
      if ((*(uint *)(iVar2 + 0x8c) & 0x200) != 0) {
        return in_lr;
      }
      if (*(short *)(iVar2 + 0xa4) == 0) {
        return in_lr;
      }
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + -0x600;
      return in_lr;
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833f454,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    sub_080127E4(param_1,0xa20e);
    sub_080128D4(param_1);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

