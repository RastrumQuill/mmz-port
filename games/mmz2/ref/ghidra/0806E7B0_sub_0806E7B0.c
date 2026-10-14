// sub_0806E7B0 at 0x0806E7B0 (thumb)

undefined4 sub_0806E7B0(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x1528);
    bVar4 = *(byte *)(param_1 + 0xb4);
    if (bVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar4 & 1) << 4);
    *(undefined *)(param_1 + 0x12) = 0x17;
    sub_080B2A10(param_1 + 0x54,3,*(byte *)(param_1 + 0xb4));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    iVar5 = param_1 + 0x54;
    pbVar3 = (byte *)(param_1 + 0xb4);
    bVar4 = *pbVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar4 = bVar4 | 0x10;
    }
    sub_080B0ACC(iVar5,&DAT_0833e9b4,0,bVar4);
    bVar4 = *pbVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar4 = bVar4 | 0x10;
    }
    sub_080B0ACC(iVar5,&DAT_0833e9d0,0,bVar4);
    bVar4 = *pbVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar4 = bVar4 | 0x10;
    }
    sub_080B0ACC(iVar5,&DAT_0833e9ec,0,bVar4);
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080AC60C(1,&local_20);
    sub_080032EC(0x2a);
    sub_0801DD2C(4,iVar5);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar5);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

