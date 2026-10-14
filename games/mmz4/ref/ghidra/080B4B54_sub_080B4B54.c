// sub_080B4B54 at 0x080B4B54 (thumb)

/* WARNING: Removing unreachable block (ram,0x080b4c60) */

undefined4 sub_080B4B54(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0xb6) * 3 + -0x35fb);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    sub_08002B10(0x16f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080B5214(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if ((*(char *)(param_1 + 0xe) == '\x02') &&
     (sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4), sVar2 != 0)) {
    sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0xb6) * 3 + -0x35f9);
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CF00(param_1,(ushort)*(byte *)(param_1 + 0xb6) * 3 + -0x35fa);
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffbda;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe4c;
      *(undefined4 *)(param_1 + 0x68) = 0x40;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x426;
      }
      if (*(byte *)(param_1 + 0xb6) != 0) {
        iVar4 = *(int *)(param_1 + 0x5c) * -0x100;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      }
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(char *)(param_1 + 0xe) = cVar1;
  }
  return in_lr;
}

