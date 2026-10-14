// sub_08001390 at 0x08001390 (thumb)

undefined4 sub_08001390(int param_1)

{
  undefined4 in_lr;
  
  if ((&DAT_03002a68)[param_1 * 0x18] != '\x01') {
    (&DAT_03002a68)[param_1 * 0x18] = '\x01';
  }
  return in_lr;
}

