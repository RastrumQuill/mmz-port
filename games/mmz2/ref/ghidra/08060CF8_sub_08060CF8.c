// sub_08060CF8 at 0x08060CF8 (thumb)

undefined4 sub_08060CF8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6305);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x71) == '\x02') {
    sub_08006E08(param_1 + 0x74,&DAT_0833d424);
    if (*(char *)(param_1 + 0xf) == '\0') {
      switch(*(undefined *)(param_1 + 0xbd)) {
      case 0:
      case 3:
        sub_08002D68(0x8d,0x2e0);
        sub_08002EF0(0x8d);
        *(undefined *)(param_1 + 0xf) = 6;
        break;
      case 1:
      case 4:
        sub_08002D68(0x8e,0x2e0);
        sub_08002EF0(0x8e);
        *(undefined *)(param_1 + 0xf) = 5;
        break;
      case 2:
        sub_08002D68(0x8f,0x2e0);
        sub_08002EF0(0x8f);
        *(undefined *)(param_1 + 0xf) = 8;
      }
    }
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833d3f4);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08006E08(param_1 + 0x74,&DAT_0833d3c4);
    bVar1 = sub_080EF1E8(*(byte *)(param_1 + 0xbd) + 1,5);
    *(byte *)(param_1 + 0xbd) = bVar1;
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

