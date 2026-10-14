// sub_08078E4C at 0x08078E4C (thumb)

undefined4 sub_08078E4C(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x93);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = DAT_0202e130;
  if (DAT_0202e130 == 0) {
    *(undefined *)(param_1 + 0xbf) = 1;
  }
  else {
    *(int *)(DAT_0202e130 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8);
    uVar1 = sub_0801EE9C(iVar2,1,1,1,1,0);
    pbVar3 = (byte *)(param_1 + 0xbe);
    iVar2 = (uint)*pbVar3 - (uVar1 & 0xff);
    if (iVar2 < 1) {
      *pbVar3 = 0;
    }
    else {
      *pbVar3 = (byte)iVar2;
    }
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  iVar2 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] + 0x100;
  if ((short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] + 0x100 < 0x100) {
    iVar2 = 0x100;
  }
  *(short *)(param_1 + 0x50) = (short)iVar2;
  *(short *)(param_1 + 0x52) = (short)iVar2;
  if (iVar2 == 0x100) {
    sub_08006E08(param_1 + 0x74,&DAT_0833fea8);
    *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) + -1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

