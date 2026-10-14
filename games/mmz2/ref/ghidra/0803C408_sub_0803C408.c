// sub_0803C408 at 0x0803C408 (thumb)

undefined8 sub_0803C408(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_2 + 0xd) == 0) {
    uVar1 = (uint)*(byte *)(param_2 + 0xe);
  }
  else {
    uVar1 = *(byte *)(param_2 + 0xd) + 2;
  }
  if (uVar1 != *(byte *)(param_1 + 0x10)) {
    if ((*(char *)(param_1 + 0xd) == '\x01') && (*(byte *)(param_1 + 0x10) == 3)) {
      uVar1 = 3;
    }
    else {
      *(char *)(param_1 + 0x10) = (char)uVar1;
      sub_0803C450(param_1,*(undefined *)(param_1 + 0x66),(int)*(char *)(param_1 + 0x71),
                   (int)*(char *)(param_1 + 0x72));
    }
  }
  return CONCAT44(in_lr,uVar1);
}

