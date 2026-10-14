// sub_08035DC8 at 0x08035DC8 (thumb)

undefined4 sub_08035DC8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x26f) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0x101) = 4;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08035FF8(param_1);
  }
  else if (((*(uint *)(param_1 + 600) & 0x40) == 0) || (*(char *)(param_1 + 0xc5) != '\v')) {
    if (((*(uint *)(param_1 + 600) & 0x80) == 0) || ((*(ushort *)(param_1 + 200) & 0x10) == 0)) {
      *(undefined *)(param_1 + 0x101) = 1;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08035EAC(param_1);
    }
    else {
      *(undefined *)(param_1 + 0x101) = 7;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08036210(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x101) = 6;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08036194(param_1);
  }
  return in_lr;
}

