// sub_08039164 at 0x08039164 (thumb)

undefined4 sub_08039164(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if ((DAT_02022b6e & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

