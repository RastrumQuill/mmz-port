// sub_08045398 at 0x08045398 (thumb)

undefined4 sub_08045398(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = sub_0801E11C(9,param_1,&DAT_0833a9e0);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      *(undefined *)(param_1 + 0xd) = 0x1d;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

