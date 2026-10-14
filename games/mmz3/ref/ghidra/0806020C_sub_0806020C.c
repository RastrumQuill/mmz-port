// sub_0806020C at 0x0806020C (thumb)

undefined4 sub_0806020C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08060768(param_1,0);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xe) = 0x14;
    return in_lr;
  default:
    goto switchD_08060220_caseD_1;
  case 0x14:
    sub_08060768(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    break;
  case 0x16:
    sub_0800471C(0xfa);
    sub_0800393C(&DAT_085d7a74,(DAT_0202fa36 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7a80,(DAT_0202f836 - 4) * 0x20 + 0x200);
    sub_08060768(param_1,0xe);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0806034e;
  case 0x18:
    sub_08060768(param_1,0xf);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x19:
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    break;
  case 0x1a:
    sub_08060768(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x1b:
    uVar2 = (ushort)DAT_020301b2;
    if ((DAT_020301b2 & 1) == 0) {
      *(char *)(param_1 + 0xd) = (char)(uVar2 & 1);
      *(ushort *)(param_1 + 0xe) = uVar2 & 1;
    }
    goto switchD_08060220_caseD_1;
  }
  if (bVar1 == 0) {
LAB_0806034e:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08060220_caseD_1:
  return in_lr;
}

