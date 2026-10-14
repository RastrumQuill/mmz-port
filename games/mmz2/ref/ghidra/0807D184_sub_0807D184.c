// sub_0807D184 at 0x0807D184 (thumb)

undefined4 sub_0807D184(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5800);
    sub_08006E08(param_1 + 0x74,&DAT_08340670);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x3f < bVar1) {
    sub_0807D7E0(param_1);
  }
  return in_lr;
}

