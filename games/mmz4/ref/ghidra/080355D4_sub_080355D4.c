// sub_080355D4 at 0x080355D4 (thumb)

undefined4 sub_080355D4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x26f) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 10;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x101) = 4;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08033B98(param_1);
  }
  else if (((*(uint *)(param_1 + 600) & 0xc0) == 0) || (*(char *)(param_1 + 0xc5) != '\v')) {
    if ((*(ushort *)(param_1 + 200) & 0x20) == 0) {
      *(undefined *)(param_1 + 0x101) = 1;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_080356C0(param_1);
    }
    else {
      *(undefined *)(param_1 + 0x101) = 2;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_080357F0(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x101) = 3;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_0803596C(param_1);
  }
  return in_lr;
}

