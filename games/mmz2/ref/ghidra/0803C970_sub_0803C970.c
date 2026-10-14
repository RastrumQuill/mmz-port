// sub_0803C970 at 0x0803C970 (thumb)

undefined8 sub_0803C970(int param_1,int param_2)

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
    *(char *)(param_1 + 0x10) = (char)uVar1;
    sub_0803C9A8(param_1,*(undefined *)(param_1 + 0x11),(int)*(char *)(param_1 + 0x71),
                 (int)*(char *)(param_1 + 0x72));
  }
  return CONCAT44(in_lr,uVar1);
}

