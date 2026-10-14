// sub_080A1E44 at 0x080A1E44 (thumb)

undefined4 sub_080A1E44(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) ||
     (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == -1)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    iVar6 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    if (iVar6 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    *(byte *)(param_1 + 0xbd) = bVar1 >> 2;
    if (*(byte *)(param_1 + 0x12) < 0x21) {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) * '\x10' + ' ';
    break;
  case 2:
    sub_080128D4(param_1);
    uVar3 = sub_080EEF64((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) * 0x10 >> 0x10,
                         (*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) * 0x10 >> 0x10);
    iVar5 = (uVar3 & 0xffff) + 0x4000;
    uVar3 = iVar5 >> 8 & 0xff;
    pbVar4 = (byte *)(param_1 + 0x24);
    iVar6 = *pbVar4 - uVar3;
    if (iVar6 < 0) {
      if (3 < (int)(uVar3 - *pbVar4)) goto LAB_080a1f46;
LAB_080a1f42:
      *pbVar4 = (byte)((uint)iVar5 >> 8);
    }
    else {
      if (iVar6 < 4) goto LAB_080a1f42;
LAB_080a1f46:
      if (((*pbVar4 - uVar3) + 0x100 & 0xff) < 0x81) {
        cVar2 = -4;
      }
      else {
        cVar2 = '\x04';
      }
      *pbVar4 = *pbVar4 + cVar2;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_08098414(param_1 + 0x54,0x400,*pbVar4 + 0x40);
    *(char *)(param_1 + 0x12) = ('\x03' - *(char *)(param_1 + 0x11)) * '\x10' + '\b';
    sub_080032EC(0x2c);
    break;
  case 3:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    break;
  case 4:
    sub_080128D4(param_1);
    iVar6 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar6 = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    if (iVar6 == *(int *)(param_1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A1C38(param_1);
    }
  default:
    goto switchD_080a1e80_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080a1e80_caseD_5:
  return in_lr;
}

