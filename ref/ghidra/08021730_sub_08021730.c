// sub_08021730 at 0x08021730 (thumb)

undefined4 sub_08021730(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08018C20(param_1,0x26,1,*(undefined *)(param_1 + 0x121));
    sub_080216F8(param_1);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x121);
    bVar1 = *pbVar2;
    *pbVar2 = (byte)(bVar1 - 1);
    if (bVar1 - 1 == 0) {
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 3;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 1;
      sub_08018C20(param_1,0x32,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
      *pbVar2 = 0x10;
    }
  }
  return in_lr;
}

