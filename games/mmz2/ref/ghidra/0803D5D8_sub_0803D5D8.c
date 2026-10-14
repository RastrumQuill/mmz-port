// sub_0803D5D8 at 0x0803D5D8 (thumb)

undefined8 sub_0803D5D8(int param_1,int param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_2 + 0xd);
  if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0x10)) {
    *(byte *)(param_1 + 0x10) = bVar1;
    sub_0803D608(param_1,*(undefined *)(param_1 + 0x13),(int)*(char *)(param_1 + 0x71),
                 (int)*(char *)(param_1 + 0x72));
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

