// sub_0805F6C4 at 0x0805F6C4 (thumb)

undefined4 sub_0805F6C4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    sub_0800471C(0xfc);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

