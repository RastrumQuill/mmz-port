// sub_080B41C4 at 0x080B41C4 (thumb)

undefined4 sub_080B41C4(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0x10) * 9 + -0x36fc);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x800;
  pbVar1 = (byte *)(param_1 + 0xbc);
  bVar2 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_1c,&DAT_0886037c,0,bVar2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = *pbVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_08860398,0,bVar2);
    bVar2 = *pbVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_088603b4,0,bVar2);
  }
  else {
    bVar2 = *pbVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_088603d0,0,bVar2);
    bVar2 = *pbVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080D4898(&local_1c,&DAT_088603ec,0,bVar2);
  }
  sub_080D0894(1,&local_1c);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    sub_08002B10(0x2a);
  }
  else {
    sub_08002B10(0xa5);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0802AB70(3,0x1e,&local_1c);
  }
  else {
    sub_0802AB70(3,0x1d,&local_1c);
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

