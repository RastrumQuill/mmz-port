// sub_080DC368 at 0x080DC368 (thumb)

undefined4 sub_080DC368(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == -1) {
    sub_080DC238(param_1);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = ((byte)(uVar2 * 2 >> 0x11) & 0x1f) + 8;
  }
  if (0x1e < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

