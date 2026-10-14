// sub_080ECD24 at 0x080ECD24 (thumb)

undefined4 sub_080ECD24(uint param_1)

{
  undefined4 in_lr;
  
  if ((param_1 & 0xff) - 1 < 0x51) {
    sub_080D5B80(param_1 & 0xff);
  }
  return in_lr;
}

