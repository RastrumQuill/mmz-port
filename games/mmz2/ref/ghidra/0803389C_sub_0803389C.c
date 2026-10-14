// sub_0803389C at 0x0803389C (thumb)

undefined4 sub_0803389C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x18c) & 0x43) != 0) {
    if ((*(byte *)(param_1 + 0x18c) & 0x80) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

