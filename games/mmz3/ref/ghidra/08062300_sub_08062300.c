// sub_08062300 at 0x08062300 (thumb)

undefined4 sub_08062300(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08361f64);
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_08017700(param_1,0xd600);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    pbVar3 = (byte *)(param_1 + 0xc4);
    if (*pbVar3 == 0) {
      sub_08061BC0(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    bVar1 = *pbVar3;
    *pbVar3 = bVar1 + 1;
    if (1 < (byte)(bVar1 + 1)) {
      *pbVar3 = 0;
    }
  }
  uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  return in_lr;
}

