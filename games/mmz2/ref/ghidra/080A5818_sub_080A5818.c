// sub_080A5818 at 0x080A5818 (thumb)

undefined4 sub_080A5818(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xd) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    sub_080128D4(param_1);
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 4;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
      cVar2 = *(char *)(iVar4 + 0xd);
      if ((cVar2 == '\x05') || (cVar2 == '\x13')) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0x13) = 0;
      }
    }
    else if (bVar1 < 2) {
      if ((bVar1 == 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
        sub_08006E08(param_1 + 0x74,&DAT_08344ec4);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 4;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
      bVar1 = *(byte *)(param_1 + 0x13);
      *(byte *)(param_1 + 0x13) = bVar1 + 1;
      if ((bVar1 & 0xf) == 0) {
        sub_080B7330(param_1,0,0);
      }
      sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        sub_080AC60C(3,param_1 + 0x54);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
      }
    }
  }
  else {
    sub_080B7330(param_1,2,0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A5570(param_1);
  }
  return in_lr;
}

