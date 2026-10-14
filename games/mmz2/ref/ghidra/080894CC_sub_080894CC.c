// sub_080894CC at 0x080894CC (thumb)

undefined4 sub_080894CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((byte)(*(char *)(param_1 + 0xd) - 3U) < 5) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1800;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
      *(undefined *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 10) >> 5 & 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  cVar1 = *(char *)(param_1 + 0x10);
  if ((((cVar1 == '\x03') || (cVar1 == '\x01')) || (cVar1 == '\x02')) &&
     ((*(char *)(param_1 + 0xd) == '\x02' ||
      ((cVar1 == '\x02' && (*(char *)(param_1 + 0xd) == '\x03')))))) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080127E4(param_1,0x7400);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080127E4(param_1,0x7408);
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

