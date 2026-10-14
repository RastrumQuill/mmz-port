// sub_080AE138 at 0x080AE138 (thumb)

undefined4 sub_080AE138(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CC9C();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0xa202);
    sub_08005784(param_1 + 0x74,&DAT_0885f9c4);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + -0x6800;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x4200;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0xc < bVar1) {
    if (*(byte *)(param_1 + 0x13) < 4) {
      sub_080ADD84(iVar2,*(char *)(param_1 + 0x13) * -0x10 + '`');
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    else {
      *(undefined *)(param_1 + 0xbe) = 0x20;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08002B10(0x19b);
  }
  return in_lr;
}

