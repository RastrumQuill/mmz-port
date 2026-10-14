// sub_08024B00 at 0x08024B00 (thumb)

undefined4 sub_08024B00(int param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = sub_0801B748();
  iVar3 = sub_080262DC(param_1,5,uVar1);
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08018BE8(param_1,0x38);
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
    sub_08024BB0(param_1);
  }
  return in_lr;
}

