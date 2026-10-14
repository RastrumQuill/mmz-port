// sub_0807B9C0 at 0x0807B9C0 (thumb)

undefined4 sub_0807B9C0(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5014);
    sub_080B6910(param_1,&local_18,2,0);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xbd) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + '\x04';
  if (cVar1 == -4) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar4 + 0x58) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 8;
  pbVar3 = (byte *)(param_1 + 0xbd);
  bVar2 = *pbVar3;
  *pbVar3 = bVar2 + 1;
  if (bVar2 == 0x50) {
LAB_0807ba56:
    local_18 = 0xfffffc00;
    local_14 = 0xffffe700;
    sub_080A4558(param_1,&local_18,2,0);
    sub_080032EC(0x91);
  }
  else if (bVar2 < 0x51) {
    if ((bVar2 == 0x40) || (bVar2 == 0x48)) goto LAB_0807ba56;
  }
  else if (bVar2 == 0x51) {
    if (8 < *(byte *)(param_1 + 0x13)) goto LAB_0807ba8c;
    *pbVar3 = 0;
  }
  if (*(byte *)(param_1 + 0x13) < 9) {
    return in_lr;
  }
LAB_0807ba8c:
  if (*pbVar3 == 0x3c) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

