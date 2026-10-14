// sub_080840A4 at 0x080840A4 (thumb)

undefined4 sub_080840A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 != '\x01') {
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        sub_080839C4(param_1,2,cVar1 + -1);
      }
      else {
        sub_080839C4(param_1,3,cVar1 + -1);
      }
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)*(short *)(param_1 + 0xc0);
  cVar1 = sub_080079CC();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}

