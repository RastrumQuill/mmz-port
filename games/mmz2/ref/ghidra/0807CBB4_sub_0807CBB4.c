// sub_0807CBB4 at 0x0807CBB4 (thumb)

undefined4 sub_0807CBB4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x49);
    sub_080127E4(param_1,0x5402);
    sub_08006E08(param_1 + 0x74,&DAT_08340478);
    *(undefined *)(param_1 + 0xbd) = 3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x12) == '\0')) {
    bVar1 = 0;
    do {
      sub_080B0ACC(param_1 + 0x54,&DAT_083405e4,0,~(*(byte *)(param_1 + 10) >> 4) & 1);
      bVar1 = bVar1 + 1;
    } while (bVar1 < 3);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

