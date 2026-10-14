// sub_080C5BBC at 0x080C5BBC (thumb)

undefined4 sub_080C5BBC(uint param_1)

{
  undefined4 in_lr;
  
  if ((param_1 & 0xff) - 1 < 0x4e) {
    sub_080B51BC(param_1 & 0xff);
  }
  return in_lr;
}

