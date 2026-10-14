// sub_0805F88C at 0x0805F88C (thumb)

undefined4 sub_0805F88C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x0f') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_0800471C(0xfc);
    sub_080AF67C(&local_14,0x3c0,0x10,1);
    sub_080AF67C(&local_14,0x3c0,0x30,1);
    sub_080AF67C(&local_14,0x3c0,0x50,1);
    sub_080AF67C(&local_14,0x3c0,0x70,1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

