// sub_080BFF7C at 0x080BFF7C (thumb)

undefined4 sub_080BFF7C(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
      sub_080127E4(param_1,0x1d02);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348840;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
    *(undefined *)(param_1 + 0xbd) = 3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x10) * '\b' + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
  }
  else {
    sub_080128D4(param_1);
    if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
      sVar1 = *(short *)(param_1 + 0xbe);
      if (sVar1 != 0) {
        sub_080127E4(param_1,sVar1);
        sub_080128D4(param_1);
        *(short *)(param_1 + 0xbe) = 0;
      }
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        sub_080032EC(0xf2);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x12) & 0x7f) == 0) {
        sub_080032EC(0xf2);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -0x20;
      cVar2 = *(char *)(iVar3 + 0xc0);
      if (cVar2 != '\x01') {
        *(char *)(param_1 + 0xd) = cVar2;
      }
    }
  }
  return in_lr;
}

