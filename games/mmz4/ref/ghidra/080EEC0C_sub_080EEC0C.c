// sub_080EEC0C at 0x080EEC0C (thumb)

undefined4 sub_080EEC0C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CF00(param_1,0x400b);
    bVar4 = *(byte *)(param_1 + 0x11) & 3;
    if (bVar4 == 1) {
      uVar1 = 0x700;
LAB_080eec52:
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
    }
    else if (bVar4 < 2) {
      if ((*(byte *)(param_1 + 0x11) & 3) == 0) {
        uVar1 = 0x600;
        goto LAB_080eec52;
      }
    }
    else if (bVar4 == 2) {
      uVar1 = 0x650;
      goto LAB_080eec52;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto switchD_080eec70_caseD_7;
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    uVar3 = (uint)*(byte *)(param_1 + 0x12) << 1;
    goto LAB_080eed4a;
  case 1:
    bVar4 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar4 + 6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = bVar4 + 0x46;
    break;
  case 2:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    uVar3 = (uint)*(byte *)(param_1 + 0x12) << 1;
    goto LAB_080eed4a;
  case 3:
    bVar4 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar4 + 6;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = bVar4 + 0x46;
    break;
  case 4:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    uVar3 = (uint)*(byte *)(param_1 + 0x12) << 1;
    goto LAB_080eed4a;
  case 5:
    bVar4 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar4 + 8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = bVar4 + 0x48;
    break;
  case 6:
    bVar4 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar4 + 4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = bVar4 + 0x44;
    break;
  default:
    goto switchD_080eec70_caseD_7;
  }
  uVar3 = (uint)(iVar2 << 0x18) >> 0x17;
LAB_080eed4a:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + uVar3) * 2;
switchD_080eec70_caseD_7:
  if (((*(uint *)(param_1 + 0x10) & 0xff000100) == 0) && (0x1c2000 < *(int *)(param_1 + 0x54))) {
    sub_08002B10(0x58);
    *(undefined *)(param_1 + 0x13) = 1;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

