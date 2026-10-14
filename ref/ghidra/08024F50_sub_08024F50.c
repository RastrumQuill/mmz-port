// sub_08024F50 at 0x08024F50 (thumb)

undefined4 sub_08024F50(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  cVar1 = sub_0801B8C8();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x120) = 0;
    *(undefined *)(param_1 + 0x11f) = 0;
    sub_08018BE8(param_1,0x7b);
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 5;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    *(undefined *)(param_1 + 0x11f) = 5;
    sub_08018BE8(param_1,0x81);
  }
  bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar2 & 0xc) != 0) {
    bVar2 = bVar2 >> 3;
    *(byte *)(param_1 + 0x44) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  return in_lr;
}

