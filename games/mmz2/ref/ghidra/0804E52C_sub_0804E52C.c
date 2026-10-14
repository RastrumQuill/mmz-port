// sub_0804E52C at 0x0804E52C (thumb)

undefined4 sub_0804E52C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = sub_0809F09C(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    sub_080032EC(0x53);
    *(undefined *)(param_1 + 0x12) = 0x70;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffe00;
    }
    else {
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar4 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar4] * 8;
  *pbVar4 = *pbVar4 + 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      uVar2 = sub_0809F09C(param_1,0,1);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      sub_080032EC(0x53);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar3 < *(int *)(param_1 + 0xc4) + -0x7800) {
        *(undefined *)(param_1 + 0xd) = 0xb;
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
      }
    }
    else if (*(int *)(param_1 + 200) + 0x7800 < iVar3) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

