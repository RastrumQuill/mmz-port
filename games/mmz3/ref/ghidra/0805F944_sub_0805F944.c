// sub_0805F944 at 0x0805F944 (thumb)

undefined4 sub_0805F944(int param_1)

{
  undefined4 in_lr;
  
  sub_080608EC();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08060768(param_1,0xc);
  }
  return in_lr;
}

