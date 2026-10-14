// sub_08021CEC at 0x08021CEC (thumb)

undefined4 sub_08021CEC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  if (((int)*(char *)(param_1 + 0x71) == (uint)(byte)(&DAT_082a992e)[*(byte *)(param_1 + 0x11f)]) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    puVar3 = (undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 3;
    *(undefined *)(param_1 + 0xc3) = *puVar3;
    *puVar3 = *puVar3;
    sub_08021D84(param_1);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x120);
    bVar1 = sub_0801B50C(param_1,2);
    if ((bVar1 & *(byte *)(param_1 + 0x12d)) != 0) {
      bVar2 = bVar2 | 1;
    }
    *(byte *)(param_1 + 0x120) = bVar2;
  }
  return in_lr;
}

