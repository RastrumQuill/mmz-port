// sub_0805B6A0 at 0x0805B6A0 (thumb)

undefined4 sub_0805B6A0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    local_14 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x13) * -0x2000;
    local_10 = sub_08008360(local_14,*(undefined4 *)(param_1 + 0x50));
    sub_0808D58C(&local_14,6,0);
  }
  else if ((*(char *)(param_1 + 0x12) + 4U & 7) == 0) {
    local_14 = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x13) * 0x2000;
    local_10 = sub_08008360(local_14,*(undefined4 *)(param_1 + 0x50));
    sub_0808D58C(&local_14,6,1);
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (2 < bVar1) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) ||
     (*(int *)(*(int *)(param_1 + 0x20) + 0xc0) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805B740(param_1);
  }
  return in_lr;
}

