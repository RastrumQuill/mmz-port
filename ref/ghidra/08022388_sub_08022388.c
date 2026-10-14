// sub_08022388 at 0x08022388 (thumb)

undefined4 sub_08022388(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x121);
  bVar1 = *pbVar3;
  bVar2 = (byte)(bVar1 - 1);
  *pbVar3 = bVar2;
  if (bVar1 - 1 == 0) {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 3;
    *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc0);
    *(byte *)(param_1 + 0xc0) = bVar2;
    sub_08018C20(param_1,0x29,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *pbVar3 = 0x10;
  }
  return in_lr;
}

