// sub_08021900 at 0x08021900 (thumb)

undefined4 sub_08021900(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
    sub_08027188(param_1,0,0);
  }
  return in_lr;
}

