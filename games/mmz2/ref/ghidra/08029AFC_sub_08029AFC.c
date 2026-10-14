// sub_08029AFC at 0x08029AFC (thumb)

undefined4 sub_08029AFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0801EA38(param_1,0x15,1,*(undefined *)(param_1 + 0x2b9));
    sub_08029A98(param_1);
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x2b9);
    bVar1 = *pbVar3;
    bVar2 = (byte)(bVar1 - 1);
    *pbVar3 = bVar2;
    if (bVar1 - 1 == 0) {
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 3;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 1;
      *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
      *(byte *)(param_1 + 0x179) = bVar2;
      sub_0801EA38(param_1,0x22,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
      *pbVar3 = 0x10;
    }
  }
  return in_lr;
}

