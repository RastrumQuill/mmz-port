// sub_08025440 at 0x08025440 (thumb)

undefined4 sub_08025440(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0802549e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08015EEC(param_1,0x1500);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08015F80(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  sub_08015EEC(param_1,0x3500);
  DAT_02022ad4 = DAT_02022ad4 | 0x20;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0802549e:
  sub_08015F80(param_1);
  return in_lr;
}

