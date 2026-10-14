// sub_080D7F2C at 0x080D7F2C (thumb)

undefined4 sub_080D7F2C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080D7FC0();
  return in_lr;
}

