// sub_08030B00 at 0x08030B00 (thumb)

undefined4 sub_08030B00(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  cVar1 = sub_08036FD0(param_1);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 1;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08030BA8(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 2;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08030D8C(param_1);
  }
  return in_lr;
}

