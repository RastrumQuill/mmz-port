// sub_08059348 at 0x08059348 (thumb)

undefined4 sub_08059348(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      *(undefined *)(param_1 + 0xc6) = 1;
    }
    else if (*(byte *)(param_1 + 0x12) < 3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined *)(param_1 + 0xd) = 0x17;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xd5) = 0;
    }
  }
  return in_lr;
}

