// sub_0805F1DC at 0x0805F1DC (thumb)

undefined4 sub_0805F1DC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) == '\x02') {
    sub_08007390(param_1 + 0x74,&DAT_08361ae8);
  }
  if (*(char *)(param_1 + 0x71) == '\x03') {
    sub_08007390(param_1 + 0x74,&DAT_08361a88);
  }
  sub_0806082C(param_1,*(undefined4 *)(param_1 + 0x5c));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08060768(param_1,1);
  }
  return in_lr;
}

