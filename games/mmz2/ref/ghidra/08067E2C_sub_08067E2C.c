// sub_08067E2C at 0x08067E2C (thumb)

undefined4 sub_08067E2C(int param_1)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xb6) = 0;
    sub_080127E4(param_1,0x601);
    sub_080032EC(0x44);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(DAT_0202e130 + 0x54);
    *(undefined *)(param_1 + 0xc3) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  pbVar2 = (byte *)(param_1 + 0xb6);
  if ((ushort)*(byte *)(param_1 + 0x12) == *(ushort *)(&DAT_080ef742 + (uint)*pbVar2 * 4)) {
    if (*(short *)(&DAT_080ef742 + (*pbVar2 + 1) * 4) == 0) {
      *(undefined *)(param_1 + 0xd) = 0xff;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *pbVar2 = *pbVar2 + 1;
    sub_080127E4(param_1,(&DAT_080ef740)[(uint)*pbVar2 * 2]);
  }
  if ((*pbVar2 == 2) && (*(char *)(param_1 + 0x12) == '\x03')) {
    iVar3 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
    }
    iVar3 = sub_080EF150(iVar3,0x2c00);
    if (iVar3 == 0) {
      uVar4 = 0x2000;
    }
    else if (iVar3 == 1) {
      uVar4 = 0x4000;
    }
    else {
      uVar4 = 0x6000;
    }
    sub_080032EC(0x2d);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_0809892C(param_1,&local_1c,uVar4);
  }
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x58) + (*(char *)(param_1 + 0xb7) + 1) * 0x100);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

