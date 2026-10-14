// sub_0803A658 at 0x0803A658 (thumb)

undefined4 sub_0803A658(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\x04') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0x13) = 0xd;
    sub_0803A688(param_1);
  }
  return in_lr;
}

