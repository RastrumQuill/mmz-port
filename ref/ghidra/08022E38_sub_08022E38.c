// sub_08022E38 at 0x08022E38 (thumb)

undefined4 sub_08022E38(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
    sub_08027188(param_1,4,0);
  }
  if (('\0' < *(char *)(param_1 + 0x120)) &&
     ((*(byte *)(param_1 + 0x19a) < 0x3c ||
      ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) == 0)))) {
    *(char *)(param_1 + 0x120) = '\0';
  }
  return in_lr;
}

