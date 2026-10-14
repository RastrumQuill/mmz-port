// sub_08034598 at 0x08034598 (thumb)

undefined8 sub_08034598(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x131);
    cVar2 = *(char *)(param_1 + 0xc0);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x132);
    cVar2 = *(char *)(param_1 + 0xc1);
  }
  uVar4 = 0;
  if (cVar2 != '\x03') {
    uVar4 = (uint)(*(char *)(param_1 + 0xc3) == '\x03');
    cVar2 = sub_08034818(param_1,0x34);
    if (cVar2 != '\0') {
      uVar4 = uVar4 + 1;
    }
    if ((*(char *)(param_1 + 0xc4) != '\0') && (uVar4 == 2)) {
      uVar4 = 1;
    }
  }
  if (bVar1 < (byte)(&DAT_0835b194)[uVar4]) {
    if (bVar1 < (byte)(&UNK_0835b197)[uVar4]) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 2;
  }
  return CONCAT44(in_lr,uVar3);
}

