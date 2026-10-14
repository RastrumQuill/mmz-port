// sub_080A8F28 at 0x080A8F28 (thumb)

undefined4 sub_080A8F28(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,7);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(int *)(param_1 + 0x50) + 0x2c00;
    sub_08076710(&local_10,0x200,0xbf);
    sub_08001EAC(0xd);
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

