// sub_080B4E74 at 0x080B4E74 (thumb)

undefined4 sub_080B4E74(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xc) = 2;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(iVar3 + 9)] + 8);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_08005760(param_1 + 0x74,&DAT_0886046c,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80b4a71;
    *(undefined *)(param_1 + 0xb7) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    sub_0801CF00(param_1,0xca0b);
    sub_08002B10(0x1c1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar3;
  if (((0 < iVar3) && (*(char *)(param_1 + 0xe) == '\x01')) &&
     (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4), sVar1 != 0)) {
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_0801CF00(param_1,0xca0c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

