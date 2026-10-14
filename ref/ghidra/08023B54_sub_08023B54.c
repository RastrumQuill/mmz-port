// sub_08023B54 at 0x08023B54 (thumb)

undefined4 sub_08023B54(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0xc0);
  uVar2 = (uint)*pbVar3;
  if ((((uVar2 == 0) &&
       (bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130), (bVar1 & 0xc) != 0))
      && ((~(*(byte *)(param_1 + 10) >> 4) & 1) != (bVar1 >> 3 & 1))) && ((bVar1 & 3) != 0)) {
    if ((bVar1 & 1) == 0) {
      *pbVar3 = 2;
      uVar2 = 2;
    }
    else {
      *pbVar3 = 1;
      uVar2 = 1;
    }
    sub_08018C20(param_1,(&DAT_082a9931)[uVar2],(int)*(char *)(param_1 + 0x71),
                 (int)*(char *)(param_1 + 0x72));
  }
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 2;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = (char)uVar2;
    sub_08027F54(param_1,uVar2 * 3 + 0xc & 0xff,0);
  }
  return in_lr;
}

