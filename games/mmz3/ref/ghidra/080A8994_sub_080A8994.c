// sub_080A8994 at 0x080A8994 (thumb)

undefined4 sub_080A8994(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 != '\x01') {
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        sub_080A837C(param_1,2,cVar1 + -1);
      }
      else {
        sub_080A837C(param_1,3,cVar1 + -1);
      }
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)*(short *)(param_1 + 0xbc);
  sVar2 = sub_08009A3C();
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}

