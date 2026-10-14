// sub_08021930 at 0x08021930 (thumb)

undefined4 sub_08021930(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (((int)*(char *)(param_1 + 0x71) ==
       (uint)(byte)(&DAT_082a9920)[(uint)*(byte *)(param_1 + 0x11f) * 2]) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_080219B8(param_1);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x120);
    bVar1 = sub_0801B50C(param_1,1);
    if ((bVar1 & *(byte *)(param_1 + 0x12d)) != 0) {
      bVar2 = bVar2 | 1;
    }
    *(byte *)(param_1 + 0x120) = bVar2;
  }
  return in_lr;
}

