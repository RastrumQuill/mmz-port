// sub_0802DB7C at 0x0802DB7C (thumb)

undefined4 sub_0802DB7C(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x1200);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1200);
    if ((*pcVar1 == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if (*(char *)(param_1 + 0xc2) == '\x02') {
        sub_08038394(param_1,0xf);
      }
      else {
        sub_08038394(param_1,0xe);
      }
      *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 4;
    *(undefined *)(param_1 + 0xed) = 5;
    *(undefined *)(param_1 + 0xee) = 0;
  }
  return in_lr;
}

