// sub_0802DEE0 at 0x0802DEE0 (thumb)

undefined4 sub_0802DEE0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined uVar5;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  cVar1 = sub_08036F18(param_1);
  if (cVar1 == '\0') {
    uVar5 = 1;
    pbVar4 = (byte *)(param_1 + 0x195);
    iVar3 = param_1 + 0x198;
    bVar2 = *(byte *)(iVar3 + (uint)*pbVar4);
    if ((bVar2 & 0xc) == 0) {
      if (((bVar2 & 3) != 0) && (uVar5 = 5, (bVar2 & 1) != 0)) {
        uVar5 = 4;
      }
    }
    else {
      *(byte *)(param_1 + 0x4c) = bVar2 >> 3 & 1;
      bVar2 = *(byte *)(iVar3 + (uint)*pbVar4) >> 3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
      if ((bVar2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      if (((*(byte *)(iVar3 + (uint)*pbVar4) & 3) != 0) &&
         (uVar5 = 3, (*(byte *)(iVar3 + (uint)*pbVar4) & 1) != 0)) {
        uVar5 = 2;
      }
    }
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = uVar5;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0802E01C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 6;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0802E5F8(param_1);
  }
  return in_lr;
}

