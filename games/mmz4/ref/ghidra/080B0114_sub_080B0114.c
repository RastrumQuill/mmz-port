// sub_080B0114 at 0x080B0114 (thumb)

undefined4 sub_080B0114(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 in_lr;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_080D0894(2,param_1 + 0x54);
    pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0xb7);
    *pbVar2 = *pbVar2 & ~('\x01' << *(sbyte *)(param_1 + 0x11));
    sub_0802AB70(1,0xff,param_1 + 0x54);
    sub_08002B10(0x2a);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    pcVar1 = (char *)(param_1 + 0xb5);
    if ((*pcVar1 == '\0') && (*(char *)(param_1 + 0x12) != -1)) {
      bVar3 = (*(uint *)(param_1 + 0x8c) & 0x10000) == 0;
      if (bVar3) {
        sub_08002B10(0x2a);
      }
      sub_080E4D94(param_1 + 0x54,bVar3,0);
    }
    else {
      sub_080E4D94(param_1 + 0x54,2,0);
      if (*pcVar1 == '\x01') {
        sub_08002B10(0x2a);
      }
      else {
        sub_08002B10(0x35);
      }
    }
    if (*pcVar1 != '\x02') {
      sub_0802AB70(3,3,param_1 + 0x54);
    }
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

