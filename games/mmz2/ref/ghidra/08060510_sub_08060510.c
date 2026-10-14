// sub_08060510 at 0x08060510 (thumb)

undefined4 sub_08060510(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab00);
    uVar1 = sub_0807D8C8(param_1 + 0x54,1,(int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    uVar1 = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar1 = 3;
    }
    uVar1 = sub_0807D8C8(param_1 + 0x54,1,uVar1);
    *(undefined4 *)(param_1 + 0xd8) = uVar1;
    *(undefined *)(param_1 + 0x12) = 0x60;
    sub_080032EC(0x7d);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar5 = (byte *)(param_1 + 0xbe);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar5] * 8;
  *pbVar5 = *pbVar5 + 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0xd4) + 0xc)) {
      iVar2 = sub_0807DC9C(param_1,0,*(byte *)(param_1 + 10) >> 4 & 1);
      *(int *)(param_1 + 0xd4) = iVar2;
      uVar1 = sub_0807DC9C(param_1,1,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined4 *)(param_1 + 0xd8) = uVar1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    piVar3 = (int *)(param_1 + 0xd4);
    if ((*piVar3 != 0) && (1 < *(byte *)(*piVar3 + 0xc))) {
      *piVar3 = 0;
    }
    piVar4 = (int *)(param_1 + 0xd8);
    if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
      *piVar4 = 0;
    }
    if ((*piVar3 == 0) && (*piVar4 == 0)) {
      *(undefined *)(param_1 + 0xd) = 0x14;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

