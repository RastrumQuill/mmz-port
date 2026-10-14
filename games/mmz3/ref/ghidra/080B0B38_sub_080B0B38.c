// sub_080B0B38 at 0x080B0B38 (thumb)

undefined4 sub_080B0B38(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 10) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08369eac,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08017700(param_1,0xbb06);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(int *)(param_1 + 0x58) = DAT_020302c4 + 0x3fff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xe) = 10;
  }
  return in_lr;
}

