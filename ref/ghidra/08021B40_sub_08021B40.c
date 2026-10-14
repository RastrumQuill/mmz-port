// sub_08021B40 at 0x08021B40 (thumb)

undefined4 sub_08021B40(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_0801B8C8();
  if (cVar1 == '\0') {
    iVar3 = 0;
    bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar2 & 0xc) == 0) {
      if (((bVar2 & 3) != 0) && (iVar3 = 2, (bVar2 & 1) != 0)) {
        iVar3 = 3;
      }
    }
    else {
      *(byte *)(param_1 + 0x44) = bVar2 >> 3 & 1;
      if ((bVar2 >> 3 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      if (((bVar2 & 3) != 0) && (iVar3 = 2, (bVar2 & 1) != 0)) {
        iVar3 = 1;
      }
    }
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = (char)iVar3;
    *(undefined *)(param_1 + 0x120) = 0;
    *(undefined *)(param_1 + 0x11f) = 0;
    sub_08018BE8(param_1,(&DAT_082a992a)[iVar3]);
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 5;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 5;
    *(undefined *)(param_1 + 0x11f) = 5;
    sub_08018BE8(param_1,0x52);
  }
  return in_lr;
}

