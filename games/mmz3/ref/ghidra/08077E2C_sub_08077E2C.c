// sub_08077E2C at 0x08077E2C (thumb)

undefined8 sub_08077E2C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) ||
     (*(short *)(*(int *)(param_1 + 0x2c) + 0xa4) != 0)) {
    uVar1 = 0;
  }
  else {
    sub_08017700(param_1,*(byte *)(param_1 + 0x10) | 0x2f00);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x78;
    uVar1 = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

