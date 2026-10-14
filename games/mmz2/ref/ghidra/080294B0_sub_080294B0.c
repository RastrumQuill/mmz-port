// sub_080294B0 at 0x080294B0 (thumb)

undefined4 sub_080294B0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_0801E9FC(param_1,0x88);
    DAT_0202e128 = 1;
  }
  return in_lr;
}

