// sub_0806BCA4 at 0x0806BCA4 (thumb)

undefined4 sub_0806BCA4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x81b);
    }
    else {
      sub_080127E4(param_1,0x81a);
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833e3d0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

