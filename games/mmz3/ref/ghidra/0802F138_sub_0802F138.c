// sub_0802F138 at 0x0802F138 (thumb)

undefined4 sub_0802F138(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x124);
  if ((*pbVar3 & 0x40) == 0) {
    bVar2 = *pbVar3 | 5;
    *pbVar3 = bVar2;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      bVar1 = 0x10;
    }
    else {
      bVar1 = 0x20;
    }
    *pbVar3 = bVar2 | bVar1;
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ae70 + (uint)*(byte *)(param_1 + 0xed) * 4));
  }
  else {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0802D5DC(param_1);
  }
  return in_lr;
}

