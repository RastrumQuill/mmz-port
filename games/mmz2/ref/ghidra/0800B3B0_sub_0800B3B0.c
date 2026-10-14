// sub_0800B3B0 at 0x0800B3B0 (thumb)

undefined4 sub_0800B3B0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_080CD374(&DAT_08315ca8,1,0x40);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    uVar1 = sub_080CD374(&DAT_08315cb0,0,0x40);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

