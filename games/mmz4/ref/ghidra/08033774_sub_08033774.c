// sub_08033774 at 0x08033774 (thumb)

undefined4 sub_08033774(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x146) = 0;
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x26f) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0x101) = 4;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08033B98(param_1);
  }
  else if (((*(uint *)(param_1 + 600) & 0x40) == 0) || ((*(ushort *)(param_1 + 200) & 0x40) == 0)) {
    if (((*(uint *)(param_1 + 600) & 0x80) == 0) || ((*(ushort *)(param_1 + 200) & 0x80) == 0)) {
      *(undefined *)(param_1 + 0x101) = 1;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08033864(param_1);
    }
    else {
      *(undefined *)(param_1 + 0x101) = 6;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08033CAC(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x101) = 7;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08033D20(param_1);
  }
  return in_lr;
}

