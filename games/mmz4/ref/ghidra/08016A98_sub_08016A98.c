// sub_08016A98 at 0x08016A98 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08016A98(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    sub_080E8F60();
    *(int *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    sub_080E8F60();
    *(int *)(param_1 + 0x84) = 0;
  }
  if (DAT_0202dae8 != 0) {
    sub_080E8F60();
    DAT_0202dae8 = 0;
  }
  if (_DAT_0202daec != 0) {
    sub_080E8F60();
    _DAT_0202daec = 0;
  }
  if (DAT_0202daf0 != 0) {
    sub_080E8F60();
    DAT_0202daf0 = 0;
  }
  sub_08002B5C(0x74);
  return in_lr;
}

