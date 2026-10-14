// sub_0805FF24 at 0x0805FF24 (thumb)

undefined4 sub_0805FF24(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab00);
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar2 = sub_0807D8C8(param_1 + 0x54,0,(int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2);
      *(int *)(param_1 + 0xcc) = iVar2;
    }
    if (*(int *)(param_1 + 0xd0) == 0) {
      uVar3 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar3 = 3;
      }
      iVar2 = sub_0807D8C8(param_1 + 0x54,0,uVar3);
      *(int *)(param_1 + 0xd0) = iVar2;
    }
    *(undefined *)(param_1 + 0x12) = 0x60;
    sub_080032EC(0x7d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar4 = (byte *)(param_1 + 0xbe);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar4] * 8;
  *pbVar4 = *pbVar4 + 1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x30;
  }
  return in_lr;
}

