// sub_08034CC4 at 0x08034CC4 (thumb)

undefined8 sub_08034CC4(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  bVar1 = sub_08037150();
  if ((char)bVar1 < '\0') {
LAB_08034db8:
    uVar2 = 0;
  }
  else {
    if (bVar1 == 0) {
      pcVar4 = (char *)(param_1 + 0x177);
      if (((*pcVar4 != '\0') &&
          (*(byte *)(param_1 + 0x2ba) < (byte)(&DAT_08335a80)[*(byte *)(param_1 + 0x1fc)])) &&
         (*(short *)(DAT_0202f070 + 10) != 0)) {
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 3;
        *(char *)(param_1 + 0x17b) = *pcVar4;
        *pcVar4 = '\0';
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
      }
    }
    else {
      pbVar3 = (byte *)(param_1 + 0x177);
      if (*pbVar3 < 3) goto LAB_08034db8;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 3;
      *(byte *)(param_1 + 0x17b) = *pbVar3;
      *pbVar3 = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
    }
    uVar2 = (uint)bVar1;
  }
  return CONCAT44(in_lr,uVar2);
}

