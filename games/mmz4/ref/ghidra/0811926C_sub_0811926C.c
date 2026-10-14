// sub_0811926C at 0x0811926C (thumb)

undefined4 sub_0811926C(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0xdf7);
  if (*pbVar2 == 0) {
    *(undefined *)(param_1 + 0xdcd) = 0;
    *pbVar2 = *pbVar2 + 1;
    return in_lr;
  }
  *(undefined *)(param_1 + 0xe04) = 1;
  bVar1 = DAT_0202e8b4 & 0x20;
  if ((DAT_0202e8b4 & 0x20) == 0) {
    if (*(char *)(param_1 + 0xdcd) == '\0') {
      sub_08002B10(4);
      *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
      return in_lr;
    }
    if (DAT_02000764 == 0) {
      sub_0810D214("\r%2238",1,0x10);
      return in_lr;
    }
    *(byte *)(param_1 + 3) = bVar1;
    *pbVar2 = bVar1;
  }
  else {
    sub_0810D214(&DAT_0886a8e0,1,0x10);
    bVar1 = (byte)DAT_02000764 & 1;
    if ((DAT_02000764 & 1) != 0) {
      sub_08002B10(2);
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x20;
      *(undefined *)(param_1 + 1) = 3;
      *(undefined *)(param_1 + 2) = 3;
      *(undefined *)(param_1 + 3) = 0;
      *pbVar2 = 0;
      return in_lr;
    }
    if ((DAT_02000764 & 2) == 0) {
      return in_lr;
    }
    sub_08002B10(3);
    *(byte *)(param_1 + 3) = bVar1;
    *pbVar2 = bVar1;
  }
  sub_08118474(param_1);
  return in_lr;
}

