// sub_0809A310 at 0x0809A310 (thumb)

undefined4 sub_0809A310(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (bVar1 == 5) {
    sub_08006E08(param_1 + 0x74,&DAT_083434fc);
  }
  else if (bVar1 < 6) {
    if (bVar1 == 2) {
      sub_08006E08(param_1 + 0x74,&DAT_083434cc);
    }
  }
  else if (bVar1 == 8) {
    sub_08006E08(param_1 + 0x74,&DAT_0834352c);
  }
  else if (bVar1 == 0xc) {
    sub_08006E08(param_1 + 0x74,&DAT_0834355c);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809A108(param_1);
  }
  return in_lr;
}

