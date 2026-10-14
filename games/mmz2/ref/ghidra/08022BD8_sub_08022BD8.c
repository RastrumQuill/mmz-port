// sub_08022BD8 at 0x08022BD8 (thumb)

ulonglong sub_08022BD8(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x181) & 0x80) == 0) {
    *(char *)(param_1 + 0x4c) = (char)param_2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((param_2 & 1) << 4);
    if ((param_2 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  else {
    param_2 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  return CONCAT44(in_lr,param_2) & 0xffffffff000000ff;
}

