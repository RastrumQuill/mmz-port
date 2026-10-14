// sub_08067590 at 0x08067590 (thumb)

undefined4 sub_08067590(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (0x9fff < (uint)((*(int *)(DAT_0202f5c0 + 0x54) + 0x5000) - *(int *)(param_1 + 0x54))) {
        return in_lr;
      }
      if (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202f5c0 + 0x58)) {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        if ((uVar3 * 2 >> 0x11 & 0xf) < 0xc) {
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 4;
          *(undefined *)(param_1 + 0xf) = 0;
          return in_lr;
        }
        cVar2 = '\0';
        *(undefined *)(param_1 + 0xd) = 2;
      }
      else {
        *(undefined *)(param_1 + 0x12) = 0x1e;
        cVar2 = '\x01';
      }
      goto LAB_080676b4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080177CC(param_1,0x601,2,0);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083626b0);
    *(undefined *)(param_1 + 0xbb) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080676b4:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

