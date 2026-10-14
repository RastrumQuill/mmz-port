// sub_08065528 at 0x08065528 (thumb)

undefined4 sub_08065528(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    sub_08065AB4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_088575a4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

