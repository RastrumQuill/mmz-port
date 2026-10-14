// sub_0803762C at 0x0803762C (thumb)

undefined4 sub_0803762C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x0f') {
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(undefined4 *)(param_1 + 0x50);
    sub_08001EAC(0x41);
    sub_0807F314(&local_10,0x3c0,0x40,1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

